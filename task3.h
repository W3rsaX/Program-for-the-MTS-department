#ifndef TASK3_H
#define TASK3_H

#include <QMainWindow>
#include "db.h"
#include "solution1.h"
#include "solution2.h"
namespace Ui {
class Z3;
}

class Z3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Z3(QWidget *parent = nullptr);
    ~Z3();
signals:
    void BackToMain();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_action_triggered();

    void on_action_2_triggered();

    void on_action_3_triggered();

private:
    Ui::Z3 *ui;
    db *dbcontrol;
    VD1 *vd1;
    vd2 *VD2;
};

#endif // TASK3_H
