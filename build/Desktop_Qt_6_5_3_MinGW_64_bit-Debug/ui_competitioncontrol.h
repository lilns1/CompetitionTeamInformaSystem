/********************************************************************************
** Form generated from reading UI file 'competitioncontrol.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPETITIONCONTROL_H
#define UI_COMPETITIONCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CompetitionControl
{
public:

    void setupUi(QWidget *CompetitionControl)
    {
        if (CompetitionControl->objectName().isEmpty())
            CompetitionControl->setObjectName("CompetitionControl");
        CompetitionControl->resize(400, 300);

        retranslateUi(CompetitionControl);

        QMetaObject::connectSlotsByName(CompetitionControl);
    } // setupUi

    void retranslateUi(QWidget *CompetitionControl)
    {
        CompetitionControl->setWindowTitle(QCoreApplication::translate("CompetitionControl", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CompetitionControl: public Ui_CompetitionControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPETITIONCONTROL_H
