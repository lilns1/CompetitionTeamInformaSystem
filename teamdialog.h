#ifndef TEAMDIALOG_H
#define TEAMDIALOG_H

#include <QDialog>

namespace Ui {
class teamDialog;
}

class teamDialog : public QDialog
{
    Q_OBJECT

public:
    explicit teamDialog(QWidget *parent = nullptr);
    ~teamDialog();
    QString getwork();
    QString getschool();
    QString getevent();
    QString getparticipants();
    QString getinstructor();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::teamDialog *ui;
    QString work, school, event, participants, instructor;
};

#endif // TEAMDIALOG_H
