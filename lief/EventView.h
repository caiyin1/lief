#pragma once
#include"Event.h"
class EventView
{
public:
	EventView();
	void showNews(Event *news );//չʾ�����¼������Ϣ
		
	void	showMarketNews(Event *marketNews  );//չʾ�г���Ϣ�����Ϣ
		
	void showHurt( Event *hurt );//չʾ�����¼������Ϣ
		
	void showStolen(Event *stolen ); //չʾ�����¼������Ϣ
};
