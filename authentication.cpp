#include "authentication.h"
#include "ui_auth.h"

Auth::Auth(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Auth)
{
    ui->setupUi(this);
    dbcontrol->Create();
    dbcontrol->connect();
}

Auth::~Auth()
{
    delete ui;
}


void Auth::on_pushButton_clicked()
{
    int k=0;
    QSettings settingsMain("W3rsaX", "Diplom");
    settingsMain.beginGroup("MainUser");
    settingsMain.setValue("login", "main");
    settingsMain.setValue("password", "123");
    settingsMain.endGroup();

    settingsMain.beginGroup("MainUser");
    log = settingsMain.value("login").toString();
    psw = settingsMain.value("password").toString();;
    settingsMain.endGroup();
    int i;
    QSqlQuery query1;
    QString z1N="SELECT login, password FROM users";
    query1.prepare(z1N);
    if (query1.exec() == false){
        (new QErrorMessage(this))->showMessage("Нет соединения с БД");
    }
    if ((ui->lineEdit->text() == log) &&(ui->lineEdit_2->text() == psw)){
        mm = new MainM();
        this->close();
        mm->show();
        mm->fn();
        k=1;
    }
    else{
        for (i = 0; i<query1.size(); i++){
            query1.next();
            if ((ui->lineEdit->text() == query1.value(0).toString()) &&(ui->lineEdit_2->text() == query1.value(1).toString())){
                mm = new MainM();
                this->close();
                mm->show();
                k=1;
            }
        }
    }
    if (k == 0){
        (new QErrorMessage(this))->showMessage("Неправильный логин или пароль");
    }
}


void Auth::on_action_triggered()
{
    qApp->exit();
}

