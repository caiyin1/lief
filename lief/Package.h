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
        int m_curReserve;               // - ��ǰ�������
        int m_maxReserve;               // - ���������
        vector<Goods*>m_vecGoods;       // - �ֿ��ڵĻ��Ｏ��
};

#endif // PACKAGE_H
