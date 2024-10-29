#ifndef DELDATA_H
#define DELDATA_H

#include <QDialog>

namespace Ui {
class deldata;
}

class deldata : public QDialog
{
    Q_OBJECT

public:
    explicit deldata(QWidget *parent = nullptr);
    ~deldata();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::deldata *ui;
    QString header[6] = {"team_id", "work_name", "school_name", "event_category", "participants", "instructor"};
};

#endif // DELDATA_H
