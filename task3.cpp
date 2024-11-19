#include "task3.h"
#include "ui_z3.h"

Z3::Z3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Z3)
{
    ui->setupUi(this);
}

Z3::~Z3()
{
    delete ui;
}

void Z3::on_pushButton_clicked()
{
    this->close();
    emit BackToMain();
}


void Z3::on_pushButton_2_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT DeL.id,Sup.name,Nom.name,Nom.code,Nom.ed,Con.quantity,PrL.price,DaP.cost,Con.date FROM delivery_list AS DeL,suppliers AS Sup,nomenclature AS Nom,price_list AS PrL,contract AS Con,( SELECT con_1.id AS idc , con_1.quantity * pl.price AS cost FROM contract con_1,price_list pl WHERE pl.supplier_id = con_1.supplier_id AND con_1.material_id = pl.material_id) dap WHERE DeL.status is NULL AND con.supplier_id = Sup.id AND con.material_id = Nom.id AND PrL.supplier_id = con.supplier_id AND con.material_id = PrL.material_id AND DeL.contract_id = Con.id AND DaP.idc = con.id");
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
    model->setHeaderData(6, Qt::Horizontal, "Цена за 1 ед.");
    model->setHeaderData(7, Qt::Horizontal, "Цена поставки");
    model->setHeaderData(8, Qt::Horizontal, "Дата поставки");
    ui->tableView->resizeColumnsToContents();
}


void Z3::on_action_triggered()
{
    vd1 = new VD1();
    vd1->show();
    vd1->ResPost();
}


void Z3::on_action_2_triggered()
{
    VD2 = new vd2();
    VD2->show();
    VD2->ResCen();
}


void Z3::on_action_3_triggered()
{
    vd1 = new VD1();
    vd1->show();
    vd1->VedZak();
}

