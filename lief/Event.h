#pragma once
#include<ctime>
#include<string>
#include<cstdlib>
using namespace std;
class Event
{
protected:
	string m_description[6];//事件描述
	int  m_goodsId;// – 受影响的货物Id
	int m_goodsAmount;// 受影响的货物数量
	int m_goodsPrice;// 受影响的货物价格
	int m_playerHealth;// 玩家减少的健康值
	int m_loseMoney;// 玩家丢失的金钱
public:
	int randomnumb() {
		srand((int)time(NULL));
		return rand() % 6;
	}//随机函数
	virtual void setEventDesc() {}//设置事件描述
	virtual string getEventDesc() {
		return NULL;
	}//获取事件描述
	virtual 	void	setGoodsId(int id) {
	}//设置受影响的货物ID
	virtual 	int	   getGoodsId() {
		return 0;
	}//获取受影响的货物
	virtual 	void setGoodsAmount(int amount) {
	}// 设置受影响的货物数量

	virtual 	int	 getGoodsAmount() {
		return 0;
	}//获取受影响的货物数量

	virtual void setGoodsPrice(int price) {
	}// 设置受影响的货物价格

	virtual int getGoodsPrice() {
		return 0;
	}//货物受影响的货物价格

	virtual void setPlayerHealth(int health) {
	}//设置玩家减少的健康值

	virtual int	 getPlayerHealth() {
		return 0;
	}//获取玩家减少的健康值

	virtual void setLoseMoney(int money) {}//设置玩家丢失的金钱

	virtual int getLoseMoney() {// 获取玩家丢失的金钱
		return 0;
	}
	Event(){}
};