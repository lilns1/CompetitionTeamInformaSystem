drop database competition; 
CREATE DATABASE competition;
USE competition;

CREATE TABLE team_info (
  team_id INT PRIMARY KEY AUTO_INCREMENT,
  work_name tinytext NOT NULL check (work_name <> ''),
  school_name tinytext NOT NULL check (school_name <> ''),
  event_category tinytext NOT NULL check (event_category <> ''),
  participants tinytext NOT NULL check (participants <> ''),
  instructor tinytext check (instructor <> '')
);

INSERT INTO team_info VALUES(DEFAULT, '民族动画设计', '贵州民族大学', '视觉艺术设计赛', '卢辉、周悦', '郑老师');
INSERT INTO team_info VALUES(DEFAULT, '图书借阅系统', '贵州师范大学', '软件赛', '叶鹏、曹敏', '孙老师');
INSERT INTO team_info VALUES(DEFAULT, '无线耳机', '贵州民族大学', '电子赛', '姚辉、周悦', '陈老师');
INSERT INTO team_info VALUES(DEFAULT, '在线教育平台实战', '贵州师范大学', '项目实战赛', '邓辉、周悦', '刘老师');
INSERT INTO team_info VALUES(DEFAULT, '智能手表', '贵州民族大学', '电子赛', '杨明、孙悦', '张老师');
INSERT INTO team_info VALUES(DEFAULT, '电子秤设计', '贵州师范大学', '电子赛', '袁峰、李琳', '王老师');
INSERT INTO team_info VALUES(DEFAULT, '企业管理软件', '贵州民族大学', '软件赛', '苏明、陈瑶', '赵老师');
INSERT INTO team_info VALUES(DEFAULT, '校园电商项目实战', '贵州大学', '项目实战赛', '程阳、秦雪', '王老师');
INSERT INTO team_info VALUES(DEFAULT, '插画艺术设计', '贵州师范大学', '视觉艺术设计赛', '雷明、郑瑶', '陈老师');
INSERT INTO team_info VALUES(DEFAULT, '智能门锁', '贵州师范大学', '电子赛', '章辉、王悦', '李老师');
INSERT INTO team_info VALUES(DEFAULT, '智能手环', '贵州大学', '电子赛', '曾勇、崔悦', '吴老师');
INSERT INTO team_info VALUES(DEFAULT, '环保专项挑战', '贵州大学', '专项赛', '蔡辉、于娜', '赵老师');
INSERT INTO team_info VALUES(DEFAULT, '民族工艺品设计', '贵州民族大学', '视觉艺术设计赛', '金峰、王悦', '孙老师');
INSERT INTO team_info VALUES(DEFAULT, '品牌标志设计', '贵州大学', '视觉艺术设计赛', '袁帅、罗佳', '陈老师');
INSERT INTO team_info VALUES(DEFAULT, '校园海报设计', '贵州大学', '视觉艺术设计赛', '吴俊、高瑶', '王老师');
INSERT INTO team_info VALUES(DEFAULT, '民族服饰设计', '贵州民族大学', '视觉艺术设计赛', '蒋辉、郑瑶', '赵老师');
INSERT INTO team_info VALUES(DEFAULT, '物流管理系统实战', '贵州大学', '项目实战赛', '蒋俊、唐丽', '刘老师');
INSERT INTO team_info VALUES(DEFAULT, '教学辅助软件', '贵州师范大学', '软件赛', '林宇、徐丹', '陈老师');
INSERT INTO team_info VALUES(DEFAULT, '小型音响系统', '贵州大学', '电子赛', '曾勇、崔悦', '吴老师');
INSERT INTO team_info VALUES(DEFAULT, '美食推荐软件', '贵州师范大学', '软件赛', '郑波、赵悦', '周老师');
INSERT INTO team_info VALUES(DEFAULT, '运动健身软件', '贵州民族大学', '软件赛', '田宇、吴悦', '周老师');
INSERT INTO team_info VALUES(DEFAULT, '智能家居设备', '贵州民族大学', '电子赛', '余强、吴悦', '郑老师');
INSERT INTO team_info VALUES(DEFAULT, '电子时钟设计', '贵州大学', '电子赛', '杨辉、马琳', '赵老师');
INSERT INTO team_info VALUES(DEFAULT, '民族插画设计', '贵州民族大学', '视觉艺术设计赛', '黎辉、孙悦', '吴老师');
INSERT INTO team_info VALUES(DEFAULT, '文化艺术专项行动', '贵州师范大学', '专项赛', '潘俊、郑悦', '郑老师');
INSERT INTO team_info VALUES(DEFAULT, '任务管理工具', '贵州大学', '软件赛', '周凯、郑丽', '陈老师');
INSERT INTO team_info VALUES(DEFAULT, '公益教育专项', '贵州师范大学', '专项赛', '任强、周悦', '张老师');
INSERT INTO team_info VALUES(DEFAULT, '企业管理系统实战', '贵州大学', '项目实战赛', '郭峰、韩梅', '张老师');
INSERT INTO team_info VALUES(DEFAULT, '运动手环', '贵州师范大学', '电子赛', '庄强、刘颖', '张老师');
INSERT INTO team_info VALUES(DEFAULT, '扶贫专项行动', '贵州大学', '专项赛', '戴阳、孟瑶', '孙老师');
INSERT INTO team_info VALUES(DEFAULT, '音乐播放软件', '贵州民族大学', '软件赛', '汪峰、郑悦', '吴老师');
INSERT INTO team_info VALUES(DEFAULT, '大数据营销平台', '贵州民族大学', '数字科技创新赛', '顾强、孙悦', '张老师');
INSERT INTO team_info VALUES(DEFAULT, '科技创新教育专项', '贵州师范大学', '专项赛', '钱峰、王悦', '王老师');
INSERT INTO team_info VALUES(DEFAULT, '广告海报设计', '贵州师范大学', '视觉艺术设计赛', '黎阳、王悦', '刘老师');
INSERT INTO team_info VALUES(DEFAULT, '室内装修设计', '贵州师范大学', '视觉艺术设计赛', '李强、赵悦', '赵老师');
INSERT INTO team_info VALUES(DEFAULT, '数字农业创新', '贵州大学', '数字科技创新赛', '吕明、邹悦', '赵老师');
INSERT INTO team_info VALUES(DEFAULT, '智能台灯', '贵州师范大学', '电子赛', '于洋、高燕', '吴老师');
INSERT INTO team_info VALUES(DEFAULT, '医疗数据分析平台', '贵州大学', '数字科技创新赛', '孙浩、钟琪', '周老师');
INSERT INTO team_info VALUES(DEFAULT, '跨境电商平台实战', '贵州民族大学', '项目实战赛', '朱强、赵悦', '周老师');
INSERT INTO team_info VALUES(DEFAULT, '影视娱乐软件', '贵州民族大学', '软件赛', '魏强、王悦', '郑老师');
INSERT INTO team_info VALUES(DEFAULT, '智能办公软件', '贵州大学', '软件赛', '李明、张华', '王老师');
INSERT INTO team_info VALUES(DEFAULT, '环保教育专项', '贵州师范大学', '专项赛', '秦辉、赵悦', '李老师');
INSERT INTO team_info VALUES(DEFAULT, '民族文化专项挑战', '贵州民族大学', '专项赛', '马辉、李瑶', '王老师');
INSERT INTO team_info VALUES(DEFAULT, '蓝牙音箱', '贵州师范大学', '电子赛', '俞杰、韩晶', '郑老师');
INSERT INTO team_info VALUES(DEFAULT, '便捷购物平台', '贵州大学', '软件赛', '赵宇、孙悦', '李老师');
INSERT INTO team_info VALUES(DEFAULT, '文化传承专项', '贵州大学', '专项赛', '傅强、苗青', '周老师');
INSERT INTO team_info VALUES(DEFAULT, '智能交通系统', '贵州大学', '数字科技创新赛', '钱涛、尤佳', '孙老师');
INSERT INTO team_info VALUES(DEFAULT, '服装设计', '贵州师范大学', '视觉艺术设计赛', '刘辉、孙悦', '孙老师');
INSERT INTO team_info VALUES(DEFAULT, '网页界面设计', '贵州大学', '视觉艺术设计赛', '褚亮、沈悦', '刘老师');
INSERT INTO team_info VALUES(DEFAULT, '农业电商平台实战', '贵州民族大学', '项目实战赛', '钟辉、王悦', '孙老师');
INSERT INTO team_info VALUES(DEFAULT, '社交电商平台实战', '贵州民族大学', '项目实战赛', '邹峰、孙悦', '吴老师');
INSERT INTO team_info VALUES(DEFAULT, '无线充电器', '贵州大学', '电子赛', '黄波、谢静', '周老师');
INSERT INTO team_info VALUES(DEFAULT, '直播电商平台实战', '贵州民族大学', '项目实战赛', '左辉、周悦', '郑老师');
INSERT INTO team_info VALUES(DEFAULT, '教育专项挑战', '贵州师范大学', '专项赛', '牛伟、李瑶', '吴老师');
INSERT INTO team_info VALUES(DEFAULT, '民族建筑设计', '贵州民族大学', '视觉艺术设计赛', '柯辉、赵悦', '周老师');
INSERT INTO team_info VALUES(DEFAULT, '智能家居控制系统', '贵州大学', '数字科技创新赛', '汪阳、丁宁', '郑老师');
INSERT INTO team_info VALUES(DEFAULT, '环保监测系统', '贵州大学', '数字科技创新赛', '唐杰、曹颖', '吴老师');
INSERT INTO team_info VALUES(DEFAULT, '高效学习助手', '贵州大学', '软件赛', '刘婷、吴浩', '张老师');
INSERT INTO team_info VALUES(DEFAULT, '智能遥控器', '贵州民族大学', '电子赛', '熊辉、李瑶', '王老师');
INSERT INTO team_info VALUES(DEFAULT, '智慧校园创新', '贵州师范大学', '数字科技创新赛', '何鹏、王静', '吴老师');
INSERT INTO team_info VALUES(DEFAULT, '创意文档编辑软件', '贵州大学', '软件赛', '王强、林晓', '刘老师');
INSERT INTO team_info VALUES(DEFAULT, '智能医疗辅助系统', '贵州师范大学', '数字科技创新赛', '胡凯、赵雪', '郑老师');
INSERT INTO team_info VALUES(DEFAULT, '大数据分析平台', '贵州师范大学', '数字科技创新赛', '黄锐、孙悦', '王老师');
INSERT INTO team_info VALUES(DEFAULT, '人工智能教育平台', '贵州师范大学', '数字科技创新赛', '姜超、周雪', '李老师');
INSERT INTO team_info VALUES(DEFAULT, '虚拟现实教学系统', '贵州师范大学', '数字科技创新赛', '康辉、吴悦', '张老师');
INSERT INTO team_info VALUES(DEFAULT, '民族文化数字创新', '贵州民族大学', '数字科技创新赛', '曹明、李瑶', '王老师');
INSERT INTO team_info VALUES(DEFAULT, '智能旅游系统', '贵州民族大学', '数字科技创新赛', '丁辉、赵悦', '李老师');
INSERT INTO team_info VALUES(DEFAULT, '区块链应用创新', '贵州民族大学', '数字科技创新赛', '胡明、吴悦', '刘老师');
INSERT INTO team_info VALUES(DEFAULT, '人工智能客服系统', '贵州民族大学', '数字科技创新赛', '何辉、周悦', '陈老师');
INSERT INTO team_info VALUES(DEFAULT, '旅游攻略软件', '贵州民族大学', '软件赛', '谭辉、刘悦', '孙老师');
INSERT INTO team_info VALUES(DEFAULT, '电子血压计', '贵州民族大学', '电子赛', '薛峰、赵悦', '李老师');
INSERT INTO team_info VALUES(DEFAULT, '产品包装设计', '贵州大学', '视觉艺术设计赛', '郑凯、方雪', '李老师');
INSERT INTO team_info VALUES(DEFAULT, '求职招聘平台实战', '贵州师范大学', '项目实战赛', '高俊、李悦', '周老师');
INSERT INTO team_info VALUES(DEFAULT, '校园二手交易平台实战', '贵州师范大学', '项目实战赛', '崔明、孙瑶', '陈老师');
INSERT INTO team_info VALUES(DEFAULT, '民宿预订平台实战', '贵州师范大学', '项目实战赛', '傅勇、郑丹', '孙老师');
INSERT INTO team_info VALUES(DEFAULT, '餐饮外卖平台实战', '贵州师范大学', '项目实战赛', '丁强、吴雪', '赵老师');
INSERT INTO team_info VALUES(DEFAULT, '教育扶贫专项', '贵州民族大学', '专项赛', '钱辉、周悦', '陈老师');
INSERT INTO team_info VALUES(DEFAULT, '公益文化专项', '贵州民族大学', '专项赛', '孙辉、吴悦', '刘老师');
INSERT INTO team_info VALUES(DEFAULT, '公益服务专项', '贵州大学', '专项赛', '侯亮、齐悦', '郑老师');
INSERT INTO team_info VALUES(DEFAULT, '机械设计软件', '贵州理工学院', '软件赛', '赵宇、孙悦', '李老师');
INSERT INTO team_info VALUES(DEFAULT, '金融科技创新专项', '贵州财经大学', '专项赛', '龚伟、牛悦', '吴老师');
INSERT INTO team_info VALUES(DEFAULT, '智能购物车', '贵州商学院', '电子赛', '庄强、刘颖', '张老师');
INSERT INTO team_info VALUES(DEFAULT, '智能监控设备', '贵州财经大学', '电子赛', '梁辉、苏瑶', '郑老师');
INSERT INTO team_info VALUES(DEFAULT, '建筑效果图设计', '贵州理工学院', '视觉艺术设计赛', '袁帅、罗佳', '陈老师');
INSERT INTO team_info VALUES(DEFAULT, '工程管理软件', '贵州理工学院', '软件赛', '李明、张华', '王老师');
INSERT INTO team_info VALUES(DEFAULT, '品牌形象设计', '贵州财经大学', '视觉艺术设计赛', '吴俊、高悦', '王老师');
INSERT INTO team_info VALUES(DEFAULT, '智能零售系统', '贵州商学院', '数字科技创新赛', '胡凯、赵雪', '郑老师');
INSERT INTO team_info VALUES(DEFAULT, '电子货架标签', '贵州商学院', '电子赛', '于洋、高燕', '吴老师');
INSERT INTO team_info VALUES(DEFAULT, '智能电表设计', '贵州财经大学', '电子赛', '杨波、马兰', '赵老师');
INSERT INTO team_info VALUES(DEFAULT, '电商创业项目实战', '贵州商学院', '项目实战赛', '崔明、孙瑶', '陈老师');
INSERT INTO team_info VALUES(DEFAULT, '工业互联网创新', '贵州理工学院', '数字科技创新赛', '吕明、邹悦', '赵老师');
INSERT INTO team_info VALUES(DEFAULT, '工业设计创新', '贵州理工学院', '视觉艺术设计赛', '吴俊、高瑶', '王老师');
INSERT INTO team_info VALUES(DEFAULT, '金融数据分析平台', '贵州财经大学', '软件赛', '赵磊、刘佳', '李老师');
INSERT INTO team_info VALUES(DEFAULT, '无线点餐系统', '贵州商学院', '电子赛', '章辉、王悦', '李老师');
INSERT INTO team_info VALUES(DEFAULT, '商业海报设计', '贵州商学院', '视觉艺术设计赛', '雷明、郑瑶', '陈老师');
INSERT INTO team_info VALUES(DEFAULT, '大数据金融分析', '贵州财经大学', '数字科技创新赛', '钱峰、尤悦', '孙老师');
INSERT INTO team_info VALUES(DEFAULT, '金融扶贫专项', '贵州财经大学', '专项赛', '戴阳、孟悦', '孙老师');
INSERT INTO team_info VALUES(DEFAULT, '市场营销软件', '贵州商学院', '软件赛', '夏阳、罗慧', '赵老师');
INSERT INTO team_info VALUES(DEFAULT, '产品包装设计', '贵州商学院', '视觉艺术设计赛', '黎阳、王悦', '刘老师');
INSERT INTO team_info VALUES(DEFAULT, '金融文化传承专项', '贵州财经大学', '专项赛', '傅强、苗悦', '周老师');
INSERT INTO team_info VALUES(DEFAULT, '电路设计软件', '贵州理工学院', '软件赛', '周凯、郑丽', '陈老师');
INSERT INTO team_info VALUES(DEFAULT, '智能收银机', '贵州商学院', '电子赛', '俞杰、韩晶', '郑老师');
INSERT INTO team_info VALUES(DEFAULT, '建筑工程实战', '贵州理工学院', '项目实战赛', '蒋俊、唐丽', '刘老师');
INSERT INTO team_info VALUES(DEFAULT, '人工智能金融服务', '贵州财经大学', '数字科技创新赛', '汪阳、丁瑶', '郑老师');
INSERT INTO team_info VALUES(DEFAULT, '企业财务管理系统', '贵州财经大学', '软件赛', '孙阳、周敏', '王老师');
INSERT INTO team_info VALUES(DEFAULT, '科技创新商业专项', '贵州商学院', '专项赛', '钱峰、王悦', '王老师');
INSERT INTO team_info VALUES(DEFAULT, '材料分析软件', '贵州理工学院', '软件赛', '王强、林晓', '刘老师');
INSERT INTO team_info VALUES(DEFAULT, '电商平台软件', '贵州商学院', '软件赛', '林宇、徐丹', '陈老师');
INSERT INTO team_info VALUES(DEFAULT, '绿色金融专项', '贵州财经大学', '专项赛', '蔡辉、于悦', '赵老师');
INSERT INTO team_info VALUES(DEFAULT, '物流配送项目实战', '贵州商学院', '项目实战赛', '邓辉、周悦', '刘老师');
INSERT INTO team_info VALUES(DEFAULT, '电子价签系统', '贵州商学院', '电子赛', '袁峰、李琳', '王老师');
INSERT INTO team_info VALUES(DEFAULT, '广告海报设计', '贵州理工学院', '视觉艺术设计赛', '褚亮、沈悦', '刘老师');
INSERT INTO team_info VALUES(DEFAULT, '智能物流系统', '贵州理工学院', '数字科技创新赛', '钱涛、尤佳', '孙老师');
INSERT INTO team_info VALUES(DEFAULT, '工业文化传承专项', '贵州理工学院', '专项赛', '傅强、苗青', '周老师');
INSERT INTO team_info VALUES(DEFAULT, '预算管理工具', '贵州财经大学', '软件赛', '郑强、林悦', '刘老师');
INSERT INTO team_info VALUES(DEFAULT, '智能制造专项', '贵州理工学院', '专项赛', '龚伟、牛静', '吴老师');
INSERT INTO team_info VALUES(DEFAULT, '物流管理软件', '贵州商学院', '软件赛', '邱峰、宋佳', '刘老师');
INSERT INTO team_info VALUES(DEFAULT, '客户关系管理软件', '贵州商学院', '软件赛', '叶鹏、曹敏', '孙老师');
INSERT INTO team_info VALUES(DEFAULT, '金融科技创新', '贵州财经大学', '数字科技创新赛', '吕伟、邹琳', '赵老师');
INSERT INTO team_info VALUES(DEFAULT, '新能源开发实战', '贵州理工学院', '项目实战赛', '冯磊、蒋雨', '李老师');
INSERT INTO team_info VALUES(DEFAULT, '机械动画设计', '贵州理工学院', '视觉艺术设计赛', '谢飞、叶琳', '张老师');
INSERT INTO team_info VALUES(DEFAULT, '大数据营销分析', '贵州商学院', '数字科技创新赛', '黄锐、孙悦', '王老师');
INSERT INTO team_info VALUES(DEFAULT, '库存管理软件', '贵州商学院', '软件赛', '郑波、赵悦', '周老师');
INSERT INTO team_info VALUES(DEFAULT, '人工智能制造', '贵州理工学院', '数字科技创新赛', '唐杰、曹颖', '吴老师');
INSERT INTO team_info VALUES(DEFAULT, '环保工程实战', '贵州理工学院', '项目实战赛', '郭峰、韩梅', '张老师');
INSERT INTO team_info VALUES(DEFAULT, '智能家居制造', '贵州理工学院', '数字科技创新赛', '汪阳、丁宁', '郑老师');
INSERT INTO team_info VALUES(DEFAULT, '客户服务项目实战', '贵州商学院', '项目实战赛', '傅勇、郑丹', '孙老师');
INSERT INTO team_info VALUES(DEFAULT, '品牌标志设计', '贵州商学院', '视觉艺术设计赛', '刘辉、孙悦', '孙老师');
INSERT INTO team_info VALUES(DEFAULT, '电子点钞机', '贵州财经大学', '电子赛', '胡峰、许静', '孙老师');
INSERT INTO team_info VALUES(DEFAULT, '零售管理项目实战', '贵州商学院', '项目实战赛', '高俊、李悦', '周老师');
INSERT INTO team_info VALUES(DEFAULT, '无线通信模块', '贵州财经大学', '电子赛', '黄涛、谢琳', '周老师');
INSERT INTO team_info VALUES(DEFAULT, '交通规划实战', '贵州理工学院', '项目实战赛', '何伟、潘婷', '陈老师');
INSERT INTO team_info VALUES(DEFAULT, '文化艺术专项行动', '贵州商学院', '专项赛', '潘俊、郑悦', '郑老师');
INSERT INTO team_info VALUES(DEFAULT, '环保商业专项', '贵州商学院', '专项赛', '秦辉、赵悦', '李老师');
INSERT INTO team_info VALUES(DEFAULT, '公益商业专项', '贵州商学院', '专项赛', '任强、周悦', '张老师');
INSERT INTO team_info VALUES(DEFAULT, '智能传感器', '贵州理工学院', '电子赛', '杨辉、马琳', '赵老师');
INSERT INTO team_info VALUES(DEFAULT, '人工智能客服', '贵州商学院', '数字科技创新赛', '姜超、周雪', '李老师');
INSERT INTO team_info VALUES(DEFAULT, '虚拟现实购物体验', '贵州商学院', '数字科技创新赛', '康辉、吴悦', '张老师');
INSERT INTO team_info VALUES(DEFAULT, '嵌入式系统', '贵州理工学院', '电子赛', '胡俊、许瑶', '孙老师');
INSERT INTO team_info VALUES(DEFAULT, '自动化控制器', '贵州理工学院', '电子赛', '黄波、谢静', '周老师');
INSERT INTO team_info VALUES(DEFAULT, '通信设备', '贵州理工学院', '电子赛', '曾勇、崔悦', '吴老师');
INSERT INTO team_info VALUES(DEFAULT, '机器人控制系统', '贵州理工学院', '电子赛', '梁超、苏敏', '郑老师');
INSERT INTO team_info VALUES(DEFAULT, '公益服务专项', '贵州财经大学', '专项赛', '侯亮、齐悦', '郑老师');
INSERT INTO team_info VALUES(DEFAULT, '科技创新专项', '贵州大学', '专项赛', '龚伟、牛静', '吴老师');