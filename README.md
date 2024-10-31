# 赛事管理系统设计文档

  

## 一、系统概述

本赛事管理系统旨在为高校赛事提供参赛队伍信息的全面管理，包括信息录入、查询、排序、和删除等核心功能。系统采用C语言和Qt框架进行开发，通过GUI页面使数据操作直观化，结合MySQL数据库实现数据的永久存储，确保数据的完整性和一致性。该系统支持按参赛学校或赛事类别进行多条件查询和排序，并可通过模糊搜索简化查询操作。此外，创新功能还包括批量删除和连续查询等，提升了管理的灵活性。



## 二、功能设计

### 1.基本功能

1. **参赛队基本信息管理**
   - 能够管理各参赛队的基本信息，包括**参赛作品名称、参赛学校、赛事类别、参赛者、指导老师**。
   - 支持增加修改参赛队伍的信息。
2. **参赛队伍信息查询**
   - 根据输入的相关信息，输出该赛事类别对应的基本信息，包括参赛队编号、参赛作品名称、参赛学校、赛事类别、参赛者和指导老师信息。
3. **按参赛学校或赛事类别查询**
   - 根据输入的参赛学校名称，若查询成功，输出该学校参赛的所有团队的基本信息，且可按照多种排序方式输出。

### 2.创新点

1.	**功能创新**
	
	- 支持批量删除任意属性的队伍信息。
	- 支持查询任意字段任意内容的队伍，并提供连续查询。
	- 支持在当前查询页面任意字段的升降序排序。
	- 支持模糊搜索，并不需要完全匹配。
	- 实现了默认插入和空数据检查，防止插入数据非法
	
2.	**使用QT架构开发GUI页面**
   - 通过使用QT开发的GUI页面，使数据的显示和管理操作可视化，方便管理和操作信息。
   - 通过QSqlDataBase、QSqlTablemodel等组件实现了**实时反馈**，并提供了简单的表格直接修改。
   - 进行了的ui布局设计和美化，添加了按钮和程序的图标。
   - 通过GUI的提示窗口，实时提示和反馈操作结果。
   
3.	**采用MySQL存储数据**
   - 程序使用MySQL进行数据永久化存储。
   - 提供了远程访问数据库的功能，可以访问异地数据库的信息。 
   
4.	**登录功能**
   
   - 提供了登录指定的MYSQL数据库和表选项，可以通过登录时使用不同的账号密码管理不同的数据库。
   
5.	**使用Git进行代码同步**
   
   - 使用Git和Github进行版本控制，方便过程中进行修改和提交。
   
     

## 三、系统架构

1. **数据存储层**
    - 采用数据库存储参赛队伍的基本信息，选择关系型数据库如MySQL。
    - 设计合适的数据表结构，确保数据的完整性和一致性。
2. **业务逻辑层**
    - 实现对参赛队伍信息的各种操作逻辑，包括增加、删除、修改、查询等。
    - 处理按参赛学校或赛事类别查询的逻辑，并进行信息排序。
3. **用户界面层**
    - 提供友好的用户界面，方便用户输入和查看参赛队伍信息。
    - 接收用户的操作指令，并将结果反馈给用户。
    - ![](E:\桌面\新建文件夹\1c93cca4d920625a11fdc1b96410e220.png)



## 四、数据库设计

1. **参赛队伍信息表（team_info）**

   ```sql
   CREATE TABLE team_info (
     team_id INT PRIMARY KEY AUTO_INCREMENT,
     work_name tinytext NOT NULL CHECK (work_name <> ''),
     school_name tinytext NOT NULL CHECK (school_name <> ''),
     event_category tinytext NOT NULL CHECK (event_category <> ''),
     participants tinytext NOT NULL CHECK (participants <> ''),
     instructor tinytext CHECK (instructor <> '')
   );
   ```
