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
	}//������Ҽ��ٵĽ���ֵ

	 virtual int	 getPlayerHealth() {
		 return m_playerHealth;
	 }//��ȡ��Ҽ��ٵĽ���ֵ
	 virtual void setEventDesc() {
		 m_description[0] = "1";
		 m_description[1] = "2";
		 m_description[2] = "3";
		 m_description[3] = "4";
		 m_description[4] = "5";
		 m_description[5] = "6";

	 }//�����¼�����
	 virtual  string getEventDesc() {
		 return m_description[randomnumb()];
	 }

};


