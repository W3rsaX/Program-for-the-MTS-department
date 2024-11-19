/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QString::fromUtf8("About"));
        About->resize(376, 385);
        QFont font;
        font.setPointSize(9);
        About->setFont(font);
        verticalLayout = new QVBoxLayout(About);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        plainTextEdit = new QPlainTextEdit(About);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setEnabled(true);
        plainTextEdit->setReadOnly(true);

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(About);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QCoreApplication::translate("About", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("About", "\320\224\320\260\320\275\320\275\320\276\320\265 \320\237\320\236 \321\200\320\260\320\267\321\200\320\260\320\261\320\276\321\202\320\260\320\275\320\260 \320\264\320\273\321\217 \320\276\321\200\320\263\320\260\320\275\320\270\320\267\320\260\321\206\320\270\320\270 \320\236\320\236\320\236 \302\253\320\241\321\202\321\200\320\276\320\271-\320\221\320\265\321\202\320\276\320\275\302\273. \n"
"\320\236\320\275\320\276 \320\277\320\276\320\267\320\262\320\276\320\273\321\217\320\265\321\202 \321\200\320\265\321\210\320\260\321\202\321\214 4 \320\272\320\273\321\216\321\207\320\265\320\262\321\213\320\265 \320\267\320\260\320\264\320\260\321\207\320\270 \320\277\320\276\320\264\321\201\320\270\321\201\321\202\320\265\320\274\321\213 \321\201\320\275\320\260\320\261\320\266\320\265\320\275\320\270\321\217 \321\201\321\213\321\200\321\214\320\265\320\274:\n"
"1. \320\241\320\276\321\201\321\202\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\262\320\265\320\264\320\276\320\274\320\276\321\201\321\202"
                        "\320\270 \320\277\320\276\321\202\321\200\320\265\320\261\320\275\320\276\321\201\321\202\320\270 \320\262 \320\267\320\260\320\272\321\203\320\277\320\260\320\265\320\274\320\276\320\274 \321\201\321\213\321\200\321\214\320\265 \320\275\320\260 \320\274\320\265\321\201\321\217\321\206.\n"
"2. \320\241\320\276\321\201\321\202\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\320\273\320\260\320\275\320\260 \321\200\320\260\321\201\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\321\217 \320\267\320\260\320\272\321\203\320\277\320\260\320\265\320\274\320\276\320\263\320\276 \321\201\321\213\321\200\321\214\321\217 \320\274\320\265\320\266\320\264\321\203 \320\277\320\276\321\201\321\202\320\260\320\262\321\211\320\270\320\272\320\260\320\274\320\270 \320\275\320\260 \320\274\320\265\321\201\321\217\321\206.\n"
"3. \320\241\320\276\321\201\321\202\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\263\321\200\320\260\321\204\320\270\320\272\320\260 \320\277\320\276"
                        "\321\201\321\202\320\260\320\262\320\276\320\272 \321\201\321\213\321\200\321\214\321\217 \320\275\320\260 \320\274\320\265\321\201\321\217\321\206.\n"
"4. \320\241\320\276\321\201\321\202\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\276\321\202\321\207\320\265\321\202\320\260 \320\276 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\270\320\270 \320\263\321\200\320\260\321\204\320\270\320\272\320\260 \320\277\320\276\321\201\321\202\320\260\320\262\320\276\320\272 \321\201\321\213\321\200\321\214\321\217 \320\275\320\260 \320\274\320\265\321\201\321\217\321\206 \321\201 \321\203\320\272\320\260\320\267\320\260\320\275\320\270\320\265\320\274 \320\277\321\200\320\265\321\202\320\265\320\275\320\267\320\270\320\271 \320\272 \320\277\320\276\321\201\321\202\320\260\320\262\321\211\320\270\320\272\320\260\320\274.", nullptr));
        pushButton->setText(QCoreApplication::translate("About", "\320\236\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
