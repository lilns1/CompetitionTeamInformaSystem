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

private:
    dbconnection();
    static QSqlDatabase db;

    static bool initialized;

    static void initializeConnection();

    static QString username;
    static QString password;
    static int adress;
};

#endif // DBCONNECTION_H
