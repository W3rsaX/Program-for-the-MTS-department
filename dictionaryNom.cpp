#include "dictionaryNom.h"
#include "ui_s1.h"


S1::S1(QWidget *parent) :
    QDialog(parent),
    dbcontrol (new db),
    ui(new Ui::S1),
    model(new QSqlTableModel)
{
    ui->setupUi(this);
}

S1::~S1()
{
    delete ui;
}

void S1::Start()
{
    model->setTable("nomenclature");
    model->select();
    ui->tableView->setModel(model);
    ui->tableView->verticalHeader()->setVisible(false);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    model->setHeaderData(0, Qt::Horizontal, "Код");
    model->setHeaderData(1, Qt::Horizontal, "Сырье");
    model->setHeaderData(2, Qt::Horizontal, "Код ОКПД2");
    model->setHeaderData(3, Qt::Horizontal, "Ед. изм.");
    model->sort(0,Qt::AscendingOrder);
    ui->tableView->selectRow(0);
    ui->tableView->resizeColumnsToContents();;
    ui->lineEdit->setValidator(new QIntValidator);
    QModelIndex index = ui->tableView->currentIndex();
    ui->lineEdit->setText(model->data(index).toString());
    ui->lineEdit_2->setText(model->data(index.siblingAtColumn(1)).toString());
    ui->lineEdit_3->setText(model->data(index.siblingAtColumn(2)).toString());
    ui->lineEdit_4->setText(model->data(index.siblingAtColumn(3)).toString());
}

void S1::on_pushButton_2_clicked()
{
    this->close();
}


void S1::on_tableView_clicked(const QModelIndex &index)
{
    ui->lineEdit->setText(model->data(index.siblingAtColumn(0)).toString());
    ui->lineEdit_2->setText(model->data(index.siblingAtColumn(1)).toString());
    ui->lineEdit_3->setText(model->data(index.siblingAtColumn(2)).toString());
    ui->lineEdit_4->setText(model->data(index.siblingAtColumn(3)).toString());
}


void S1::on_pushButton_3_clicked()
{
    model->insertRow(model->rowCount());
    ui->tableView->setModel(model);
    ui->tableView->selectRow(model->rowCount()-1);
    QModelIndex index = ui->tableView->currentIndex();
    QString s;
    s =  QStringLiteral("%1").arg(model->rowCount());
    ui->lineEdit->setText(s);
    ui->lineEdit_2->setText(model->data(index.siblingAtColumn(1)).toString());
    ui->lineEdit_3->setText(model->data(index.siblingAtColumn(2)).toString());
    ui->lineEdit_4->setText(model->data(index.siblingAtColumn(3)).toString());
}


void S1::on_pushButton_clicked()
{
    QSqlQuery query;
    QString save="INSERT INTO nomenclature (id, name, code, ed) VALUES (:id, :name, :code, :ed)";
    query.prepare(save);
    query.bindValue(":id", ui->lineEdit->text());
    query.bindValue(":name", ui->lineEdit_2->text());
    query.bindValue(":code", ui->lineEdit_3->text());
    query.bindValue(":ed", ui->lineEdit_4->text());
    query.exec();
    model->select();
    ui->tableView->setModel(model);
}


void S1::on_pushButton_4_clicked()
{
    QSqlQuery query;
    QString del="DELETE FROM nomenclature WHERE id = :id";
    query.prepare(del);
    QModelIndex index = ui->tableView->currentIndex();
    query.bindValue(":id", model->data(index.siblingAtColumn(0)));
    query.exec();
    model->select();
    ui->tableView->setModel(model);
    ui->tableView->selectRow(0);
}

