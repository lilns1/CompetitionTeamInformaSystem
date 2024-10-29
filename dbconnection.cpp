#include "dbconnection.h"
#include <QSqlError>
#include <QMessageBox>

QSqlDatabase dbconnection::db;
bool dbconnection::initialized = false;
QString dbconnection::username = "";
QString dbconnection::password = "";

void dbconnection::initializeConnection()
{
    if(!initialized)
    {
        db = QSqlDatabase::addDatabase("QMYSQL");

        db.setHostName("localhost");
        db.setPort(3306);
        db.setDatabaseName("competition");
        db.setUserName(username);
        db.setPassword(password);

        if(!db.open()){
            // QMessageBox::critical(NULL, "提示", "连接数据库错误!", QMessageBox::Ok);
        }
        else
        {
            // QMessageBox::information(NULL, "提示", "连接数据库成功", QMessageBox::Ok);
            initialized = true;
        }
    }
}

QSqlDatabase& dbconnection::getConnection()
{
    return db;
}

bool dbconnection::tryConnection()
{
    if(!initialized || !db.isOpen()) initializeConnection();
    return initialized && db.isOpen();
}

void dbconnection::setusername(QString un)
{
    username = un;
}

void dbconnection::setpassword(QString pd)
{
    password = pd;
}


