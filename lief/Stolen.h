#pragma once
#include "Event.h"
#include<string>
using namespace std;
class Stolen :
	public Event
{
public:
	Stolen(){
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

	virtual void setLoseMoney(int money) {
		this->m_loseMoney = money;
	}//设置玩家丢失的金钱

	virtual int getLoseMoney() {
		return m_loseMoney;
	}// 获取玩家丢失的金钱
};


