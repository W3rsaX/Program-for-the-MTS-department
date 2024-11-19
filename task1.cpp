#include "task1.h"
#include "ui_z1.h"

Z1::Z1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Z1)
{
    ui->setupUi(this);
}

Z1::~Z1()
{
    delete ui;
}

void Z1::on_pushButton_clicked()
{
    this->close();
    emit BackToMain();
}


void Z1::on_pushButton_2_clicked()
{
    int i;
    QSqlQuery query1;
    QString z1N="SELECT quantity_stock, quantity_need FROM material ORDER BY material_id";
    query1.prepare(z1N);
    query1.exec();
    QSqlQuery queryI;
    QString z1I="SELECT material_id FROM material ORDER BY material_id";
    queryI.prepare(z1I);
    queryI.exec();
    QSqlQuery queryU;
    QString z1U="UPDATE material SET quantity_purchase = :q WHERE material_id = :id";
    for (i = 0; i < query1.size(); i++){
        query1.next();
        queryI.next();
        queryU.prepare(z1U);
        int k;
        if (query1.value(1).toInt() - query1.value(0).toInt() < 0) {
            k=0;
        }
        else{
            k =query1.value(1).toInt() - query1.value(0).toInt();
        }
        queryU.bindValue(":q", k);
        queryU.bindValue(":id", queryI.value(0).toInt());
        queryU.exec();
    }
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT Nom.name, Nom.code, Nom.ed, Mat.quantity_purchase FROM nomenclature AS Nom, material AS Mat WHERE Nom.id = Mat.material_id");
    ui->tableView->setModel(model);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    model->setHeaderData(0, Qt::Horizontal, "Сырье");
    model->setHeaderData(1, Qt::Horizontal, "Код ОКПД2");
    model->setHeaderData(2, Qt::Horizontal, "Ед. изм.");
    model->setHeaderData(3, Qt::Horizontal, "Кол-во закупаемого сырья");
    ui->tableView->resizeColumnsToContents();
}


void Z1::on_action_triggered()
{
    vd1 = new VD1();
    vd1->show();
    vd1->VedNalS();
}


void Z1::on_action_2_triggered()
{
    vd1 = new VD1();
    vd1->show();
    vd1->VedPotS();
}

