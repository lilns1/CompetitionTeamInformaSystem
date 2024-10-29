#include "teamdialog.h"
#include "ui_teamdialog.h"


teamDialog::teamDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::teamDialog)
{
    ui->setupUi(this);
}

teamDialog::~teamDialog()
{
    delete ui;
}

void teamDialog::on_buttonBox_accepted()
{
    work = ui->worknameEdit->text().toUtf8();
    school = ui->schoolnamelineEdit->text().toUtf8();
    event = ui->eventBox->currentText().toUtf8();
    participants = ui->participantslineEdit->text().toUtf8();
    instructor = ui->instructorlineEdit->text().toUtf8();
    this->accept();
}

void teamDialog::on_buttonBox_rejected()
{
    this->reject();
}

QString teamDialog::getwork(){ return this->work;}
QString teamDialog::getevent(){ return this->event;}
QString teamDialog::getschool(){ return this->school;}
QString teamDialog::getparticipants(){ return this->participants;}
QString teamDialog::getinstructor(){ return this->instructor;}
