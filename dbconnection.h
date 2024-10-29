#ifndef DBCONNECTION_H
#define DBCONNECTION_H

#include <QSqlDatabase>

class dbconnection
{
public:
    static QSqlDatabase& getConnection();
    static bool tryConnection();

    static void setusername(QString un);

    static void setpassword(QString pd);

    static void setadress(QString adr);

    static void setport(QString pt);

private:
    dbconnection();
    static QSqlDatabase db;

    static bool initialized;

    static void initializeConnection();

    static QString username;
    static QString password;
    static QString adress;
    static int port;
};

#endif // DBCONNECTION_H
