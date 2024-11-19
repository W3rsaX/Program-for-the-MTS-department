#ifndef SOLUTION1_H
#define SOLUTION1_H

#include <QDialog>
#include "db.h"

namespace Ui {
class VD1;
}
class QSqlTableModel;
class VD1 : public QDialog
{
    Q_OBJECT



public:
    explicit VD1(QWidget *parent = nullptr);
    ~VD1();
    void VedNalS();
    void VedPotS();
    void VedPotZ();
    void ResPost();
    void VedZak();
    int k;
private slots:


    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::VD1 *ui;
    QSqlQueryModel *model;

};

#endif // SOLUTION1_H
