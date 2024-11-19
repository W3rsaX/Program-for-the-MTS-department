#include "newuser.h"
#include "ui_newuser.h"

NewUser::NewUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewUser)
{
    ui->setupUi(this);
}

NewUser::~NewUser()
{
    delete ui;
}

void NewUser::on_pushButton_2_clicked()
{
    this->close();
}


void NewUser::on_pushButton_clicked()
{
    QSqlQuery query;
    QString save="INSERT INTO users (login, password) VALUES (:lg,:psw)";
    query.prepare(save);
    query.bindValue(":lg", ui->lineEdit->text());
    query.bindValue(":psw", ui->lineEdit_2->text());
    if (query.exec() == true){
        QMessageBox msgBox;
        msgBox.setText("Пользователь добавлен");
        msgBox.exec();
    }
    else {
        (new QErrorMessage(this))->showMessage("Пользователь не добавлен");
    }
    this->close();
}

