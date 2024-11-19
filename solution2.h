#ifndef SOLUTION2_H
#define SOLUTION2_H

#include <QDialog>
#include "db.h"
namespace Ui {
class vd2;
}

class vd2 : public QDialog
{
    Q_OBJECT

public:
    explicit vd2(QWidget *parent = nullptr);
    ~vd2();
    void ResCen();
    void ResTov();
    void Gra();
    int k;

private slots:
    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::vd2 *ui;
    QSqlQueryModel *model;
};

#endif // SOLUTION2_H
