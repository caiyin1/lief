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
        * ���û�����
        */
        void setGoodsId(int id);
        /**
        * ��ȡ������
        */
        int getGoodsId();


        /**
        * ���û�������
        */
        void setGoodsName(string name);
        /**
        * ��ȡ��������
        */
        string getGoodsName();


        /**
        * ���û�������
        */
        void setGoodsQualtity(int qualtity);
        /**
        * ��ȡ��������
        */
        int getGoodsQualtity();


        /**
        * ���û���ɱ���
        */
        void setGoodsPurchasePrice(int price);
        /**
        * ��ȡ����ɱ���
        */
        int getGoodsPurchasePrice();


        /**
        * ���û����ۼ�
        */
        void setGoodsPrice(int price);
        /**
        * ��ȡ�����ۼ�
        */
        int getGoodsPrice();


        /**
        * ���û�����С�ۼ�
        */
        void setGoodsMinPrice(int price);
        /**
        * ��ȡ������С�ۼ�
        */
        int getGoodsMinPrice();


        /**
        * ���û�������ۼ�
        */
        void setGoodsMaxPrice(int price);
        /**
        * ��ȡ��������ۼ�
        */
        int getGoodsMaxPrice();


    protected:

    private:
        int m_id;
        string m_name;
        int m_qualtity;
        int m_purchasePrice;
        int m_price;
        int m_minPrice;
        int m_maxPrice;
};

#endif // GOODS_H
