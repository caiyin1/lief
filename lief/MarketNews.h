#ifndef MARKETNEWS_H_INCLUDED
#define MARKETNEWS_H_INCLUDED

#include "Event.h"
#include<string>
#include<cstdlib>

using namespace std;

class MarketNews : public Event
{
public:
	MarketNews(){}

	virtual ~MarketNews() {}

	virtual void setGoodsId(int id) {
		m_goodsId = id;
	}//设置受影响的货物ID

	virtual int	getGoodsId() {
		return m_goodsId;
	}//获取受影响的货物

	virtual void setGoodsAmount(int amount) {
		m_goodsAmount = amount;
	}// 设置受影响的货物数量

	virtual int	getGoodsAmount() {
		return m_goodsAmount;
	}//获取受影响的货物数量

	virtual void setGoodsPrice(int price) {
		m_goodsPrice = price;
	}// 设置受影响的货物价格

	virtual int getGoodsPrice() {
		return m_goodsPrice;
	}	//货物受影响的货物价格

private:
    int m_goodsId;
    int m_goodsPrice;
    int m_goodsAmount;
};

#endif // MARKETNEWS_H_INCLUDED
