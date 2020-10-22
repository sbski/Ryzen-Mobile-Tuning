/********************************************************************************
** Form generated from reading UI file 'ryzenmobiletuning.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RYZENMOBILETUNING_H
#define UI_RYZENMOBILETUNING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RyzenMobileTuning
{
public:
    QWidget *centralwidget;
    QDoubleSpinBox *doubleSpinBox;
    QMenuBar *menubar;
    QMenu *menuRyzen_Mobile_Tuning;
    QMenu *menuAbout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RyzenMobileTuning)
    {
        if (RyzenMobileTuning->objectName().isEmpty())
            RyzenMobileTuning->setObjectName(QString::fromUtf8("RyzenMobileTuning"));
        RyzenMobileTuning->resize(800, 600);
        centralwidget = new QWidget(RyzenMobileTuning);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        doubleSpinBox = new QDoubleSpinBox(centralwidget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(110, 60, 62, 22));
        RyzenMobileTuning->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RyzenMobileTuning);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuRyzen_Mobile_Tuning = new QMenu(menubar);
        menuRyzen_Mobile_Tuning->setObjectName(QString::fromUtf8("menuRyzen_Mobile_Tuning"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        RyzenMobileTuning->setMenuBar(menubar);
        statusbar = new QStatusBar(RyzenMobileTuning);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        RyzenMobileTuning->setStatusBar(statusbar);

        menubar->addAction(menuRyzen_Mobile_Tuning->menuAction());
        menubar->addAction(menuAbout->menuAction());

        retranslateUi(RyzenMobileTuning);

        QMetaObject::connectSlotsByName(RyzenMobileTuning);
    } // setupUi

    void retranslateUi(QMainWindow *RyzenMobileTuning)
    {
        RyzenMobileTuning->setWindowTitle(QCoreApplication::translate("RyzenMobileTuning", "RyzenMobileTuning", nullptr));
        menuRyzen_Mobile_Tuning->setTitle(QCoreApplication::translate("RyzenMobileTuning", "Tuning and Monitoring", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("RyzenMobileTuning", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RyzenMobileTuning: public Ui_RyzenMobileTuning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RYZENMOBILETUNING_H
