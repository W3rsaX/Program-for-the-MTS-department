#ifndef TASK2_H
#define TASK2_H

#include <QMainWindow>
#include "db.h"
#include "solution1.h"
#include "solution2.h"
namespace Ui {
class Z2;
}

class Z2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Z2(QWidget *parent = nullptr);
    ~Z2();

signals:
    void BackToMain();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_action_triggered();

    void on_action_2_triggered();

    void on_action_3_triggered();

private:
    Ui::Z2 *ui;
    db *dbcontrol;
    VD1 *vd1;
    vd2 *VD2;
};

#endif // TASK2_H
