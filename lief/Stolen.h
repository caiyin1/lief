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
	}//������Ҷ�ʧ�Ľ�Ǯ

	virtual int getLoseMoney() {
		return m_loseMoney;
	}// ��ȡ��Ҷ�ʧ�Ľ�Ǯ

private:
    int m_loseMoney;
};

#endif // STOLEN_H_INCLUDED
