#include "dictionaryClaim.h"
#include "ui_s2.h"

S2::S2(QWidget *parent) :
    QDialog(parent),
    dbcontrol (new db),
    ui(new Ui::S2),
    model(new QSqlTableModel)
{
    ui->setupUi(this);
}

S2::~S2()
{
    delete ui;
}

void S2::Start()
{
    model->setTable("claim");
    model->select();
    ui->tableView->setModel(model);
    ui->tableView->verticalHeader()->setVisible(false);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    model->setHeaderData(0, Qt::Horizontal, "Код");
    model->setHeaderData(1, Qt::Horizontal, "Претензия");
    model->sort(0,Qt::AscendingOrder);
    ui->tableView->selectRow(0);
    ui->tableView->resizeColumnsToContents();
    ui->lineEdit->setValidator(new QIntValidator);
    QModelIndex index = ui->tableView->currentIndex();
    ui->lineEdit->setText(model->data(index).toString());
    ui->lineEdit_2->setText(model->data(index.siblingAtColumn(1)).toString());
}

void S2::on_pushButton_5_clicked()
{
    this->close();
}


void S2::on_pushButton_4_clicked()
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


void S2::on_tableView_clicked(const QModelIndex &index)
{
    ui->lineEdit->setText(model->data(index.siblingAtColumn(0)).toString());
    ui->lineEdit_2->setText(model->data(index.siblingAtColumn(1)).toString());
}


void S2::on_pushButton_7_clicked()
{
    QSqlQuery query;
    QString del="DELETE FROM claim WHERE id = :id";
    query.prepare(del);
    QModelIndex index = ui->tableView->currentIndex();
    query.bindValue(":id", model->data(index.siblingAtColumn(0)));
    query.exec();
    model->select();
    ui->tableView->setModel(model);
    ui->tableView->selectRow(0);
}


void S2::on_pushButton_6_clicked()
{
    QSqlQuery query;
    QString save="INSERT INTO claim (id, claim) VALUES (:id, :claim)";
    query.prepare(save);
    query.bindValue(":id", ui->lineEdit->text());
    query.bindValue(":claim", ui->lineEdit_2->text());
    query.exec();
    model->select();
    ui->tableView->setModel(model);
}

