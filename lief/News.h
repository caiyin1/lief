#pragma once
#include "Event.h"
#include<string>
#include<iostream>
#include<cstdlib>
using namespace std;
class News :public Event
{
public:
	News(){
		setEventDesc();
	}
	virtual void setEventDesc() {
		m_description[0] = "1";
		m_description[1] = "2";
		m_description[2] = "3";
		m_description[3] = "4";
		m_description[4] = "5";
		m_description[5] = "6";
	}
	virtual string getEventDesc() {
		return m_description[randomnumb()];
	}
};
