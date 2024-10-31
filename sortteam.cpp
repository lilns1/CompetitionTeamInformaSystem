#include "sortteam.h"
#include <map>
#include <algorithm>

SortTeam::SortTeam(std::vector<mydata> &data) : v(data){
    this->m = new QStandardItemModel();

}

QStandardItemModel* SortTeam::getmodel()
{
    return m;
}

std::vector<mydata> SortTeam::getvector()
{
    return v;
}

std::map<int, std::function<bool(const mydata &a, const mydata &b)>> mp = {
    {0, cmpid},
    {1, cmpwork},
    {2, cmpschool},
    {3, cmpevent},
    {4, cmppaticipants},
    {5, cmpinstructor}
};

int SortTeam::patition(int l, int r, std::function<bool(const mydata &a, const mydata &b)> cmp)
{
    mydata pivot = v[r];
    int i = l, j = r;
    while (i < j)
    {
        while (i < j && !cmp(pivot, v[i])) i ++;

        while (i < j && !cmp(v[j], pivot)) j --;

        if (i < j) std::swap(v[i], v[j]);
        else std::swap(v[i], v[r]);
    }

    return i;
}

void SortTeam::quicksort(int l, int r, std::function<bool(const mydata &a, const mydata &b)> cmp)
{
    if (l < r){
        int mid = patition(l, r, cmp);
        quicksort(l, mid - 1, cmp);
        quicksort(mid + 1, r, cmp);
    }
}

void SortTeam::ASCsort(int index)
{
    quicksort(0, v.size() - 1, mp[index]);

    m->clear();
    for (size_t i = 0; i < v.size(); i ++){
        mydata::addToModel(m, v[i]);
    }
}

void SortTeam::DESCsort(int index)
{
    quicksort(0, v.size() - 1, mp[index]);
    std::reverse(v.begin(), v.end());

    m->clear();
    for (size_t i = 0; i < v.size(); i ++){
        mydata::addToModel(m, v[i]);
    }
}

