#ifndef STOLEN_H_INCLUDED
#define STOLEN_H_INCLUDED

#include "Event.h"
#include<string>

using namespace std;

class Stolen : public Event
{
public:
	Stolen(){}

	virtual ~Stolen() {}

	virtual void setLoseMoney(int money) {
		this->m_loseMoney = money;
	}//设置玩家丢失的金钱

	virtual int getLoseMoney() {
		return m_loseMoney;
	}// 获取玩家丢失的金钱

private:
    int m_loseMoney;
};

#endif // STOLEN_H_INCLUDED
