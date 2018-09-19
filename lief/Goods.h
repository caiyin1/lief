#ifndef GOODS_H
#define GOODS_H

#include <string>

using namespace std;

class Goods
{
    public:
        Goods();
        virtual ~Goods();
		Goods(int nId, int m_nPrice, string strName)
		{
			this->m_nId = nId;
			this->m_nPrice = nId;
			this->m_strName = strName;
		};
		Goods(int nId, int m_nPrice, string strName, int nQualtity, int nPurchasePrice, int nMinPrice , int nMaxPrice)
		{
			this->m_nId = nId;
			this->m_nPrice = nId;
			this->m_strName = strName;
			this->m_nQualtity = nQualtity;
			this->m_nPurchasePrice = nPurchasePrice;
			this->m_nMaxPrice = nMaxPrice;
			this->m_nMinPrice = nMinPrice;
		};

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
        int m_nId;
        string m_strName;
        int m_nQualtity;
        int m_nPurchasePrice;
        int m_nPrice;
        int m_nMinPrice;
        int m_nMaxPrice;
};

#endif // GOODS_H
