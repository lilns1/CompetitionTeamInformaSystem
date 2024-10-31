#include "mydata.h"
#include <QStandardItem>

void mydata::addToModel(QStandardItemModel *model, const mydata &data) {
    QList<QStandardItem*> rowItems;
    rowItems << new QStandardItem(QString::number(data.team_id));
    rowItems << new QStandardItem(data.work_name);
    rowItems << new QStandardItem(data.school_name);
    rowItems << new QStandardItem(data.event_category);
    rowItems << new QStandardItem(data.participants);
    rowItems << new QStandardItem(data.instructor);
    model->appendRow(rowItems);
}

bool cmpid(const mydata &a, const mydata &b) {
    return a.team_id < b.team_id;
}

bool cmpwork(const mydata &a, const mydata &b) {
    return a.work_name < b.work_name;
}

bool cmpschool(const mydata &a, const mydata &b) {
    return a.school_name < b.school_name;
}

bool cmpevent(const mydata &a, const mydata &b) {
    return a.event_category < b.event_category;
}

bool cmppaticipants(const mydata &a, const mydata &b) {
    return a.participants < b.participants;
}

bool cmpinstructor(const mydata &a, const mydata &b) {
    return a.instructor < b.instructor;
}
