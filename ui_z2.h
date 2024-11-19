/********************************************************************************
** Form generated from reading UI file 'z2.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_Z2_H
#define UI_Z2_H

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

class Ui_Z2
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QWidget *centralwidget;
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

    void setupUi(QMainWindow *Z2)
    {
        if (Z2->objectName().isEmpty())
            Z2->setObjectName(QString::fromUtf8("Z2"));
        Z2->resize(707, 492);
        QFont font;
        font.setPointSize(9);
        Z2->setFont(font);
        action = new QAction(Z2);
        action->setObjectName(QString::fromUtf8("action"));
        action_2 = new QAction(Z2);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_3 = new QAction(Z2);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        centralwidget = new QWidget(Z2);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
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


        verticalLayout_3->addLayout(verticalLayout_2);

        Z2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Z2);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 707, 25));
        menubar->setFont(font);
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        Z2->setMenuBar(menubar);
        statusbar = new QStatusBar(Z2);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setFont(font);
        Z2->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);
        menu->addAction(action_3);

        retranslateUi(Z2);

        QMetaObject::connectSlotsByName(Z2);
    } // setupUi

    void retranslateUi(QMainWindow *Z2)
    {
        Z2->setWindowTitle(QCoreApplication::translate("Z2", "\320\222\320\265\320\264\320\276\320\274\320\276\321\201\321\202\321\214 \321\200\320\260\321\201\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\321\217 \320\267\320\260\320\272\321\203\320\277\320\260\320\265\320\274\320\276\320\263\320\276 \321\201\321\213\321\200\321\214\321\217 \320\274\320\265\320\266\320\264\321\203 \320\277\320\276\321\201\321\202\320\260\320\262\321\211\320\270\320\272\320\260\320\274\320\270", nullptr));
        action->setText(QCoreApplication::translate("Z2", "\320\222\320\265\320\264\320\276\320\274\320\276\321\201\321\202\321\214 \320\277\320\276\321\202\321\200\320\265\320\261\320\275\320\276\321\201\321\202\320\270 \320\262 \320\267\320\260\320\272\321\203\320\277\320\260\320\265\320\274\320\276\320\274 \321\201\321\213\321\200\321\214\320\265", nullptr));
        action_2->setText(QCoreApplication::translate("Z2", "\320\240\320\265\320\265\321\201\321\202\321\200 \320\277\320\276\321\201\321\202\320\260\320\262\321\211\320\270\320\272\320\276\320\262", nullptr));
        action_3->setText(QCoreApplication::translate("Z2", "\320\240\320\265\320\265\321\201\321\202\321\200 \321\206\320\265\320\275 \320\275\320\260 \321\201\321\213\321\200\321\214\320\265 \321\203 \320\277\320\276\321\201\321\202\320\260\320\262\321\211\320\270\320\272\320\276\320\262", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Z2", "\320\241\320\276\321\201\321\202\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("Z2", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        menu->setTitle(QCoreApplication::translate("Z2", "\320\222\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\276\320\272\321\203\320\274\320\265\320\275\321\202\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Z2: public Ui_Z2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_Z2_H
