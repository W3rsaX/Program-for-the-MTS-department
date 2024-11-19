#ifndef AUTHENTICATION_H
#define AUTHENTICATION_H

#include <QMainWindow>
#include "MainM.h"
#include "db.h"
#include <QSettings>
#include "QErrorMessage"
#include "QMessageBox"

QT_BEGIN_NAMESPACE
namespace Ui { class Auth; }
QT_END_NAMESPACE

class Auth : public QMainWindow
{
    Q_OBJECT

public:
    Auth(QWidget *parent = nullptr);
    ~Auth();
    QString psw;
    QString log;
private slots:
    void on_pushButton_clicked();

    void on_action_triggered();

signals:
    void ToMain();

private:
    Ui::Auth *ui;
    MainM *mm;
    db *dbcontrol;
};
#endif // AUTHENTICATION_H
