#include "solution1.h"
#include "ui_vd1.h"

VD1::VD1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VD1),
    model(new QSqlTableModel)

{
    ui->setupUi(this);
}

VD1::~VD1()
{
    delete ui;
}


void VD1::VedNalS()
{
    k = 1;
    model->setQuery("SELECT  Nom.name, Nom.code, Nom.ed, Mat.quantity_stock, Mat.date FROM nomenclature AS Nom, material AS Mat WHERE Nom.id = Mat.material_id ORDER BY Nom.name");
    ui->tableView->setModel(model);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    model->setHeaderData(0, Qt::Horizontal, "Сырье");
    model->setHeaderData(1, Qt::Horizontal, "Код ОКПД2");
    model->setHeaderData(2, Qt::Horizontal, "Ед. изм.");
    model->setHeaderData(3, Qt::Horizontal, "Кол-во сырья на складе");
    model->setHeaderData(4, Qt::Horizontal, "Дата");
    model->sort(0,Qt::AscendingOrder);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->selectRow(0);
    QModelIndex index = ui->tableView->currentIndex();
    ui->lineEdit->setText(model->data(index).toString());
    ui->lineEdit_2->setText(model->data(index.siblingAtColumn(3)).toString());

    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->label->setText("Сырье");
    ui->label_2->setText("Кол-во");
    ui->lineEdit->setReadOnly(true);
}

void VD1::VedPotS()
{
    k = 2;
    model->setQuery("SELECT  Nom.name, Nom.code, Nom.ed, Mat.quantity_need FROM nomenclature AS Nom, material AS Mat WHERE Nom.id = Mat.material_id ORDER BY Nom.name");
    ui->tableView->setModel(model);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    model->setHeaderData(0, Qt::Horizontal, "Сырье");
    model->setHeaderData(1, Qt::Horizontal, "Код ОКПД2");
    model->setHeaderData(2, Qt::Horizontal, "Ед. изм.");
    model->setHeaderData(3, Qt::Horizontal, "Кол-во сырья на складе");
    model->sort(0,Qt::AscendingOrder);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->selectRow(0);
    QModelIndex index = ui->tableView->currentIndex();
    ui->lineEdit->setText(model->data(index).toString());
    ui->lineEdit_2->setText(model->data(index.siblingAtColumn(3)).toString());

    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->label->setText("Сырье");
    ui->label_2->setText("Кол-во");
    ui->lineEdit->setReadOnly(true);
}

void VD1::VedPotZ()
{
    k = 3;
    qDebug() << "1";
    model->setQuery("SELECT  Nom.name, Nom.code, Nom.ed, Mat.quantity_purchase FROM nomenclature AS Nom, material AS Mat WHERE Nom.id = Mat.material_id ORDER BY Nom.name");
    ui->tableView->setModel(model);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    model->setHeaderData(0, Qt::Horizontal, "Сырье");
    model->setHeaderData(1, Qt::Horizontal, "Код ОКПД2");
    model->setHeaderData(2, Qt::Horizontal, "Ед. изм.");
    model->setHeaderData(3, Qt::Horizontal, "Кол-во закупаемого");
    model->sort(0,Qt::AscendingOrder);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->selectRow(0);
    QModelIndex index = ui->tableView->currentIndex();
    ui->lineEdit->setText(model->data(index).toString());
    ui->lineEdit_2->setText(model->data(index.siblingAtColumn(3)).toString());

    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->label->setText("Сырье");
    ui->label_2->setText("Кол-во");
    ui->lineEdit->setReadOnly(true);
}

void VD1::ResPost()
{
    k = 4;
    model->setQuery("SELECT  * FROM suppliers ORDER BY id");
    ui->tableView->setModel(model);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    model->setHeaderData(0, Qt::Horizontal, "Код");
    model->setHeaderData(1, Qt::Horizontal, "Поставщик");
    model->sort(0,Qt::AscendingOrder);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->selectRow(0);
    QModelIndex index = ui->tableView->currentIndex();
    ui->lineEdit->setText(model->data(index).toString());
    ui->lineEdit_2->setText(model->data(index.siblingAtColumn(1)).toString());
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->label->setText("Код");
    ui->label_2->setText("Поставщик");
    ui->lineEdit->setReadOnly(false);
}

