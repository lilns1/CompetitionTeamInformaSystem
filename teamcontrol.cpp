#include "teamcontrol.h"
#include "ui_teamcontrol.h"
#include "dbconnection.h"
#include "teamdialog.h"
#include "deldata.h"

#include <QDebug>
#include <QMessageBox>
#include <QSqlQuery>

TeamControl::TeamControl(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TeamControl)
{
    ui->setupUi(this);

    db = dbconnection::getConnection();

    m = new QSqlTableModel(this);
    m->setTable("team_info");
    m->setEditStrategy(QSqlTableModel::OnFieldChange);
    m->select();

    searchcondition = "";

    m->setHeaderData(0, Qt::Horizontal, "队伍ID");
    m->setHeaderData(1, Qt::Horizontal, "作品名称");
    m->setHeaderData(2, Qt::Horizontal, "学校名称");
    m->setHeaderData(3, Qt::Horizontal, "赛事类别");
    m->setHeaderData(4, Qt::Horizontal, "参赛队员");
    m->setHeaderData(5, Qt::Horizontal, "指导老师");

    ui->tableView->setModel(m);
    // ui->tableView->resizeColumnsToContents();
    ui->tableView->setColumnWidth(4, 170);
    ui->tableView->setSortingEnabled(true);

    m->sort(m->fieldIndex("team_id"), Qt::AscendingOrder);
}

TeamControl::~TeamControl()
{
    delete ui;
}

void TeamControl::on_insertButton_clicked()
{
    teamDialog *td = new teamDialog(this);
    if(td->exec() == teamDialog::Accepted)
    {
        QSqlQuery query;

        QString sql;
        if (ui->idlineEdit->text().isEmpty())
        {
            sql = QString("insert into team_info values (default, '%2', '%3', '%4', '%5', '%6')").arg(td->getwork())
                      .arg(td->getschool()).arg(td->getevent()).arg(td->getparticipants()).arg(td->getinstructor());
        }
        else
        {
            int team_id = ui->idlineEdit->text().toInt();
            QString sql = QString("insert into team_info values (%1, '%2', '%3', '%4', '%5', '%6')").arg(team_id).arg(td->getwork())
                              .arg(td->getschool()).arg(td->getevent()).arg(td->getparticipants()).arg(td->getinstructor());
        }

        qDebug() << sql;

        if(query.exec(sql) == true)
        {
            QMessageBox::information(this, "提示", "插入操作成功", QMessageBox::Ok);
        }
        else
        {
            QMessageBox::critical(this, "提示", "插入操作失败, 请查看是否有数据为空或id重复！", QMessageBox::Ok);
        }
    }
    else
    {
        return;
    }

    td->deleteLater();
    m->select();
}


void TeamControl::on_deleteButton_clicked()
{
    deldata *del = new deldata(this);
    del->exec();
    del->deleteLater();
    m->select();
}


void TeamControl::on_updateButton_clicked()
{
    teamDialog *td = new teamDialog(this);

    if(td->exec() == teamDialog::Accepted)
    {
        QSqlQuery query;
        int team_id = ui->idlineEdit->text().toInt();
        QString sql = QString("update team_info set work_name = '%1', school_name = '%2', event_category = '%3', participants = '%4', instructor = '%5' where team_id = %6")
                          .arg(td->getwork()).arg(td->getschool()).arg(td->getevent()).arg(td->getparticipants()).arg(td->getinstructor()).arg(team_id);
        qDebug() << sql;

        if(query.exec(sql) == true)
        {
            QMessageBox::information(this, "提示", "插入操作成功", QMessageBox::Ok);
        }
        else
        {
            QMessageBox::critical(this, "提示", "插入操作失败", QMessageBox::Ok);
        }
    }
    else
    {
        return;
    }
    td->deleteLater();
    m->select();
}


void TeamControl::on_serachButton_clicked()
{
    int index = ui->optionBox->currentIndex();
    QString content = ui->contentEdit->text(), category = header[index];
    if(content.isEmpty()) return;

    if(!searchcondition.isEmpty()) searchcondition.append(" and ");

    if(index != 0) searchcondition.append(QString("%1 like '%%2%'").arg(category).arg(content));
    else searchcondition.append(QString("%1 = %2").arg(category).arg(content));

    qDebug() << searchcondition;

    m->setFilter(searchcondition);
    m->select();

    ui->serachButton->setText("继续查找");
}


void TeamControl::on_resetButton_clicked()
{
    searchcondition = "";
    m->setFilter(searchcondition);
    m->select();

    ui->serachButton->setText("查找");
}


void TeamControl::on_sortButton_clicked()
{
    if(ui->orderBox->currentIndex() == 0) ASCsort();
    else DESCsort();
}

void TeamControl::ASCsort()
{
    m->sort(m->fieldIndex(header[ui->sortbyBox->currentIndex()]), Qt::AscendingOrder);

    m->select();
}

void TeamControl::DESCsort()
{
    m->sort(m->fieldIndex(header[ui->sortbyBox->currentIndex()]), Qt::DescendingOrder);

    m->select();
}
