#ifndef DICTIONARYNOM_H
#define DICTIONARYNOM_H

#include <QDialog>
#include "db.h"

namespace Ui {
class S1;
}
class QSqlTableModel;
class S1 : public QDialog
{
    Q_OBJECT

public:
    void Start();
    explicit S1(QWidget *parent = nullptr);
    ~S1();
    db *dbcontrol;
private slots:
    void on_pushButton_2_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::S1 *ui;
    QSqlTableModel *model;
};

#endif // DICTIONARYNOM_H
