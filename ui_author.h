/********************************************************************************
** Form generated from reading UI file 'author.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHOR_H
#define UI_AUTHOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Author
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *Author)
    {
        if (Author->objectName().isEmpty())
            Author->setObjectName(QString::fromUtf8("Author"));
        Author->resize(313, 117);
        QFont font;
        font.setPointSize(9);
        Author->setFont(font);
        horizontalLayout_2 = new QHBoxLayout(Author);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Author);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(Author);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(Author);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(Author);

        QMetaObject::connectSlotsByName(Author);
    } // setupUi

    void retranslateUi(QDialog *Author)
    {
        Author->setWindowTitle(QCoreApplication::translate("Author", "\320\236\320\261 \320\260\320\262\321\202\320\276\321\200\320\265", nullptr));
        label->setText(QCoreApplication::translate("Author", "\320\220\320\262\321\202\320\276\321\200: \320\241\320\274\320\270\321\200\320\275\320\276\320\262 \320\225.\320\222. \320\230\320\246\320\242\320\234\320\241 4-5", nullptr));
        label_2->setText(QCoreApplication::translate("Author", "\320\223\320\276\320\264: 2024", nullptr));
        pushButton->setText(QCoreApplication::translate("Author", "\320\236\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Author: public Ui_Author {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHOR_H
