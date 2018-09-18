#ifndef PACKAGE_H
#define PACKAGE_H
#include"Goods.h"
#include"Player.h"


#include<iostream>
#include<vector>
using namespace std;

class Package
{
    public:
        Package();
        virtual ~Package();
        void setCurReserve(int cur){m_curReserve = cur;}  //设置当前库存容量
	    int getCurReserve(){return m_curReserve;}         //获取当前库存容量
	    void setMaxReserve(int max){m_maxReserve = max;} //设置最大库存容量
	    int getMaxReserve(){return m_maxReserve;}         //获取最大库存容量
        bool insertGoods(Goods *goods)//增加货物（判断背包容量，如果小于背包容量则增加反之不可增加）
        {
           if(Goods.getGoodsQualtity() <= Package.m_maxReserve || Goods.getGoodsQualtity() >=0)
           {
                vector<Goods*>::iterator it = m_vecGoods.begin();
                for(;it != m_vecGoods.end();it++)
                {
                    if(it.getGoodsName() == Goods.getGoodsName()
                       int aamount = Goods.getGoodsQualtity();
                       break;
                }
                int aamount1 = vector->Goods->getGoodsQualtity();
                vector->Goods->setGoodsQualtity() = aamount+aamount1;
           }
           else
            return 0;
        }
        bool deleteGoods(Goods *goods)//减少货物（减少背包货物，如果背包没有物品则不减少）
        {
            if(Goods.getGoodsQualtity()> 0 || Goods.getGoodsQualtity() <= Package.m_maxReserve )
            {

                vector<Goods*>::iterator it = m_vecGoods.begin();
                for(;it != m_vecGoods.end();it++)
                {
                    if(it.getGoodsName() == Goods.getGoodsName())
                        int num = Goods.getGoodsQualtity();
                        break;
                }

                int num2 = vector->Goods->getGoodsQualtity();
                vector->Goods->setQualtity() = num2 - num;
            }
            else
                return 0;

        }

        vector<Goods*>*getGoodsList(){ return &m_vecGoods; }  //获取个人仓库内的货物列表


    protected:

    private:
        	int m_curReserve; //- 当前库存容量
            int m_maxReserve;  //- 最大库存容量
            vector<Goods*>m_vecGoods;  // - 仓库内的货物集合

};

#endif // PACKAGE_H
