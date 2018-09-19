#ifndef PACKAGE_H
#define PACKAGE_H

#include"Goods.h"
#include<iostream>
#include<vector>

using namespace std;

class Package
{
    public:
        Package();
        virtual ~Package();

        void setCurReserve(int cur);

        int getCurReserve();

        void setMaxReserve(int max);

        int getMaxReserve();

        bool insertGoods(Goods *goods);

        bool deleteGoods(Goods *goods);

        vector<Goods*> getGoodsList();

    private:
        int m_curReserve;               // - 当前库存容量
        int m_maxReserve;               // - 最大库存容量
        vector<Goods*>m_vecGoods;       // - 仓库内的货物集合
};

#endif // PACKAGE_H