void VD1::VedZak()
{
    k = 5;
    model->setQuery("SELECT  Sup.name, Nom.name, Con.quantity FROM nomenclature AS Nom, suppliers AS Sup, material AS Mat, contract AS Con WHERE Nom.id = Mat.material_id AND Con.supplier_id = Sup.id AND Con.material_id = Mat.material_id ORDER BY con.id");
    ui->tableView->setModel(model);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    model->setHeaderData(0, Qt::Horizontal, "Поставщик");
    model->setHeaderData(1, Qt::Horizontal, "Сырье");
    model->setHeaderData(2, Qt::Horizontal, "Кол-во закупаемого");
    model->sort(0,Qt::AscendingOrder);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->selectRow(0);
    QModelIndex index = ui->tableView->currentIndex();
    ui->lineEdit->setText(model->data(index.siblingAtColumn(1)).toString());
    ui->lineEdit_2->setText(model->data(index.siblingAtColumn(2)).toString());

    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->label->setText("Сырье");
    ui->label_2->setText("Кол-во");
    ui->lineEdit->setReadOnly(true);
}


void VD1::on_tableView_clicked(const QModelIndex &index)
{
    if ((k == 1) || (k == 2) || (k == 3)){
        ui->lineEdit->setText(model->data(index.siblingAtColumn(0)).toString());
        ui->lineEdit_2->setText(model->data(index.siblingAtColumn(3)).toString());
        }
    if (k == 4){
        ui->lineEdit->setText(model->data(index.siblingAtColumn(0)).toString());
        ui->lineEdit_2->setText(model->data(index.siblingAtColumn(1)).toString());
        }
    if (k == 5){
        ui->lineEdit->setText(model->data(index.siblingAtColumn(1)).toString());
        ui->lineEdit_2->setText(model->data(index.siblingAtColumn(2)).toString());
    }
}



