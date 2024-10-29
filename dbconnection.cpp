#include "dbconnection.h"
#include <QSqlError>
#include <QMessageBox>

QSqlDatabase dbconnection::db;
bool dbconnection::initialized = false;
QString dbconnection::username;
QString dbconnection::password;
QString dbconnection::adress;
int dbconnection::port;

void dbconnection::initializeConnection()
{
    if(!initialized)
    {
        db = QSqlDatabase::addDatabase("QMYSQL");

        db.setHostName(adress);
        db.setPort(port);
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

void dbconnection::setadress(QString adr){
    if(adr.isEmpty()) adress = "localhost";
    else adress = adr;
}

void dbconnection::setport(QString pt)
{
    if(pt.isEmpty()) port = 3306;
    else port = pt.toInt();
}

