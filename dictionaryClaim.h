#ifndef DICTIONARYCLAIM_H
#define DICTIONARYCLAIM_H

#include <QDialog>
#include "db.h"
namespace Ui {
class S2;
}

class S2 : public QDialog
{
    Q_OBJECT

public:
    explicit S2(QWidget *parent = nullptr);
    ~S2();
    void Start();
    db *dbcontrol;
private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::S2 *ui;
    QSqlTableModel *model;
};

#endif // DICTIONARYCLAIM_H
