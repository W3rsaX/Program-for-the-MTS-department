#include "task4.h"
#include "ui_z4.h"

Z4::Z4(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Z4)
{
    ui->setupUi(this);
}

Z4::~Z4()
{
    delete ui;
}

void Z4::on_pushButton_clicked()
{
    this->close();
    emit BackToMain();
}


void Z4::on_pushButton_2_clicked()
{
    int i;
    QSqlQuery query1;
    QString z4N="SELECT del.id FROM invoice AS inv, delivery_list AS del, contract AS con WHERE del.id = inv.delivery_id AND con.id = del.contract_id AND inv.actual_delivery_date > con.date";
    query1.prepare(z4N);
    query1.exec();
    QSqlQuery queryU;
    QString z1U="UPDATE delivery_list SET claim_id = :q WHERE delivery_list.id = :id";

    QSqlQuery queryc;
    QString zc="SELECT id FROM delivery_list";
    queryc.prepare(zc);
    queryc.exec();
    for (i = 0; i < queryc.size(); i++){
        query1.next();
        queryU.prepare(z1U);
        queryU.bindValue(":q", 2);
        queryU.bindValue(":id", query1.value(0).toInt());
        queryU.exec();
    }

    QSqlQuery query2;
    QString z43="SELECT del.id FROM invoice AS inv, delivery_list AS del, contract AS con WHERE del.id = inv.delivery_id AND con.id = del.contract_id AND inv.actual_delivery_quantity < con.quantity";
    query2.prepare(z43);
    query2.exec();
    QSqlQuery queryI;
    QString z1I="UPDATE delivery_list SET claim_id = :q WHERE delivery_list.id = :id";
    for (i = 0; i < queryc.size(); i++){
        query2.next();
        queryI.prepare(z1I);
        queryI.bindValue(":q", 3);
        queryI.bindValue(":id", query2.value(0).toInt());
        queryI.exec();
    }

    QSqlQuery query3;
    QString z42="SELECT del.id FROM invoice AS inv, delivery_list AS del, contract AS con WHERE del.id = inv.delivery_id AND con.id = del.contract_id AND inv.actual_delivery_quantity < con.quantity AND inv.actual_delivery_date > con.date";
    query3.prepare(z42);
    query3.exec();
    QSqlQuery queryY;
    QString z1Y="UPDATE delivery_list SET claim_id = :q WHERE delivery_list.id = :id";
    for (i = 0; i < queryc.size(); i++){
        query3.next();
        queryY.prepare(z1Y);
        queryY.bindValue(":q", 1);
        queryY.bindValue(":id", query3.value(0).toInt());
        queryY.exec();
    }

    QSqlQuery query4;
    QString z1S="UPDATE delivery_list SET claim_id = 0 WHERE delivery_list.claim_id IS NULL";
    query4.prepare(z1S);
    query4.exec();

    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT DeL.id AS Deliver_id, Sup.name AS Supplier_name, Nom.name AS Material_name, Nom.code, Nom.ed, con.quantity,  Inv.actual_delivery_quantity, con.date,   Inv.actual_delivery_date, CL.claim FROM   delivery_list AS DeL, suppliers AS Sup, nomenclature AS Nom, invoice AS Inv, claim AS CL, contract AS con WHERE DeL.status is NULL AND con.supplier_id = Sup.id AND con.material_id = Nom.id AND Inv.delivery_id = DeL.id AND Del.contract_id = con.id AND DeL.claim_id = CL.id  ORDER BY delivery_id");
    qDebug() << model->lastError();
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
    model->setHeaderData(6, Qt::Horizontal, "Кол-во фактическое");
    model->setHeaderData(7, Qt::Horizontal, "Плановая дата");
    model->setHeaderData(8, Qt::Horizontal, "Фактическая дата");
    model->setHeaderData(9, Qt::Horizontal, "Претензия");
    ui->tableView->resizeColumnsToContents();
}


void Z4::on_action_triggered()
{
    VD2 = new vd2();
    VD2->show();
    VD2->ResTov();
}


void Z4::on_action_2_triggered()
{
    VD2 = new vd2();
    VD2->show();
    VD2->Gra();
}

