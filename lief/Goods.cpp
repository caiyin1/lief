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
    m_id = id;
}


/**
* 获取货物编号
*/
int Goods::getGoodsId()
{
    return m_id;
}


/**
* 设置货物名称
*/
void Goods::setGoodsName(string name)
{
    m_name = name;
}


/**
* 获取货物名称
*/
string Goods::getGoodsName()
{
    return m_name;
}


/**
* 设置货物数量
*/
void Goods::setGoodsQualtity(int qualtity)
{
    m_qualtity = qualtity;
}


/**
* 获取货物数量
*/
int Goods::getGoodsQualtity()
{
    return m_qualtity;
}


/**
* 设置货物成本价
*/
void Goods::setGoodsPurchasePrice(int price)
{
    m_purchasePrice = price;
}


/**
* 获取货物成本价
*/
int Goods::getGoodsPurchasePrice()
{
    return m_purchasePrice;
}


/**
* 设置货物售价
*/
void Goods::setGoodsPrice(int price)
{
    m_price = price;
}


/**
* 获取货物售价
*/
int Goods::getGoodsPrice()
{
    return m_price;
}


/**
* 设置货物最小售价
*/
void Goods::setGoodsMinPrice(int price)
{
    m_minPrice = price;
}


/**
* 获取货物最小售价
*/
int Goods::getGoodsMinPrice()
{
    return m_minPrice;
}


/**
* 设置货物最大售价
*/
void Goods::setGoodsMaxPrice(int price)
{
    m_maxPrice = price;
}


/**
* 获取货物最大售价
*/
int Goods::getGoodsMaxPrice()
{
    return m_maxPrice;
}