void VD1::on_pushButton_4_clicked()
{
    if (k == 1){
        QSqlQuery query;
        QString save="UPDATE material SET quantity_stock = :q WHERE material_id = :id";
        query.prepare(save);
        QSqlQuery query1;
        QString id="SELECT id FROM nomenclature WHERE name = :name";
        query1.prepare(id);
        QString s;
        s = QStringLiteral("%1").arg(ui->lineEdit->text());
        query1.bindValue(":name", s);
        query1.exec();
        query1.next();
        query.bindValue(":id", query1.value(0).toInt());
        query.bindValue(":q", ui->lineEdit_2->text());
        query.exec();
        QSqlQuery queryD;
        QString saveD="UPDATE material SET date = CURRENT_DATE WHERE material_id = :id";
        queryD.prepare(saveD);
        queryD.bindValue(":id", query1.value(0).toInt());
        queryD.exec();
        model->setQuery("SELECT Nom.name, Nom.code, Nom.ed, Mat.quantity_stock, Mat.date FROM nomenclature AS Nom, material AS Mat WHERE Nom.id = Mat.material_id ORDER BY Nom.name");
        ui->tableView->setModel(model);
    }
    if (k == 2){
        QSqlQuery query;
        qDebug() << "1";
        QString save="UPDATE material SET quantity_need = :q WHERE material_id = :id";
        query.prepare(save);
        QSqlQuery query1;
        QString id="SELECT id FROM nomenclature WHERE name = :name";
        query1.prepare(id);
        QString s;
        s = QStringLiteral("%1").arg(ui->lineEdit->text());
        query1.bindValue(":name", s);
        query1.exec();
        query1.next();
        query.bindValue(":id", query1.value(0).toInt());
        query.bindValue(":q", ui->lineEdit_2->text());
        query.exec();
        model->setQuery("SELECT  Nom.name, Nom.code, Nom.ed, Mat.quantity_need FROM nomenclature AS Nom, material AS Mat WHERE Nom.id = Mat.material_id ORDER BY Nom.name");
        ui->tableView->setModel(model);
    }
    if (k == 3){
        qDebug() << "1";
        QSqlQuery query;
        QString save="UPDATE material SET quantity_purchase = :q WHERE material_id = :id";
        query.prepare(save);
        QSqlQuery query1;
        QString id="SELECT id FROM nomenclature WHERE name = :name";
        query1.prepare(id);
        QString s;
        s = QStringLiteral("%1").arg(ui->lineEdit->text());
        query1.bindValue(":name", s);
        query1.exec();
        query1.next();
        query.bindValue(":id", query1.value(0).toInt());
        query.bindValue(":q", ui->lineEdit_2->text());
        query.exec();
        model->setQuery("SELECT  Nom.name, Nom.code, Nom.ed, Mat.quantity_purchase FROM nomenclature AS Nom, material AS Mat WHERE Nom.id = Mat.material_id ORDER BY Nom.name");
        ui->tableView->setModel(model);
    }
    if (k == 4){
        QSqlQuery query;
        QString save="INSERT INTO suppliers (id, name) VALUES (:id, :name)";
        query.prepare(save);
        query.bindValue(":id", ui->lineEdit->text());
        query.bindValue(":name", ui->lineEdit_2->text());
        query.exec();
        model->clear();
        model->setQuery("SELECT  * FROM suppliers ORDER BY id");
        ui->tableView->setModel(model);
        ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        model->setHeaderData(0, Qt::Horizontal, "Код");
        model->setHeaderData(1, Qt::Horizontal, "Поставщик");
        model->sort(0,Qt::AscendingOrder);
        ui->tableView->resizeColumnsToContents();
        ui->tableView->selectRow(0);
    }
    if (k == 5){
        QSqlQuery query;
        QString save="UPDATE contract SET quantity = :q WHERE id = :id";
        query.prepare(save);
        QModelIndex index = ui->tableView->currentIndex();
        query.bindValue(":id", index.row()+1);
        qDebug() << index.row();
        query.bindValue(":q", ui->lineEdit_2->text());
        query.exec();
        model->setQuery("SELECT  Sup.name, Nom.name, Con.quantity FROM nomenclature AS Nom, suppliers AS Sup, material AS Mat, contract AS Con WHERE Nom.id = Mat.material_id AND Con.supplier_id = Sup.id AND Con.material_id = Mat.material_id ORDER BY con.id");
        ui->tableView->setModel(model);
    }
}


void VD1::on_pushButton_5_clicked()
{
    this->close();
}


void VD1::on_pushButton_clicked()
{
    model->insertRow(model->rowCount());
    ui->tableView->setModel(model);
    ui->tableView->selectRow(model->rowCount()-1);
    QModelIndex index = ui->tableView->currentIndex();
    QString s;
    s =  QStringLiteral("%1").arg(model->rowCount());
    ui->lineEdit->setText(s);
    ui->lineEdit_2->setText(model->data(index.siblingAtColumn(1)).toString());

}


void VD1::on_pushButton_2_clicked()
{
    if (k ==4){
        QSqlQuery query;
        QString del="DELETE FROM suppliers WHERE id = :id";
        query.prepare(del);
        QModelIndex index = ui->tableView->currentIndex();
        query.bindValue(":id", model->data(index.siblingAtColumn(0)));
        query.exec();
        model->clear();
        model->setQuery("SELECT  * FROM suppliers ORDER BY id");
        ui->tableView->setModel(model);
        ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        model->setHeaderData(0, Qt::Horizontal, "Код");
        model->setHeaderData(1, Qt::Horizontal, "Поставщик");
        model->sort(0,Qt::AscendingOrder);
        ui->tableView->resizeColumnsToContents();
        ui->tableView->selectRow(0);
    }
}

