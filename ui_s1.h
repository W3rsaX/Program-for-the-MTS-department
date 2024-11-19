/********************************************************************************
** Form generated from reading UI file 's1.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S1_H
#define UI_S1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_S1
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QTableView *tableView;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_2;

    void setupUi(QDialog *S1)
    {
        if (S1->objectName().isEmpty())
            S1->setObjectName(QString::fromUtf8("S1"));
        S1->resize(762, 389);
        QFont font;
        font.setPointSize(9);
        S1->setFont(font);
        verticalLayout_2 = new QVBoxLayout(S1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        tableView = new QTableView(S1);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setMinimumSize(QSize(250, 0));
        tableView->setFont(font);

        horizontalLayout_6->addWidget(tableView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(S1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(130, 0));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(S1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(140, 0));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(S1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(130, 0));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(S1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(140, 0));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(S1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(130, 0));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(S1);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(140, 0));

        horizontalLayout_3->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(S1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(130, 0));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_4 = new QLineEdit(S1);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setMinimumSize(QSize(140, 0));

        horizontalLayout_4->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        pushButton = new QPushButton(S1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_5->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        pushButton_3 = new QPushButton(S1);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_7->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(S1);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_7->addWidget(pushButton_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        pushButton_2 = new QPushButton(S1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_7->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout_7);


        retranslateUi(S1);

        QMetaObject::connectSlotsByName(S1);
    } // setupUi

    void retranslateUi(QDialog *S1)
    {
        S1->setWindowTitle(QCoreApplication::translate("S1", "\320\241\320\277\321\200\320\260\320\262\320\276\321\207\320\275\320\270\320\272 \321\201\321\213\321\200\321\214\321\217", nullptr));
        label->setText(QCoreApplication::translate("S1", "\320\232\320\276\320\264", nullptr));
        lineEdit->setText(QString());
        label_2->setText(QCoreApplication::translate("S1", "\320\241\321\213\321\200\321\214\320\265", nullptr));
        lineEdit_2->setText(QString());
        label_3->setText(QCoreApplication::translate("S1", "\320\232\320\276\320\264 \320\236\320\232\320\237\320\2242", nullptr));
        lineEdit_3->setText(QString());
        label_4->setText(QCoreApplication::translate("S1", "\320\225\320\264. \320\270\320\267\320\274.", nullptr));
        lineEdit_4->setText(QString());
        pushButton->setText(QCoreApplication::translate("S1", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("S1", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\321\213\320\271", nullptr));
        pushButton_4->setText(QCoreApplication::translate("S1", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("S1", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class S1: public Ui_S1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S1_H
