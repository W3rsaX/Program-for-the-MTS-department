/********************************************************************************
** Form generated from reading UI file 'z4.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_Z4_H
#define UI_Z4_H

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

class Ui_Z4
{
public:
    QAction *action;
    QAction *action_2;
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

    void setupUi(QMainWindow *Z4)
    {
        if (Z4->objectName().isEmpty())
            Z4->setObjectName(QString::fromUtf8("Z4"));
        Z4->resize(1793, 540);
        QFont font;
        font.setPointSize(9);
        Z4->setFont(font);
        action = new QAction(Z4);
        action->setObjectName(QString::fromUtf8("action"));
        action_2 = new QAction(Z4);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        centralwidget = new QWidget(Z4);
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

        Z4->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Z4);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1793, 25));
        menubar->setFont(font);
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        Z4->setMenuBar(menubar);
        statusbar = new QStatusBar(Z4);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setFont(font);
        Z4->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);

        retranslateUi(Z4);

        QMetaObject::connectSlotsByName(Z4);
    } // setupUi

    void retranslateUi(QMainWindow *Z4)
    {
        Z4->setWindowTitle(QCoreApplication::translate("Z4", "\320\236\321\202\321\207\320\265\321\202 \320\276 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\270\320\270 \320\263\321\200\320\260\321\204\320\270\320\272\320\260 \320\277\320\276\321\201\321\202\320\260\320\262\320\276\320\272 \321\201\321\213\321\200\321\214\321\217 \320\275\320\260 \320\274\320\265\321\201\321\217\321\206 \320\270 \320\277\321\200\320\265\321\202\320\265\320\275\320\267\320\270\320\270 \320\272 \320\277\320\276\321\201\321\202\320\260\320\262\321\211\320\270\320\272\320\260\320\274", nullptr));
        action->setText(QCoreApplication::translate("Z4", "\320\240\320\265\320\265\321\201\321\202\321\200 \321\202\320\276\320\262\320\260\321\200\320\275\321\213\321\205 \320\275\320\260\320\272\320\273\320\260\320\264\320\275\321\213\321\205", nullptr));
        action_2->setText(QCoreApplication::translate("Z4", "\320\223\321\200\320\260\321\204\320\270\320\272 \320\277\320\276\321\201\321\202\320\260\320\262\320\272\320\270 \321\201\321\213\321\200\321\214\321\217 \320\275\320\260 \320\274\320\265\321\201\321\217\321\206", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Z4", "\320\241\320\276\321\201\321\202\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("Z4", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        menu->setTitle(QCoreApplication::translate("Z4", "\320\222\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\276\320\272\321\203\320\274\320\265\320\275\321\202\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Z4: public Ui_Z4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_Z4_H
