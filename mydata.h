#ifndef MYDATA_H
#define MYDATA_H

#include <QString>
#include <QStandardItemModel>

struct mydata {
    int team_id;
    QString work_name;
    QString school_name;
    QString event_category;
    QString participants;
    QString instructor;

    static void addToModel(QStandardItemModel *model, const mydata &data);
};

// 只声明比较函数
bool cmpid(const mydata &a, const mydata &b);
bool cmpwork(const mydata &a, const mydata &b);
bool cmpschool(const mydata &a, const mydata &b);
bool cmpevent(const mydata &a, const mydata &b);
bool cmppaticipants(const mydata &a, const mydata &b);
bool cmpinstructor(const mydata &a, const mydata &b);

#endif // MYDATA_H