2. **字段说明**

   - `team_id` 类型为 `INT`，`primary key` 声明这个字段为主键，不允许重复。`auto_increment` 将`team_id`设置为自增类型，从而支持空白插入数据。

   - 其余五个字段类型为 `tinytext` 存储一个简短字符串，`NOT NULL` 使这些字段不能为空数据，`check（xx <> ''）`确保不能为空字符串，同时确保数据合法。

     

## 五、功能实现

1. **登录功能**
   - 程序启动后首先进入登陆界面，输入用户名和密码后点击登录按钮，触发登录按钮的槽函数：通过对两个行文本编辑框的数据读取得到输入的用户名和密码，静态类 `dbconnection` 的 `set` 方法设置连接数据库的用户名和密码并进行连接。连接成功后执行信息管理页面程序。


2. **参赛队信息基本管理功能**

   - **增加参赛队伍信息**：提供了默认插入和指定id插入两种方式。点击插入按钮后会弹出队伍信息编辑窗口，点击确定后将信息编辑窗口的信息读取并以MYSQL指令的格式通过 `QSqlQuery` 类向数据库发送指令，并接受指令执行结果。根据结果弹出相应提示。

   - **删除参赛队伍信息**：点击删除按钮后弹出删除窗口，可以选择删除属性和删除内容，读取选择的属性和输入内容后，会将具有这一类属性的数据统一删除，也可以指定id单独删除某一条数据。

   - **修改参赛队伍信息**：用户输入参赛队编号后，弹出队伍信息编辑窗口，点击确定后更改后的将信息更新到数据库。


3. **参赛队伍信息查询功能**

   - **全字段的查询功能**：通过一个 `comboBox` 组件提供查询字段的选项，并读取用户当前选择的属性，同时读取要查询内容实现全字段查询。

   - **迭代查询功能**：查询后，按钮变为继续查询，可以在上一次查询的范围上继续进行下一次查询，从而实现多重属性的查询。

   - **模糊匹配搜索**：通过增加 `like` 修饰符，搜索所有包含这个属性的数据，而不需要全字匹配。


4. **参赛队伍排序功能**

   - **全字段升降序排序**：通过两个 `comboBox` 组件实现，第一个选择排序对象，第二个选择升降序。点击排序按钮后根据选择选项进行不同的排序操作。

     

## 六、结论

本赛事管理系统实现了参赛队伍信息的全面管理，通过用户友好的GUI界面和实时交互，使得信息的录入、查询、排序和删除更加高效便捷。创新功能如批量删除、模糊搜索和多重属性查询提升了系统的灵活性，满足了赛事信息管理的复杂需求。MySQL数据库的引入为数据存储提供了持久化支持，结合Qt的QSqlDatabase组件实现了快速反馈，确保数据操作的可靠性。同时，系统支持登录功能和远程数据库访问，便于多用户和异地访问。总体而言，系统在稳定性、可扩展性和易用性上表现良好，并通过Git进行版本控制以提升开发效率。

### 优化空间

1. **界面与用户体验优化**
   - 可以进一步改进GUI设计，增加交互动画和可视化反馈，如操作后加上简短的动画过渡，提升用户体验。
   - 提供用户操作历史记录或撤销功能，增强操作的容错性。
2. **查询性能优化**
   - 对MySQL数据库表添加合适的索引，特别是在赛事类别和参赛学校等常用查询字段上，提升查询速度。
   - 优化模糊搜索算法，避免在数据量大时出现响应缓慢的情况。
3. **数据完整性和安全性增强**
   - 增加字段验证和限制，防止用户输入错误或恶意数据。
   - 通过使用MySQL的事务功能确保复杂的批量操作具有原子性，避免部分失败的情况。
4. **远程数据库连接优化**
   - 采用连接池技术来提高多用户访问时的效率，减少数据库连接的建立和释放时间。
   - 增加连接超时和自动重连机制，确保系统的健壮性。
5. **扩展功能**
   - 支持数据导入导出功能，使管理者可以将数据批量导入或导出到CSV、Excel等格式，方便数据分析和外部数据传输。
   - 考虑增加更多赛事信息管理相关的功能模块，例如赛事结果记录、评分系统等，提升系统的实用性。
