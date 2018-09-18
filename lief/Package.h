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
        void setCurReserve(int cur){m_curReserve = cur;}  //���õ�ǰ�������
	    int getCurReserve(){return m_curReserve;}         //��ȡ��ǰ�������
	    void setMaxReserve(int max){m_maxReserve = max;} //�������������
	    int getMaxReserve(){return m_maxReserve;}         //��ȡ���������
        bool insertGoods(Goods *goods)//���ӻ���жϱ������������С�ڱ������������ӷ�֮�������ӣ�
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
        bool deleteGoods(Goods *goods)//���ٻ�����ٱ�������������û����Ʒ�򲻼��٣�
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

        vector<Goods*>*getGoodsList(){ return &m_vecGoods; }  //��ȡ���˲ֿ��ڵĻ����б�


    protected:

    private:
        	int m_curReserve; //- ��ǰ�������
            int m_maxReserve;  //- ���������
            vector<Goods*>m_vecGoods;  // - �ֿ��ڵĻ��Ｏ��

};

#endif // PACKAGE_H
