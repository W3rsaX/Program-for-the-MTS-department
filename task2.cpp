#include "task2.h"
#include "ui_z2.h"

Z2::Z2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Z2)
{
    ui->setupUi(this);
}

Z2::~Z2()
{
    delete ui;
}

void Z2::on_pushButton_clicked()
{
    this->close();
    emit BackToMain();
}


void Z2::on_pushButton_2_clicked()
{


    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT Sup.name, Nom.name, Con.quantity FROM nomenclature AS Nom, suppliers AS Sup, material AS mat, contract AS Con WHERE Nom.id = Mat.material_id AND con.material_id = nom.id AND con.supplier_id = sup.id  ");
    ui->tableView->setModel(model);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    model->setHeaderData(0, Qt::Horizontal, "Поставщик");
    model->setHeaderData(1, Qt::Horizontal, "Сырье");
    model->setHeaderData(2, Qt::Horizontal, "Кол-во заказываемого");
    ui->tableView->resizeColumnsToContents();
}



void Z2::on_action_triggered()
{
    vd1 = new VD1();
    vd1->show();
    vd1->VedPotZ();
}


void Z2::on_action_2_triggered()
{
    vd1 = new VD1();
    vd1->show();
    vd1->ResPost();
}


void Z2::on_action_3_triggered()
{
    VD2 = new vd2();
    VD2->show();
    VD2->ResCen();
}

