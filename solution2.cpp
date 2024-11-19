#include "solution2.h"
#include "ui_vd2.h"

vd2::vd2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::vd2),
    model(new QSqlTableModel)
{
    ui->setupUi(this);
}

vd2::~vd2()
{
    delete ui;
}

void vd2::ResCen()
{
    k = 1;
    model->setQuery("SELECT  Sup.name, Nom.name, Nom.code, Nom.ed, Prl.max_quantity, Prl.price FROM nomenclature AS Nom, price_list AS Prl,  suppliers AS Sup WHERE Prl.material_id = Nom.id AND Prl.supplier_id = Sup.id");
    ui->tableView->setModel(model);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    model->setHeaderData(0, Qt::Horizontal, "Поставщик");
    model->setHeaderData(1, Qt::Horizontal, "Сырье");
    model->setHeaderData(2, Qt::Horizontal, "Код ОКПД2");
    model->setHeaderData(3, Qt::Horizontal, "Ед. изм.");
    model->setHeaderData(4, Qt::Horizontal, "Макс. кол-во");
    model->setHeaderData(5, Qt::Horizontal, "Цена за 1 ед.");
    model->sort(0,Qt::AscendingOrder);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->selectRow(0);
    QModelIndex index = ui->tableView->currentIndex();
    ui->lineEdit->setText(model->data(index.siblingAtColumn(0)).toString());
    ui->lineEdit_2->setText(model->data(index.siblingAtColumn(1)).toString());
    ui->lineEdit_5->setText(model->data(index.siblingAtColumn(4)).toString());
    ui->lineEdit_6->setText(model->data(index.siblingAtColumn(5)).toString());
    ui->lineEdit->setReadOnly(true);
    ui->lineEdit_2->setReadOnly(true);
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);

}

void vd2::ResTov()
{
    k = 2;
    model->setQuery("SELECT  Inv.delivery_id, Sup.name, Nom.name, Nom.code, Nom.ed, Inv.actual_delivery_quantity,  Inv.actual_delivery_date FROM nomenclature AS Nom,  suppliers AS Sup, invoice AS Inv, delivery_list AS Del, contract AS Con WHERE Inv.delivery_id = Del.id AND Con.supplier_id = Sup.id AND Con.material_id = Nom.id AND Con.id = Del.id ORDER BY  Inv.delivery_id");
    ui->tableView->setModel(model);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    model->setHeaderData(0, Qt::Horizontal, "Код накладной");
    model->setHeaderData(1, Qt::Horizontal, "Поставщик");
    model->setHeaderData(2, Qt::Horizontal, "Сырье");
    model->setHeaderData(3, Qt::Horizontal, "Код ОКПД2");
    model->setHeaderData(4, Qt::Horizontal, "Ед. изм.");
    model->setHeaderData(5, Qt::Horizontal, "Кол-во сырья");
    model->setHeaderData(6, Qt::Horizontal, "Дата поставки");
    model->sort(0,Qt::AscendingOrder);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->selectRow(0);
    QModelIndex index = ui->tableView->currentIndex();
    ui->lineEdit->setText(model->data(index.siblingAtColumn(1)).toString());
    ui->lineEdit_2->setText(model->data(index.siblingAtColumn(2)).toString());
    ui->lineEdit_5->setText(model->data(index.siblingAtColumn(5)).toString());
    ui->lineEdit_6->setText(model->data(index.siblingAtColumn(6)).toString());
    ui->lineEdit->setReadOnly(true);
    ui->lineEdit_2->setReadOnly(true);
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->label->setText("Поставщик");
    ui->label_2->setText("Сырье");
    ui->label_5->setText("Кол-во сырья");
    ui->label_6->setText("Дата поставки");
}

void vd2::Gra()
{
    k = 3;
    model->setQuery("SELECT DeL.id,Sup.name,Nom.name,Nom.code,Nom.ed,Con.quantity,PrL.price,DaP.cost,Con.date FROM   delivery_list AS DeL,suppliers AS Sup,nomenclature AS Nom,price_list AS PrL,contract AS Con,( SELECT con_1.id AS idc , con_1.quantity * pl.price AS cost FROM contract con_1,price_list pl WHERE pl.supplier_id = con_1.supplier_id AND con_1.material_id = pl.material_id) dap WHERE DeL.status is NULL AND con.supplier_id = Sup.id AND con.material_id = Nom.id AND PrL.supplier_id = con.supplier_id AND con.material_id = PrL.material_id AND DeL.contract_id = Con.id AND DaP.idc = con.id");
    ui->tableView->setModel(model);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    model->setHeaderData(0, Qt::Horizontal, "Код поставки");
    model->setHeaderData(1, Qt::Horizontal, "Поставщик");
    model->setHeaderData(2, Qt::Horizontal, "Сырье");
    model->setHeaderData(3, Qt::Horizontal, "Код ОКПД2");
    model->setHeaderData(4, Qt::Horizontal, "Ед. изм.");
    model->setHeaderData(5, Qt::Horizontal, "Кол-во поставляемого");
    model->setHeaderData(6, Qt::Horizontal, "Цена за 1 ед.");
    model->setHeaderData(7, Qt::Horizontal, "Цена поставки");
    model->setHeaderData(8, Qt::Horizontal, "Дата поставки");
    ui->tableView->resizeColumnsToContents();
    ui->tableView->selectRow(0);
    QModelIndex index = ui->tableView->currentIndex();
    ui->lineEdit->setText(model->data(index.siblingAtColumn(0)).toString());
    ui->lineEdit_2->setText(model->data(index.siblingAtColumn(5)).toString());
    ui->lineEdit_5->setText(model->data(index.siblingAtColumn(7)).toString());
    ui->lineEdit_6->setText(model->data(index.siblingAtColumn(8)).toString());
    ui->lineEdit->setReadOnly(true);
    ui->lineEdit_2->setReadOnly(false);
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->label->setText("Код поставки");
    ui->label_2->setText("Кол-во");
    ui->label_5->setText("Цена поставки");
    ui->label_6->setText("Дата поставки");
}

