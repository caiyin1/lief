#ifndef HURT_H_INCLUDED
#define HURT_H_INCLUDED

#include "Event.h"
#include<string>

using namespace std;

class Hurt : public Event
{
public:
	Hurt() {}
	virtual ~Hurt() {}

    void setPlayerHealth(int health) {
		m_playerHealth = health;
	}//������Ҽ��ٵĽ���ֵ

    int getPlayerHealth() {
		 return m_playerHealth;
    }//��ȡ��Ҽ��ٵĽ���ֵ

private:
    int m_playerHealth;
};


#endif // HURT_H_INCLUDED
