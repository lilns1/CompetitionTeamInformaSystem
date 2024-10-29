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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *logginButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLineEdit *adressEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *portEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *usernameEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *passwordEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(500, 338);
        logginButton = new QPushButton(Widget);
        logginButton->setObjectName("logginButton");
        logginButton->setGeometry(QRect(210, 270, 91, 41));
        QFont font;
        font.setPointSize(12);
        logginButton->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/image/loggin.png"), QSize(), QIcon::Normal, QIcon::Off);
        logginButton->setIcon(icon);
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(90, 30, 321, 201));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        adressEdit = new QLineEdit(widget);
        adressEdit->setObjectName("adressEdit");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(adressEdit->sizePolicy().hasHeightForWidth());
        adressEdit->setSizePolicy(sizePolicy);
        adressEdit->setFont(font);

        horizontalLayout->addWidget(adressEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        portEdit = new QLineEdit(widget);
        portEdit->setObjectName("portEdit");
        sizePolicy.setHeightForWidth(portEdit->sizePolicy().hasHeightForWidth());
        portEdit->setSizePolicy(sizePolicy);
        portEdit->setFont(font);

        horizontalLayout_2->addWidget(portEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        usernameEdit = new QLineEdit(widget);
        usernameEdit->setObjectName("usernameEdit");
        sizePolicy.setHeightForWidth(usernameEdit->sizePolicy().hasHeightForWidth());
        usernameEdit->setSizePolicy(sizePolicy);
        usernameEdit->setFont(font);

        horizontalLayout_3->addWidget(usernameEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_4->addWidget(label_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        passwordEdit = new QLineEdit(widget);
        passwordEdit->setObjectName("passwordEdit");
        sizePolicy.setHeightForWidth(passwordEdit->sizePolicy().hasHeightForWidth());
        passwordEdit->setSizePolicy(sizePolicy);
        passwordEdit->setFont(font);
        passwordEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(passwordEdit);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\350\265\233\344\272\213\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        logginButton->setText(QCoreApplication::translate("Widget", "\347\231\273\345\275\225", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\234\260\345\235\200\357\274\232</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\347\253\257\345\217\243\357\274\232</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\347\224\250\346\210\267\357\274\232</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\257\206\347\240\201\357\274\232</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
