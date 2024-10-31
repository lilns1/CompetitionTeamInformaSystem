#include "teamcontrol.h"
#include "ui_teamcontrol.h"
#include "dbconnection.h"
#include "teamdialog.h"
#include "deldata.h"
#include "sortteam.h"

#include <QDebug>
#include <QMessageBox>
#include <QSqlQuery>
#include <QFileDialog>

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

    // searchcondition = "";

    for (int i = 0; i < 6; i ++)
        m->setHeaderData(i, Qt::Horizontal, headname[i]);

    ui->tableView->setModel(m);
    // ui->tableView->resizeColumnsToContents();
    ui->tableView->setColumnWidth(4, 170);
    ui->tableView->setSortingEnabled(true);

    m->sort(m->fieldIndex("team_id"), Qt::AscendingOrder);

    sdm = nullptr;
    bv.clear();
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
    ui->tableView->setModel(m);

    on_resetButton_clicked();
}



void TeamControl::on_deleteButton_clicked()
{
    deldata *del = new deldata(this);
    del->exec();
    del->deleteLater();
    m->select();
    ui->tableView->setModel(m);

    on_resetButton_clicked();
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
    ui->tableView->setModel(m);

    on_resetButton_clicked();
}

void TeamControl::setheader(QStandardItemModel *xm)
{
    for (int i = 0; i < 6; i ++)
        xm->setHeaderData(i, Qt::Horizontal, headname[i]);
}

void TeamControl::on_resetButton_clicked()
{
    // searchcondition = "";
    // m->setFilter(searchcondition);
    bv.clear();

    m->select();

    ui->serachButton->setText("查询");
    ui->tableView->setModel(m);
}

std::vector<mydata> TeamControl::getnow()
{
    std::vector<mydata> v;
    for (int i = 0; i < m->rowCount(); i ++)
    {
        mydata data;
        data.team_id = m->data(m->index(i, 0)).toInt();
        data.work_name = m->data(m->index(i, 1)).toString();
        data.school_name = m->data(m->index(i, 2)).toString();
        data.event_category = m->data(m->index(i, 3)).toString();
        data.participants = m->data(m->index(i, 4)).toString();
        data.instructor = m->data(m->index(i, 5)).toString();

        v.push_back(data);
    }

    return v;
}

void TeamControl::on_serachButton_clicked()
{
    std::vector<mydata> v;
    QString content = ui->contentEdit->text();
    int index = ui->optionBox->currentIndex();

    if (!bv.empty())
    {
        qDebug() << 1;
        for (size_t i = 0; i < bv.size(); i ++)
        {
            if (index == 0 && content.toInt() == bv[i].team_id) {
                v.push_back(bv[i]);
            }
            else if (index == 1 && bv[i].work_name.contains(content)) {
                v.push_back(bv[i]);
            }
            else if (index == 2 && bv[i].school_name.contains(content)) {
                v.push_back(bv[i]);
            }
            else if (index == 3 && bv[i].event_category.contains(content)) {
                v.push_back(bv[i]);
            }
            else if (index == 4 && bv[i].participants.contains(content)) {
                v.push_back(bv[i]);
            }
            else if (index == 5 && bv[i].instructor.contains(content)) {
                v.push_back(bv[i]);
            }
        }
    }
    else
    {
        qDebug() << 0;
        for (int i = 0; i < m->rowCount(); i ++)
        {
            if ((!index && m->data(m->index(i, index)).toInt() == content.toInt()) || (index != 0 && m->data(m->index(i, index)).toString().contains(content)))
            {
                mydata data;
                data.team_id = m->data(m->index(i, 0)).toInt();
                data.work_name = m->data(m->index(i, 1)).toString();
                data.school_name = m->data(m->index(i, 2)).toString();
                data.event_category = m->data(m->index(i, 3)).toString();
                data.participants = m->data(m->index(i, 4)).toString();
                data.instructor = m->data(m->index(i, 5)).toString();

                v.push_back(data);
            }
        }
    }

    for (size_t i = 0; i < v.size(); i ++)
    {
        qDebug() << v[i].team_id << ' ' << v[i].work_name << ' ' << v[i].instructor << '\n';
    }
    bv = v;

    if (sdm == nullptr)
    {
        sdm = new QStandardItemModel();
    }

    sdm->clear();
    sdm->setColumnCount(6);
    setheader(sdm);

    for (size_t i = 0; i < v.size(); i ++)
    {
        mydata::addToModel(sdm, v[i]);
    }


    ui->tableView->setModel(sdm);
    ui->tableView->setColumnWidth(4, 170);

    ui->serachButton->setText("继续查询");
}

