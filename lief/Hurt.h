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
	}//设置玩家减少的健康值

    int getPlayerHealth() {
		 return m_playerHealth;
    }//获取玩家减少的健康值

private:
    int m_playerHealth;
};


#endif // HURT_H_INCLUDED
