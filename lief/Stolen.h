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
	}//�����¼�����
	virtual string getEventDesc() {
		return m_description[randomnumb()];
	}//��ȡ�¼�����

	virtual void setLoseMoney(int money) {
		this->m_loseMoney = money;
	}//������Ҷ�ʧ�Ľ�Ǯ

	virtual int getLoseMoney() {
		return m_loseMoney;
	}// ��ȡ��Ҷ�ʧ�Ľ�Ǯ
};


