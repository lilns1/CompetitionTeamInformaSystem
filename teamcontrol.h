#ifndef TEAMCONTROL_H
#define TEAMCONTROL_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>

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

private:
    Ui::TeamControl *ui;
    QSqlDatabase db;
    QSqlTableModel *m;
    QString searchcondition;
    QString header[6] = {"team_id", "work_name", "school_name", "event_category", "participants", "instructor"};

    void ASCsort();
    void DESCsort();

};

#endif // TEAMCONTROL_H
