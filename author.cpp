#include "author.h"
#include "ui_author.h"

Author::Author(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Author)
{
    ui->setupUi(this);
}

Author::~Author()
{
    delete ui;
}

void Author::on_pushButton_clicked()
{
    this->close();
}

