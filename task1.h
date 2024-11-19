#ifndef TASK1_H
#define TASK1_H

#include <QMainWindow>
#include "db.h"
#include "solution1.h"
namespace Ui {
class Z1;
}

class Z1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Z1(QWidget *parent = nullptr);
    ~Z1();
signals:
    void BackToMain();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_action_triggered();

    void on_action_2_triggered();

private:
    Ui::Z1 *ui;
    db *dbcontrol;
    VD1 *vd1;
    QSqlTableModel *model;
};

#endif // TASK1_H