void vd2::on_tableView_clicked(const QModelIndex &index)
{
    if (k == 1){
        ui->lineEdit->setText(model->data(index.siblingAtColumn(0)).toString());
        ui->lineEdit_2->setText(model->data(index.siblingAtColumn(1)).toString());
        ui->lineEdit_5->setText(model->data(index.siblingAtColumn(4)).toString());
        ui->lineEdit_6->setText(model->data(index.siblingAtColumn(5)).toString());
    }
    if (k == 2){
        ui->lineEdit->setText(model->data(index.siblingAtColumn(1)).toString());
        ui->lineEdit_2->setText(model->data(index.siblingAtColumn(2)).toString());
        ui->lineEdit_5->setText(model->data(index.siblingAtColumn(5)).toString());
        ui->lineEdit_6->setText(model->data(index.siblingAtColumn(6)).toString());
    }
    if (k == 3){
        ui->lineEdit->setText(model->data(index.siblingAtColumn(0)).toString());
        ui->lineEdit_2->setText(model->data(index.siblingAtColumn(5)).toString());
        ui->lineEdit_5->setText(model->data(index.siblingAtColumn(7)).toString());
        ui->lineEdit_6->setText(model->data(index.siblingAtColumn(8)).toString());
    }
}


void vd2::on_pushButton_4_clicked()
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
        int l;
        QSqlQuery query;
        QString save="UPDATE invoice SET actual_delivery_quantity = :q, actual_delivery_date = :d WHERE delivery_id = :id";
        query.prepare(save);
        QModelIndex index = ui->tableView->currentIndex();
        query.bindValue(":id", model->data(index.siblingAtColumn(0)).toInt());
        query.bindValue(":q", ui->lineEdit_5->text());
        query.bindValue(":d", ui->lineEdit_6->text());
        query.exec();
        l = model->data(index.siblingAtColumn(0)).toInt();
        model->setQuery("SELECT  Inv.delivery_id, Sup.name, Nom.name, Nom.code, Nom.ed, Inv.actual_delivery_quantity,  Inv.actual_delivery_date FROM nomenclature AS Nom,  suppliers AS Sup, invoice AS Inv, delivery_list AS Del, contract AS Con WHERE Inv.delivery_id = Del.id AND Con.supplier_id = Sup.id AND Con.material_id = Nom.id AND Con.id = Del.id ORDER BY  Inv.delivery_id");
        ui->tableView->setModel(model);
        ui->tableView->selectRow(l-1);
    }
    if (k == 3){
        int l;
        QSqlQuery query;
        QString save="UPDATE contract SET quantity = :q, date = :d, price = :p WHERE id = :id";
        query.prepare(save);
        QModelIndex index = ui->tableView->currentIndex();
        query.bindValue(":id", model->data(index.siblingAtColumn(0)).toInt());
        query.bindValue(":q", ui->lineEdit_2->text());
        query.bindValue(":d", ui->lineEdit_6->text());
        query.bindValue(":p", ui->lineEdit_5->text());
        query.exec();
        l = model->data(index.siblingAtColumn(0)).toInt();
        model->setQuery("SELECT DeL.id,Sup.name,Nom.name,Nom.code,Nom.ed,Con.quantity,PrL.price,DaP.cost,Con.date FROM   delivery_list AS DeL,suppliers AS Sup,nomenclature AS Nom,price_list AS PrL,contract AS Con,( SELECT con_1.id AS idc , con_1.quantity * pl.price AS cost FROM contract con_1,price_list pl WHERE pl.supplier_id = con_1.supplier_id AND con_1.material_id = pl.material_id) dap WHERE DeL.status is NULL AND con.supplier_id = Sup.id AND con.material_id = Nom.id AND PrL.supplier_id = con.supplier_id AND con.material_id = PrL.material_id AND DeL.contract_id = Con.id AND DaP.idc = con.id");
        ui->tableView->setModel(model);
        ui->tableView->selectRow(l-1);
    }
}


void vd2::on_pushButton_5_clicked()
{
    this->close();
}

