/********************************************************************************
** Form generated from reading UI file 'z3.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_Z3_H
#define UI_Z3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Z3
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Z3)
    {
        if (Z3->objectName().isEmpty())
            Z3->setObjectName(QString::fromUtf8("Z3"));
        Z3->resize(1069, 574);
        QFont font;
        font.setPointSize(9);
        Z3->setFont(font);
        action = new QAction(Z3);
        action->setObjectName(QString::fromUtf8("action"));
        action_2 = new QAction(Z3);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_3 = new QAction(Z3);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        centralwidget = new QWidget(Z3);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableView);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);

        Z3->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Z3);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1069, 25));
        menubar->setFont(font);
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu->setFont(font);
        Z3->setMenuBar(menubar);
        statusbar = new QStatusBar(Z3);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setFont(font);
        Z3->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);
        menu->addAction(action_3);

        retranslateUi(Z3);

        QMetaObject::connectSlotsByName(Z3);
    } // setupUi

    void retranslateUi(QMainWindow *Z3)
    {
        Z3->setWindowTitle(QCoreApplication::translate("Z3", "\320\223\321\200\320\260\321\204\320\270\320\272 \320\277\320\276\321\201\321\202\320\260\320\262\320\272\320\270 \321\201\321\213\321\200\321\214\321\217 \320\275\320\260 \320\274\320\265\321\201\321\217\321\206", nullptr));
        action->setText(QCoreApplication::translate("Z3", "\320\240\320\265\320\265\321\201\321\202\321\200 \320\277\320\276\321\201\321\202\320\260\320\262\321\211\320\270\320\272\320\276\320\262", nullptr));
        action_2->setText(QCoreApplication::translate("Z3", "\320\240\320\265\320\265\321\201\321\202\321\200 \321\206\320\265\320\275 \320\275\320\260 \321\201\321\213\321\200\321\214\320\265 \321\203 \320\277\320\276\321\201\321\202\320\260\320\262\321\211\320\270\320\272\320\276\320\262", nullptr));
        action_3->setText(QCoreApplication::translate("Z3", "\320\222\320\265\320\264\320\276\320\274\320\276\321\201\321\202\321\214 \321\200\320\260\321\201\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\321\217 \320\267\320\260\320\272\321\203\320\277\320\260\320\265\320\274\320\276\320\263\320\276 \321\201\321\213\321\200\321\214\321\217 \320\274\320\265\320\266\320\264\321\203 \320\277\320\276\321\201\321\202\320\260\320\262\321\211\320\270\320\272\320\260\320\274\320\270", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Z3", "\320\241\320\276\321\201\321\202\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("Z3", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        menu->setTitle(QCoreApplication::translate("Z3", "\320\222\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\276\320\272\321\203\320\274\320\265\320\275\321\202\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Z3: public Ui_Z3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_Z3_H
