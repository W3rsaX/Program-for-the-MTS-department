#ifndef MAINMENU_H
#define MAINMENU_H

#include <QMainWindow>
#include "task1.h"
#include "task2.h"
#include "task3.h"
#include "task4.h"
#include "dictionaryNom.h"
#include "dictionaryClaim.h"
#include "author.h"
#include "about.h"
#include "newuser.h"
namespace Ui {
class MainM;
}

class MainM : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainM(QWidget *parent = nullptr);
    ~MainM();
    void fn();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_action_3_triggered();

    void on_action_4_triggered();

    void on_action_triggered();

    void on_action_2_triggered();

    void on_action_5_triggered();

    void on_action_6_triggered();


private:
    Ui::MainM *ui;
    Z1 *z1;
    Z2 *z2;
    Z3 *z3;
    Z4 *z4;
    S1 *s1;
    S2 *s2;
    Author *author;
    About *Ab;
    NewUser *NU;
};

#endif // MAINMENU_H