void TeamControl::on_sortButton_clicked()
{
    std::vector<mydata> v;
    if (!bv.empty())
    {
        v = bv;
    }
    else
    {
        v = getnow();
    }


    int index = ui->sortbyBox->currentIndex();

    SortTeam *st = new SortTeam(v);

    if (ui->orderBox->currentIndex() == 0) st->ASCsort(index);
    else st->DESCsort(index);

    if (sdm != nullptr){
        delete sdm;
        sdm = nullptr;
    }
    sdm = st->getmodel();
    setheader(sdm);

    bv = st->getvector();

    ui->tableView->setModel(sdm);
    delete st;
}


void TeamControl::on_inputButton_clicked()
{
    QString filepath = QFileDialog::getOpenFileName(this, "选择导入文件", "", "Text Files (*.txt);; All Files (*)");

    if (filepath.isEmpty())
    {
        return;
    }

    QFile file(filepath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::warning(this, "错误", "无法打开文件！");
        return;
    }

    QTextStream in(&file);

    QString header = in.readLine();

    QSqlQuery query;
    int sum = 0, cnt = 0;

    while(!in.atEnd())
    {
        sum ++;
        QString line = in.readLine();
        QStringList list = line.split(" ");

        if (list.size() != 6)
        {
            continue;
        }

        QString sql = QString("insert into team_info values (default, '%2', '%3', '%4', '%5', '%6')").arg(list[1]).arg(list[2]).arg(list[3]).arg(list[4]).arg(list[5]);

        qDebug() << sql;

        if (query.exec(sql)) cnt ++;
    }

    QMessageBox::information(this, "导入结果", QString("导入 %1 个数据， 成功 %2 个数据").arg(sum).arg(cnt), QMessageBox::Ok);

    m->select();
    ui->tableView->setModel(m);
}


void TeamControl::on_outputButton_clicked()
{
    QString filepath = QFileDialog::getSaveFileName(this, "选择导入文件", "", "Text Files (*.txt);; All Files (*)");

    if (filepath.isEmpty())
    {
        return;
    }

    QFile file(filepath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QMessageBox::warning(this, "错误", "无法创建或打开文件！");
        return;
    }

    QTextStream out(&file);

    std::vector<mydata> v;
    if (!bv.empty()) v = bv;
    else v = getnow();

    for (int i = 0; i < 6; i ++) out << headname[i] << ' ';
    out << '\n';

    for (size_t i = 0; i < v.size(); i ++)
    {
        QString rowdata = QString("%1 %2 %3 %4 %5 %6 ").arg(v[i].team_id).arg(v[i].work_name).arg(v[i].school_name).arg(v[i].event_category).arg(v[i].participants).arg(v[i].instructor);
        out << rowdata << '\n';
    }

    file.close();

    QMessageBox::information(this, "完成", "数据导出成功");
}

// void TeamControl::ASCsort()
// {
//     m->sort(m->fieldIndex(header[ui->sortbyBox->currentIndex()]), Qt::AscendingOrder);

//     m->select();
// }

// void TeamControl::DESCsort()
// {
//     m->sort(m->fieldIndex(header[ui->sortbyBox->currentIndex()]), Qt::DescendingOrder);

//     m->select();
// }

// void TeamControl::on_serachButton_clicked()
// {
//     int index = ui->optionBox->currentIndex();
//     QString content = ui->contentEdit->text(), category = header[index];
//     if(content.isEmpty()) return;

//     if(!searchcondition.isEmpty()) searchcondition.append(" and ");

//     if(index != 0) searchcondition.append(QString("%1 like '%%2%'").arg(category).arg(content));
//     else searchcondition.append(QString("%1 = %2").arg(category).arg(content));

//     qDebug() << searchcondition;

//     m->setFilter(searchcondition);
//     m->select();

//     ui->serachButton->setText("继续查询");
// }
