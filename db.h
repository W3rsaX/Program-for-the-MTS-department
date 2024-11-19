#ifndef DB_H
#define DB_H
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QObject>
#include <QStringList>
#include <QDebug>
#include <QSqlError>
#include <QString>

struct dbdata{
    QString HN;
    int Port;
    QString DBName;
    QString UName;
    QString Psw;
};

class db
{
    QSqlTableModel *model;
public:
    void Create();
    db();
    bool connect();
    QSqlDatabase dbcon;
    QSqlTableModel *getModelS1();

};

#endif // DB_H
