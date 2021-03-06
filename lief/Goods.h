#ifndef GOODS_H
#define GOODS_H

#include <string>

using namespace std;

class Goods
{
    public:
        Goods();
        virtual ~Goods();

        /**
        * 设置货物编号
        */
        void setGoodsId(int id);
        /**
        * 获取货物编号
        */
        int getGoodsId();


        /**
        * 设置货物名称
        */
        void setGoodsName(string name);
        /**
        * 获取货物名称
        */
        string getGoodsName();


        /**
        * 设置货物数量
        */
        void setGoodsQualtity(int qualtity);
        /**
        * 获取货物数量
        */
        int getGoodsQualtity();


        /**
        * 设置货物成本价
        */
        void setGoodsPurchasePrice(int price);
        /**
        * 获取货物成本价
        */
        int getGoodsPurchasePrice();


        /**
        * 设置货物售价
        */
        void setGoodsPrice(int price);
        /**
        * 获取货物售价
        */
        int getGoodsPrice();


        /**
        * 设置货物最小售价
        */
        void setGoodsMinPrice(int price);
        /**
        * 获取货物最小售价
        */
        int getGoodsMinPrice();


        /**
        * 设置货物最大售价
        */
        void setGoodsMaxPrice(int price);
        /**
        * 获取货物最大售价
        */
        int getGoodsMaxPrice();

    private:
        int m_nId;
        string m_strName;
        int m_nQualtity;
        int m_nPurchasePrice;
        int m_nPrice;
        int m_nMinPrice;
        int m_nMaxPrice;
};

#endif // GOODS_H
