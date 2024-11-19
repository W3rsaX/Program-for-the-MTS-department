#include "mainMenu.h"
#include "ui_mainm.h"

MainM::MainM(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainM)
{
    ui->setupUi(this);
    this->show();
    z1 = new Z1();
    connect(z1, &Z1::BackToMain, this, &MainM::show);
    z2 = new Z2();
    connect(z2, &Z2::BackToMain, this, &MainM::show);
    z3 = new Z3();
    connect(z3, &Z3::BackToMain, this, &MainM::show);
    z4 = new Z4();
    connect(z4, &Z4::BackToMain, this, &MainM::show);
}

MainM::~MainM()
{
    delete ui;
}

void MainM::on_pushButton_clicked()
{
    z1->show();
    this->hide();
}


void MainM::on_pushButton_2_clicked()
{
    z2->show();
    this->hide();
}


void MainM::on_pushButton_3_clicked()
{
    z3->show();
    this->hide();
}


void MainM::on_pushButton_4_clicked()
{
    z4->show();
    this->hide();
}



void MainM::on_action_3_triggered()
{
    author = new Author();
    author->show();
}


void MainM::on_action_4_triggered()
{
    Ab = new About();
    Ab->show();
}


void MainM::on_action_triggered()
{
    s1 = new S1();
    s1->show();
    s1->Start();
}


void MainM::on_action_2_triggered()
{
    s2 = new S2();
    s2->show();
    s2->Start();
}


void MainM::on_action_5_triggered()
{
    qApp->exit();
}


void MainM::on_action_6_triggered()
{
    NU = new NewUser();
    NU->show();

}

void MainM::fn()
{
    ui->action_6->setVisible(true);
    ui->action_6->setEnabled(true);
}

