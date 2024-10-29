/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *logginButton;
    QLineEdit *usernameEdit;
    QLabel *label;
    QLineEdit *passwordEdit;
    QLabel *label_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(500, 300);
        logginButton = new QPushButton(Widget);
        logginButton->setObjectName("logginButton");
        logginButton->setGeometry(QRect(210, 220, 91, 41));
        QFont font;
        font.setPointSize(12);
        logginButton->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/image/loggin.png"), QSize(), QIcon::Normal, QIcon::Off);
        logginButton->setIcon(icon);
        usernameEdit = new QLineEdit(Widget);
        usernameEdit->setObjectName("usernameEdit");
        usernameEdit->setGeometry(QRect(180, 70, 181, 31));
        usernameEdit->setFont(font);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 70, 71, 31));
        passwordEdit = new QLineEdit(Widget);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setGeometry(QRect(180, 140, 181, 31));
        passwordEdit->setFont(font);
        passwordEdit->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 140, 71, 31));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\350\265\233\344\272\213\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        logginButton->setText(QCoreApplication::translate("Widget", "\347\231\273\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\347\224\250\346\210\267\357\274\232</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\257\206\347\240\201\357\274\232</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
