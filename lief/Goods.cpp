#include "Goods.h"

Goods::Goods()
{
    //ctor
}

Goods::~Goods()
{
    //dtor
}

/**
* ���û�����
*/
void Goods::setGoodsId(int id)
{
    m_nId = id;
}


/**
* ��ȡ������
*/
int Goods::getGoodsId()
{
    return m_nId;
}


/**
* ���û�������
*/
void Goods::setGoodsName(string name)
{
    m_strName = name;
}


/**
* ��ȡ��������
*/
string Goods::getGoodsName()
{
    return m_strName;
}


/**
* ���û�������
*/
void Goods::setGoodsQualtity(int qualtity)
{
    m_nQualtity = qualtity;
}


/**
* ��ȡ��������
*/
int Goods::getGoodsQualtity()
{
    return m_nQualtity;
}


/**
* ���û���ɱ���
*/
void Goods::setGoodsPurchasePrice(int price)
{
    m_nPurchasePrice = price;
}


/**
* ��ȡ����ɱ���
*/
int Goods::getGoodsPurchasePrice()
{
    return m_nPurchasePrice;
}


/**
* ���û����ۼ�
*/
void Goods::setGoodsPrice(int price)
{
    m_nPrice = price;
}


/**
* ��ȡ�����ۼ�
*/
int Goods::getGoodsPrice()
{
    return m_nPrice;
}


/**
* ���û�����С�ۼ�
*/
void Goods::setGoodsMinPrice(int price)
{
    m_nMinPrice = price;
}


/**
* ��ȡ������С�ۼ�
*/
int Goods::getGoodsMinPrice()
{
    return m_nMinPrice;
}


/**
* ���û�������ۼ�
*/
void Goods::setGoodsMaxPrice(int price)
{
    m_nMaxPrice = price;
}


/**
* ��ȡ��������ۼ�
*/
int Goods::getGoodsMaxPrice()
{
    return m_nMaxPrice;
}








