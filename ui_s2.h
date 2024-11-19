/********************************************************************************
** Form generated from reading UI file 's2.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S2_H
#define UI_S2_H

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

class Ui_S2
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_9;
    QTableView *tableView;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_6;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_5;

    void setupUi(QDialog *S2)
    {
        if (S2->objectName().isEmpty())
            S2->setObjectName(QString::fromUtf8("S2"));
        S2->resize(784, 447);
        QFont font;
        font.setPointSize(9);
        S2->setFont(font);
        verticalLayout = new QVBoxLayout(S2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        tableView = new QTableView(S2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setMinimumSize(QSize(450, 0));
        tableView->setFont(font);

        horizontalLayout_9->addWidget(tableView);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);

        horizontalLayout_9->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(S2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(80, 0));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_5);

        lineEdit = new QLineEdit(S2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(140, 0));
        lineEdit->setMaximumSize(QSize(166666, 16777215));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(S2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(80, 0));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_6);

        lineEdit_2 = new QLineEdit(S2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(140, 0));
        lineEdit_2->setMaximumSize(QSize(1666666, 16777215));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_6 = new QPushButton(S2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        horizontalLayout_3->addWidget(pushButton_6);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        pushButton_4 = new QPushButton(S2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_8->addWidget(pushButton_4);

        pushButton_7 = new QPushButton(S2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        horizontalLayout_8->addWidget(pushButton_7);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        pushButton_5 = new QPushButton(S2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout_8->addWidget(pushButton_5);


        verticalLayout->addLayout(horizontalLayout_8);


        retranslateUi(S2);

        QMetaObject::connectSlotsByName(S2);
    } // setupUi

    void retranslateUi(QDialog *S2)
    {
        S2->setWindowTitle(QCoreApplication::translate("S2", "\320\241\320\277\321\200\320\260\320\262\320\276\321\207\320\275\320\270\320\272 \320\277\321\200\320\265\321\202\320\265\320\275\320\267\320\270\320\271", nullptr));
        label_5->setText(QCoreApplication::translate("S2", "\320\232\320\276\320\264", nullptr));
        lineEdit->setText(QCoreApplication::translate("S2", "1", nullptr));
        label_6->setText(QCoreApplication::translate("S2", "\320\237\321\200\320\265\321\202\320\265\320\275\320\267\320\270\321\217", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("S2", "\320\237\320\276\321\201\321\202\320\260\320\262\320\272\320\260 \320\267\320\260\320\264\320\265\321\200\320\266\320\260\320\275\320\260 \320\270 \320\262 \320\277\320\276\321\201\321\202\320\260\320\262\320\272\320\265 \320\274\320\265\320\275\321\214\321\210\320\265 \321\201\321\213\321\200\321\214\321\217, \321\207\320\265\320\274 \320\261\321\213\320\273\320\276 \320\267\320\260\321\217\320\262\320\273\320\265\320\275\320\276 \320\262 \320\264\320\276\320\263\320\276\320\262\320\276\321\200\320\265", nullptr));
        pushButton_6->setText(QCoreApplication::translate("S2", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton_4->setText(QCoreApplication::translate("S2", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\321\203\321\216", nullptr));
        pushButton_7->setText(QCoreApplication::translate("S2", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_5->setText(QCoreApplication::translate("S2", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class S2: public Ui_S2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S2_H
