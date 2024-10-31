#ifndef TEAMCONTROL_H
#define TEAMCONTROL_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QStandardItemModel>
#include <vector>
#include <mydata.h>

namespace Ui {
class TeamControl;
}

class TeamControl : public QWidget
{
    Q_OBJECT

public:
    explicit TeamControl(QWidget *parent = nullptr);
    ~TeamControl();

private slots:
    void on_insertButton_clicked();

    void on_deleteButton_clicked();

    void on_updateButton_clicked();

    void on_serachButton_clicked();

    void on_resetButton_clicked();

    void on_sortButton_clicked();

    void on_inputButton_clicked();

    void on_outputButton_clicked();

private:
    Ui::TeamControl *ui;
    QSqlDatabase db;
    QSqlTableModel *m;
    QString header[6] = {"team_id", "work_name", "school_name", "event_category", "participants", "instructor"};
    QString headname[6] = {"队伍Id", "作品名称", "学校名称", "赛事类别", "参赛队员", "指导老师"};
    QStandardItemModel *sdm;
    std::vector<mydata> bv;
    void setheader(QStandardItemModel *xm);

    std::vector<mydata> getnow();

    // QString searchcondition;
    // void ASCsort();
    // void DESCsort();

};

#endif // TEAMCONTROL_H
