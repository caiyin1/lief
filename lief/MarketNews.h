#pragma once
#include "Event.h"
#include<string>
#include<cstdlib>
using namespace std;
class MarketNews :
	public Event
{
public:
	MarketNews(){
		setEventDesc();
	}
	virtual void setEventDesc() {
		m_description[0] = "1";
		m_description[1] = "2";
		m_description[2] = "3";
		m_description[3] = "4";
		m_description[4] = "5";
		m_description[5] = "6";
	}//设置事件描述
	virtual string getEventDesc() {
		return m_description[randomnumb()];
	}//获取事件描述
	virtual void	setGoodsId(int id) {
		m_goodsId = id;
	}//设置受影响的货物ID
	virtual int	   getGoodsId() {
		return m_goodsId;
	}//获取受影响的货物
	virtual void setGoodsAmount(int amount) {
		m_goodsAmount = amount;
	}// 设置受影响的货物数量
	virtual int	 getGoodsAmount() {
		return m_goodsAmount;
	}//获取受影响的货物数量
	virtual void setGoodsPrice(int price) {
		m_goodsPrice = price;
	}// 设置受影响的货物价格
	virtual int getGoodsPrice() {
		return m_goodsPrice;
	}	//货物受影响的货物价格
};
