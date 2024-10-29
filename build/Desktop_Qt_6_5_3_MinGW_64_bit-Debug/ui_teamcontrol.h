/********************************************************************************
** Form generated from reading UI file 'teamcontrol.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEAMCONTROL_H
#define UI_TEAMCONTROL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeamControl
{
public:
    QTableView *tableView;
    QComboBox *sortbyBox;
    QComboBox *orderBox;
    QPushButton *sortButton;
    QLineEdit *idlineEdit;
    QPushButton *insertButton;
    QPushButton *deleteButton;
    QPushButton *updateButton;
    QComboBox *optionBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *contentEdit;
    QLabel *label_3;
    QPushButton *serachButton;
    QPushButton *resetButton;

    void setupUi(QWidget *TeamControl)
    {
        if (TeamControl->objectName().isEmpty())
            TeamControl->setObjectName("TeamControl");
        TeamControl->resize(823, 600);
        tableView = new QTableView(TeamControl);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(50, 80, 721, 361));
        QFont font;
        font.setPointSize(10);
        tableView->setFont(font);
        sortbyBox = new QComboBox(TeamControl);
        sortbyBox->addItem(QString());
        sortbyBox->addItem(QString());
        sortbyBox->addItem(QString());
        sortbyBox->addItem(QString());
        sortbyBox->addItem(QString());
        sortbyBox->addItem(QString());
        sortbyBox->setObjectName("sortbyBox");
        sortbyBox->setGeometry(QRect(330, 30, 111, 31));
        sortbyBox->setFont(font);
        orderBox = new QComboBox(TeamControl);
        orderBox->addItem(QString());
        orderBox->addItem(QString());
        orderBox->setObjectName("orderBox");
        orderBox->setGeometry(QRect(480, 30, 111, 31));
        orderBox->setFont(font);
        sortButton = new QPushButton(TeamControl);
        sortButton->setObjectName("sortButton");
        sortButton->setGeometry(QRect(620, 30, 111, 31));
        sortButton->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/image/sort.png"), QSize(), QIcon::Normal, QIcon::Off);
        sortButton->setIcon(icon);
        idlineEdit = new QLineEdit(TeamControl);
        idlineEdit->setObjectName("idlineEdit");
        idlineEdit->setGeometry(QRect(130, 470, 181, 41));
        insertButton = new QPushButton(TeamControl);
        insertButton->setObjectName("insertButton");
        insertButton->setGeometry(QRect(350, 470, 91, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(12);
        insertButton->setFont(font1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/image/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        insertButton->setIcon(icon1);
        deleteButton = new QPushButton(TeamControl);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setGeometry(QRect(570, 470, 91, 41));
        QFont font2;
        font2.setPointSize(12);
        deleteButton->setFont(font2);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/image/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon2);
        updateButton = new QPushButton(TeamControl);
        updateButton->setObjectName("updateButton");
        updateButton->setGeometry(QRect(460, 470, 91, 41));
        updateButton->setFont(font2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/image/update.png"), QSize(), QIcon::Normal, QIcon::Off);
        updateButton->setIcon(icon3);
        optionBox = new QComboBox(TeamControl);
        optionBox->addItem(QString());
        optionBox->addItem(QString());
        optionBox->addItem(QString());
        optionBox->addItem(QString());
        optionBox->addItem(QString());
        optionBox->addItem(QString());
        optionBox->setObjectName("optionBox");
        optionBox->setGeometry(QRect(130, 530, 141, 41));
        optionBox->setFont(font2);
        label = new QLabel(TeamControl);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 470, 81, 41));
        label_2 = new QLabel(TeamControl);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 530, 81, 31));
        contentEdit = new QLineEdit(TeamControl);
        contentEdit->setObjectName("contentEdit");
        contentEdit->setGeometry(QRect(370, 530, 171, 41));
        label_3 = new QLabel(TeamControl);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(290, 530, 71, 31));
        serachButton = new QPushButton(TeamControl);
        serachButton->setObjectName("serachButton");
        serachButton->setGeometry(QRect(570, 530, 91, 41));
        serachButton->setFont(font2);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/image/filter.png"), QSize(), QIcon::Normal, QIcon::Off);
        serachButton->setIcon(icon4);
        resetButton = new QPushButton(TeamControl);
        resetButton->setObjectName("resetButton");
        resetButton->setGeometry(QRect(680, 530, 91, 41));
        resetButton->setFont(font2);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/image/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        resetButton->setIcon(icon5);

        retranslateUi(TeamControl);

        QMetaObject::connectSlotsByName(TeamControl);
    } // setupUi

    void retranslateUi(QWidget *TeamControl)
    {
        TeamControl->setWindowTitle(QCoreApplication::translate("TeamControl", "\351\230\237\344\274\215\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        sortbyBox->setItemText(0, QCoreApplication::translate("TeamControl", "ID", nullptr));
        sortbyBox->setItemText(1, QCoreApplication::translate("TeamControl", "\344\275\234\345\223\201\345\220\215\347\247\260", nullptr));
        sortbyBox->setItemText(2, QCoreApplication::translate("TeamControl", "\345\255\246\346\240\241\345\220\215\347\247\260", nullptr));
        sortbyBox->setItemText(3, QCoreApplication::translate("TeamControl", "\350\265\233\344\272\213\347\261\273\345\210\253", nullptr));
        sortbyBox->setItemText(4, QCoreApplication::translate("TeamControl", "\345\217\202\350\265\233\350\200\205", nullptr));
        sortbyBox->setItemText(5, QCoreApplication::translate("TeamControl", "\346\214\207\345\257\274\350\200\201\345\270\210", nullptr));

        orderBox->setItemText(0, QCoreApplication::translate("TeamControl", "\345\215\207\345\272\217", nullptr));
        orderBox->setItemText(1, QCoreApplication::translate("TeamControl", "\351\231\215\345\272\217", nullptr));

        sortButton->setText(QCoreApplication::translate("TeamControl", "\346\216\222\345\272\217", nullptr));
        insertButton->setText(QCoreApplication::translate("TeamControl", "\346\217\222\345\205\245", nullptr));
        deleteButton->setText(QCoreApplication::translate("TeamControl", "\345\210\240\351\231\244", nullptr));
        updateButton->setText(QCoreApplication::translate("TeamControl", "\346\233\264\346\226\260", nullptr));
        optionBox->setItemText(0, QCoreApplication::translate("TeamControl", "ID", nullptr));
        optionBox->setItemText(1, QCoreApplication::translate("TeamControl", "\344\275\234\345\223\201\345\220\215\347\247\260", nullptr));
        optionBox->setItemText(2, QCoreApplication::translate("TeamControl", "\345\255\246\346\240\241\345\220\215\347\247\260", nullptr));
        optionBox->setItemText(3, QCoreApplication::translate("TeamControl", "\350\265\233\344\272\213\347\261\273\345\210\253", nullptr));
        optionBox->setItemText(4, QCoreApplication::translate("TeamControl", "\345\217\202\350\265\233\351\200\211\346\211\213", nullptr));
        optionBox->setItemText(5, QCoreApplication::translate("TeamControl", "\346\214\207\345\257\274\350\200\201\345\270\210", nullptr));

        label->setText(QCoreApplication::translate("TeamControl", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">ID\357\274\232</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("TeamControl", "<html><head/><body><p><span style=\" font-size:12pt;\">\346\237\245\346\211\276\351\200\211\351\241\271\357\274\232</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("TeamControl", "<html><head/><body><p><span style=\" font-size:12pt;\">\346\237\245\346\211\276\345\206\205\345\256\271\357\274\232</span></p></body></html>", nullptr));
        serachButton->setText(QCoreApplication::translate("TeamControl", "\346\237\245\350\257\242", nullptr));
        resetButton->setText(QCoreApplication::translate("TeamControl", "\351\207\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeamControl: public Ui_TeamControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEAMCONTROL_H
