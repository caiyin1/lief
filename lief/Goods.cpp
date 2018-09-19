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
* 设置货物编号
*/
void Goods::setGoodsId(int id)
{
    m_nId = id;
}


/**
* 获取货物编号
*/
int Goods::getGoodsId()
{
    return m_nId;
}


/**
* 设置货物名称
*/
void Goods::setGoodsName(string name)
{
    m_strName = name;
}


/**
* 获取货物名称
*/
string Goods::getGoodsName()
{
    return m_strName;
}


/**
* 设置货物数量
*/
void Goods::setGoodsQualtity(int qualtity)
{
    m_nQualtity = qualtity;
}


/**
* 获取货物数量
*/
int Goods::getGoodsQualtity()
{
    return m_nQualtity;
}


/**
* 设置货物成本价
*/
void Goods::setGoodsPurchasePrice(int price)
{
    m_nPurchasePrice = price;
}


/**
* 获取货物成本价
*/
int Goods::getGoodsPurchasePrice()
{
    return m_nPurchasePrice;
}


/**
* 设置货物售价
*/
void Goods::setGoodsPrice(int price)
{
    m_nPrice = price;
}


/**
* 获取货物售价
*/
int Goods::getGoodsPrice()
{
    return m_nPrice;
}


/**
* 设置货物最小售价
*/
void Goods::setGoodsMinPrice(int price)
{
    m_nMinPrice = price;
}


/**
* 获取货物最小售价
*/
int Goods::getGoodsMinPrice()
{
    return m_nMinPrice;
}


/**
* 设置货物最大售价
*/
void Goods::setGoodsMaxPrice(int price)
{
    m_nMaxPrice = price;
}


/**
* 获取货物最大售价
*/
int Goods::getGoodsMaxPrice()
{
    return m_nMaxPrice;
}








