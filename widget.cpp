#include "widget.h"
#include "ui_widget.h"
#include "teamcontrol.h"
#include "dbconnection.h"

#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_logginButton_clicked()
{
    QString username = ui->usernameEdit->text(), password = ui->passwordEdit->text();
    dbconnection::setusername(username);
    dbconnection::setpassword(password);

    if(dbconnection::tryConnection() == false)
    {
        QMessageBox::critical(this, "提示", "输入密码或者用户名错误，请重新输入！");
        return;
    }
    else QMessageBox::information(this, "提示", "连接数据库成功！");

    TeamControl *tc = new TeamControl(NULL);
    this->hide();
    tc->show();
}

