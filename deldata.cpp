#include "deldata.h"
#include "ui_deldata.h"

#include <QSqlQuery>
#include <QMessageBox>

deldata::deldata(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::deldata)
{
    ui->setupUi(this);
}

deldata::~deldata()
{
    delete ui;
}

void deldata::on_buttonBox_accepted()
{
    QString sql;
    if(ui->optionBox->currentIndex() == 0) sql = QString("delete from team_info where %1 = %2").arg(header[ui->optionBox->currentIndex()]).arg(ui->lineEdit->text());
    else sql = QString("delete from team_info where %1 = '%2'").arg(header[ui->optionBox->currentIndex()]).arg(ui->lineEdit->text());

    qDebug() << sql;

    QSqlQuery query;
    query.prepare(sql);

    if(QMessageBox::question(this, "提示", "确定要删除这一类数据吗", QMessageBox::Yes | QMessageBox::No, QMessageBox::No) == QMessageBox::Yes)
    {
        if(query.exec() == true) QMessageBox::information(this, "提示", "删除成功");
        else QMessageBox::critical(this, "提示", "删除失败");
    }
    else
    {
        return;
    }
}

