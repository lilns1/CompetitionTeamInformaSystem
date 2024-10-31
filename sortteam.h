#ifndef SORTTEAM_H
#define SORTTEAM_H

#include <QString>
#include <vector>
#include "mydata.h"
#include <QStandardItemModel>
#include <functional>

class SortTeam
{
public:
    SortTeam(std::vector<mydata> &data);

    QStandardItemModel* getmodel();
    std::vector<mydata> getvector();

    void ASCsort(int index);

    void DESCsort(int index);

private:
    std::vector<mydata> v;

    QStandardItemModel *m;

    void quicksort(int l, int r, std::function<bool(const mydata &a, const mydata &b)> cmp);

    int patition(int l, int r, std::function<bool(const mydata &a, const mydata &b)> cmp);

};

// bool cmpid(const mydata &a, const mydata &b);
// bool cmpwork(const mydata &a, const mydata &b);
// bool cmpschool(const mydata &a, const mydata &b);
// bool cmpevent(const mydata &a, const mydata &b);
// bool cmppaticipants(const mydata &a, const mydata &b);
// bool cmpinstructor(const mydata &a, const mydata &b);

#endif // SORTTEAM_H
