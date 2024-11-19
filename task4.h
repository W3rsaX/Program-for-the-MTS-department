#ifndef TASK4_H
#define TASK4_H

#include <QMainWindow>
#include "db.h"
#include "solution2.h"
namespace Ui {
class Z4;
}

class Z4 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Z4(QWidget *parent = nullptr);
    ~Z4();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

    void on_action_triggered();

    void on_action_2_triggered();

signals:
    void BackToMain();
private:
    Ui::Z4 *ui;
    vd2 *VD2;
};

#endif // TASK4_H
