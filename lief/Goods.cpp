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
    m_id = id;
}


/**
* ��ȡ������
*/
int Goods::getGoodsId()
{
    return m_id;
}


/**
* ���û�������
*/
void Goods::setGoodsName(string name)
{
    m_name = name;
}


/**
* ��ȡ��������
*/
string Goods::getGoodsName()
{
    return m_name;
}


/**
* ���û�������
*/
void Goods::setGoodsQualtity(int qualtity)
{
    m_qualtity = qualtity;
}


/**
* ��ȡ��������
*/
int Goods::getGoodsQualtity()
{
    return m_qualtity;
}


/**
* ���û���ɱ���
*/
void Goods::setGoodsPurchasePrice(int price)
{
    m_purchasePrice = price;
}


/**
* ��ȡ����ɱ���
*/
int Goods::getGoodsPurchasePrice()
{
    return m_purchasePrice;
}


/**
* ���û����ۼ�
*/
void Goods::setGoodsPrice(int price)
{
    m_price = price;
}


/**
* ��ȡ�����ۼ�
*/
int Goods::getGoodsPrice()
{
    return m_price;
}


/**
* ���û�����С�ۼ�
*/
void Goods::setGoodsMinPrice(int price)
{
    m_minPrice = price;
}


/**
* ��ȡ������С�ۼ�
*/
int Goods::getGoodsMinPrice()
{
    return m_minPrice;
}


/**
* ���û�������ۼ�
*/
void Goods::setGoodsMaxPrice(int price)
{
    m_maxPrice = price;
}


/**
* ��ȡ��������ۼ�
*/
int Goods::getGoodsMaxPrice()
{
    return m_maxPrice;
}








