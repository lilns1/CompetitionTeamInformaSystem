/********************************************************************************
** Form generated from reading UI file 'teamdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEAMDIALOG_H
#define UI_TEAMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_teamDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *worknameEdit;
    QLabel *label;
    QLineEdit *schoolnamelineEdit;
    QLabel *label_2;
    QComboBox *eventBox;
    QLabel *label_3;
    QLineEdit *participantslineEdit;
    QLabel *label_4;
    QLineEdit *instructorlineEdit;
    QLabel *label_5;

    void setupUi(QDialog *teamDialog)
    {
        if (teamDialog->objectName().isEmpty())
            teamDialog->setObjectName("teamDialog");
        teamDialog->resize(511, 226);
        teamDialog->setMinimumSize(QSize(511, 226));
        teamDialog->setMaximumSize(QSize(511, 266));
        QFont font;
        font.setPointSize(12);
        teamDialog->setFont(font);
        buttonBox = new QDialogButtonBox(teamDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(280, 170, 171, 61));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        worknameEdit = new QLineEdit(teamDialog);
        worknameEdit->setObjectName("worknameEdit");
        worknameEdit->setGeometry(QRect(80, 40, 101, 21));
        label = new QLabel(teamDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 40, 53, 21));
        schoolnamelineEdit = new QLineEdit(teamDialog);
        schoolnamelineEdit->setObjectName("schoolnamelineEdit");
        schoolnamelineEdit->setGeometry(QRect(80, 80, 101, 21));
        label_2 = new QLabel(teamDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 80, 53, 21));
        eventBox = new QComboBox(teamDialog);
        eventBox->addItem(QString());
        eventBox->addItem(QString());
        eventBox->addItem(QString());
        eventBox->addItem(QString());
        eventBox->addItem(QString());
        eventBox->addItem(QString());
        eventBox->setObjectName("eventBox");
        eventBox->setGeometry(QRect(80, 130, 101, 22));
        eventBox->setContextMenuPolicy(Qt::DefaultContextMenu);
        label_3 = new QLabel(teamDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 130, 71, 21));
        participantslineEdit = new QLineEdit(teamDialog);
        participantslineEdit->setObjectName("participantslineEdit");
        participantslineEdit->setGeometry(QRect(310, 40, 181, 21));
        label_4 = new QLabel(teamDialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(220, 40, 71, 21));
        instructorlineEdit = new QLineEdit(teamDialog);
        instructorlineEdit->setObjectName("instructorlineEdit");
        instructorlineEdit->setGeometry(QRect(310, 80, 181, 21));
        label_5 = new QLabel(teamDialog);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(220, 80, 71, 21));

        retranslateUi(teamDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, teamDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, teamDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(teamDialog);
    } // setupUi

    void retranslateUi(QDialog *teamDialog)
    {
        teamDialog->setWindowTitle(QCoreApplication::translate("teamDialog", "\351\230\237\344\274\215\346\225\260\346\215\256\347\274\226\350\276\221", nullptr));
        label->setText(QCoreApplication::translate("teamDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\344\275\234\345\223\201\345\220\215\357\274\232</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("teamDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\345\255\246\346\240\241\345\220\215\357\274\232</span></p></body></html>", nullptr));
        eventBox->setItemText(0, QCoreApplication::translate("teamDialog", "\350\275\257\344\273\266\350\265\233", nullptr));
        eventBox->setItemText(1, QCoreApplication::translate("teamDialog", "\347\224\265\345\255\220\350\265\233", nullptr));
        eventBox->setItemText(2, QCoreApplication::translate("teamDialog", "\351\241\271\347\233\256\345\256\236\346\210\230\350\265\233", nullptr));
        eventBox->setItemText(3, QCoreApplication::translate("teamDialog", "\346\225\260\345\255\227\347\247\221\346\212\200\345\210\233\346\226\260\350\265\233", nullptr));
        eventBox->setItemText(4, QCoreApplication::translate("teamDialog", "\350\247\206\350\247\211\350\211\272\346\234\257\350\256\276\350\256\241\350\265\233", nullptr));
        eventBox->setItemText(5, QCoreApplication::translate("teamDialog", "\344\270\223\351\241\271\350\265\233", nullptr));

        label_3->setText(QCoreApplication::translate("teamDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\350\265\233\344\272\213\347\261\273\345\210\253\357\274\232</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("teamDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\345\217\202\350\265\233\344\272\272\345\221\230\357\274\232</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("teamDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\346\214\207\345\257\274\350\200\201\345\270\210\357\274\232</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teamDialog: public Ui_teamDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEAMDIALOG_H
