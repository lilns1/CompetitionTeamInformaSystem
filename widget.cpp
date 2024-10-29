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
    dbconnection::setadress(ui->adressEdit->text());
    dbconnection::setport(ui->portEdit->text());
    dbconnection::setusername(ui->usernameEdit->text());
    dbconnection::setpassword(ui->passwordEdit->text());

    if(dbconnection::tryConnection() == false)
    {
        QMessageBox::critical(this, "提示", "输入密码或者用户名错误，请重新输入！");
        ui->usernameEdit->clear();
        ui->passwordEdit->clear();
        return;
    }
    else QMessageBox::information(this, "提示", "连接数据库成功！");

    TeamControl *tc = new TeamControl(NULL);
    this->hide();
    tc->show();
}

