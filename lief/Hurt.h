#pragma once
#include "Event.h"
#include<string>
using namespace std;
class Hurt :public Event
	
{
public:
	Hurt() {
		setEventDesc();
	};
 	virtual void setPlayerHealth(int health) {
		m_playerHealth = health;
	}//设置玩家减少的健康值

	 virtual int	 getPlayerHealth() {
		 return m_playerHealth;
	 }//获取玩家减少的健康值
	 virtual void setEventDesc() {
		 m_description[0] = "1";
		 m_description[1] = "2";
		 m_description[2] = "3";
		 m_description[3] = "4";
		 m_description[4] = "5";
		 m_description[5] = "6";

	 }//设置事件描述
	 virtual  string getEventDesc() {
		 return m_description[randomnumb()];
	 }

};


