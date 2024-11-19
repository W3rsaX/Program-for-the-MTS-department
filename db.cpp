#include "db.h"

dbdata DBdata;


void db::Create()
{
    DBdata.HN.append("localhost");
    DBdata.Port = 5432;
    DBdata.DBName = "MTS";
    DBdata.UName = "postgres";
    DBdata.Psw = "Egor29122002";
}

db::db()
{

}

bool db::connect()
{
    QSqlDatabase dbcon = QSqlDatabase::addDatabase("QPSQL");
    dbcon.setHostName(DBdata.HN);
    dbcon.setPort(DBdata.Port);
    dbcon.setDatabaseName(DBdata.DBName);
    dbcon.setUserName(DBdata.UName);
    dbcon.setPassword(DBdata.Psw);
    if (!dbcon.open()) {
        qDebug()<< dbcon.lastError().text();
        return false;
    }
    return true;
}

QSqlTableModel *db::getModelS1()
{
    return model;
}



/*QSqlDatabase dbcon = QSqlDatabase::addDatabase("QPSQL");
dbcon.setHostName("localhost");
dbcon.setPort(5432);
dbcon.setDatabaseName("MTS");
dbcon.setUserName("postgres");
dbcon.setPassword("Egor29122002");*/
