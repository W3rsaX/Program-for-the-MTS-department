/********************************************************************************
** Form generated from reading UI file 'mainm.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINM_H
#define UI_MAINM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainM
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainM)
    {
        if (MainM->objectName().isEmpty())
            MainM->setObjectName(QString::fromUtf8("MainM"));
        MainM->resize(563, 348);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainM->sizePolicy().hasHeightForWidth());
        MainM->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(9);
        MainM->setFont(font);
        action = new QAction(MainM);
        action->setObjectName(QString::fromUtf8("action"));
        action_2 = new QAction(MainM);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_3 = new QAction(MainM);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action_4 = new QAction(MainM);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        action_5 = new QAction(MainM);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        action_6 = new QAction(MainM);
        action_6->setObjectName(QString::fromUtf8("action_6"));
        action_6->setCheckable(false);
        action_6->setChecked(false);
        action_6->setEnabled(false);
        action_6->setVisible(false);
        centralwidget = new QWidget(MainM);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(20, 20, 241, 111));
        QFont font1;
        font1.setPointSize(14);
        font1.setStyleStrategy(QFont::PreferDefault);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(true);
        pushButton_2->setGeometry(QRect(300, 20, 241, 111));
        pushButton_2->setFont(font1);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setEnabled(true);
        pushButton_3->setGeometry(QRect(20, 160, 241, 111));
        pushButton_3->setFont(font1);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setEnabled(true);
        pushButton_4->setGeometry(QRect(300, 160, 241, 111));
        pushButton_4->setFont(font1);
        MainM->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainM);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 563, 25));
        menubar->setFont(font);
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        MainM->setMenuBar(menubar);
        statusbar = new QStatusBar(MainM);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setFont(font);
        MainM->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);
        menu_2->addAction(action_3);
        menu_2->addAction(action_4);
        menu_3->addAction(action_5);
        menu_3->addAction(action_6);

        retranslateUi(MainM);

        QMetaObject::connectSlotsByName(MainM);
    } // setupUi

    void retranslateUi(QMainWindow *MainM)
    {
        MainM->setWindowTitle(QCoreApplication::translate("MainM", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\276\320\272\320\275\320\276", nullptr));
        action->setText(QCoreApplication::translate("MainM", "\320\241\320\277\321\200\320\260\320\262\320\276\321\207\320\275\320\270\320\272 \321\201\321\213\321\200\321\214\321\217", nullptr));
        action_2->setText(QCoreApplication::translate("MainM", "\320\241\320\277\321\200\320\260\320\262\320\276\321\207\320\275\320\270\320\272 \320\277\321\200\320\265\321\202\320\265\320\275\320\267\320\270\320\271", nullptr));
        action_3->setText(QCoreApplication::translate("MainM", "\320\220\320\262\321\202\320\276\321\200", nullptr));
        action_4->setText(QCoreApplication::translate("MainM", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
        action_5->setText(QCoreApplication::translate("MainM", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        action_6->setText(QCoreApplication::translate("MainM", "\320\235\320\276\320\262\321\213\320\271 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214", nullptr));
#if QT_CONFIG(tooltip)
        pushButton->setToolTip(QCoreApplication::translate("MainM", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QCoreApplication::translate("MainM", "\320\227\320\260\320\272\321\203\320\277\320\260\320\265\320\274\320\276\320\265 \321\201\321\213\321\200\321\214\320\265 \n"
"\320\275\320\260 \320\274\320\265\321\201\321\217\321\206", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_2->setToolTip(QCoreApplication::translate("MainM", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_2->setText(QCoreApplication::translate("MainM", "\320\240\320\260\321\201\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\320\265 \n"
"\320\267\320\260\320\272\321\203\320\277\320\260\320\265\320\274\320\276\320\263\320\276 \n"
"\321\201\321\213\321\200\321\214\321\217 \320\275\320\260 \320\274\320\265\321\201\321\217\321\206", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_3->setToolTip(QCoreApplication::translate("MainM", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_3->setText(QCoreApplication::translate("MainM", "\320\223\321\200\320\260\321\204\320\270\320\272 \320\277\320\276\321\201\321\202\320\260\320\262\320\276\320\272 \n"
"\321\201\321\213\321\200\321\214\321\217 \320\275\320\260 \320\274\320\265\321\201\321\217\321\206", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_4->setToolTip(QCoreApplication::translate("MainM", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_4->setText(QCoreApplication::translate("MainM", "\320\236\321\202\321\207\320\265\321\202 \320\277\320\276 \320\263\321\200\320\260\321\204\320\270\320\272\321\203 \n"
"\320\277\320\276\321\201\321\202\320\260\320\262\320\272 \321\201\321\213\321\200\321\214\321\217 \320\275\320\260 \n"
"\320\274\320\265\321\201\321\217\321\206", nullptr));
        menu->setTitle(QCoreApplication::translate("MainM", "\320\241\320\277\321\200\320\260\320\262\320\276\321\207\320\275\320\270\320\272\320\270", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainM", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainM", "\320\234\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainM: public Ui_MainM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINM_H
