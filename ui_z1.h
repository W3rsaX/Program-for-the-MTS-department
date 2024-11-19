/********************************************************************************
** Form generated from reading UI file 'z1.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_Z1_H
#define UI_Z1_H

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

class Ui_Z1
{
public:
    QAction *action;
    QAction *action_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
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

    void setupUi(QMainWindow *Z1)
    {
        if (Z1->objectName().isEmpty())
            Z1->setObjectName(QString::fromUtf8("Z1"));
        Z1->resize(661, 473);
        QFont font;
        font.setPointSize(9);
        Z1->setFont(font);
        action = new QAction(Z1);
        action->setObjectName(QString::fromUtf8("action"));
        action_2 = new QAction(Z1);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        widget = new QWidget(Z1);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setLayoutDirection(Qt::LeftToRight);
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(widget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setTextElideMode(Qt::ElideMiddle);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableView);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        Z1->setCentralWidget(widget);
        menubar = new QMenuBar(Z1);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 661, 25));
        menubar->setFont(font);
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        Z1->setMenuBar(menubar);
        statusbar = new QStatusBar(Z1);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setFont(font);
        Z1->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);

        retranslateUi(Z1);

        QMetaObject::connectSlotsByName(Z1);
    } // setupUi

    void retranslateUi(QMainWindow *Z1)
    {
        Z1->setWindowTitle(QCoreApplication::translate("Z1", "\320\222\320\265\320\264\320\276\320\274\320\276\321\201\321\202\321\214 \320\277\320\276\321\202\321\200\320\265\320\261\320\275\320\276\321\201\321\202\320\270 \320\262 \320\267\320\260\320\272\321\203\320\277\320\260\320\265\320\274\320\276\320\274 \321\201\321\213\321\200\321\214\320\265", nullptr));
        action->setText(QCoreApplication::translate("Z1", "\320\222\320\265\320\264\320\276\320\274\320\276\321\201\321\202\321\214 \320\275\320\260\320\273\320\270\321\207\320\270\321\217 \321\201\321\213\321\200\321\214\321\217 \320\275\320\260 \321\201\320\272\320\273\320\260\320\264\320\265", nullptr));
        action_2->setText(QCoreApplication::translate("Z1", "\320\222\320\265\320\264\320\276\320\274\320\276\321\201\321\202\321\214 \320\277\320\276\321\202\321\200\320\265\320\261\320\275\320\276\321\201\321\202\320\270 \320\262 \321\201\321\213\321\200\321\214\320\265 \320\264\320\273\321\217 \320\277\321\200\320\276\320\270\320\267\320\262\320\276\320\264\321\201\321\202\320\262\320\260 \320\275\320\260 \320\274\320\265\321\201\321\217\321\206", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Z1", "\320\241\320\276\321\201\321\202\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("Z1", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        menu->setTitle(QCoreApplication::translate("Z1", "\320\222\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\276\320\272\321\203\320\274\320\265\320\275\321\202\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Z1: public Ui_Z1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_Z1_H
