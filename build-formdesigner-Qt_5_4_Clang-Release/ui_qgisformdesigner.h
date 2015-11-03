/********************************************************************************
** Form generated from reading UI file 'qgisformdesigner.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGISFORMDESIGNER_H
#define UI_QGISFORMDESIGNER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgisFormDesigner
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QgisFormDesigner)
    {
        if (QgisFormDesigner->objectName().isEmpty())
            QgisFormDesigner->setObjectName(QStringLiteral("QgisFormDesigner"));
        QgisFormDesigner->resize(400, 300);
        menuBar = new QMenuBar(QgisFormDesigner);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QgisFormDesigner->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QgisFormDesigner);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QgisFormDesigner->addToolBar(mainToolBar);
        centralWidget = new QWidget(QgisFormDesigner);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QgisFormDesigner->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QgisFormDesigner);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QgisFormDesigner->setStatusBar(statusBar);

        retranslateUi(QgisFormDesigner);

        QMetaObject::connectSlotsByName(QgisFormDesigner);
    } // setupUi

    void retranslateUi(QMainWindow *QgisFormDesigner)
    {
        QgisFormDesigner->setWindowTitle(QApplication::translate("QgisFormDesigner", "QgisFormDesigner", 0));
    } // retranslateUi

};

namespace Ui {
    class QgisFormDesigner: public Ui_QgisFormDesigner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGISFORMDESIGNER_H
