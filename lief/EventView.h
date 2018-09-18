#pragma once
#include"Event.h"
class EventView
{
public:
	EventView();
	void showNews(Event *news );//展示新闻事件相关信息
		
	void	showMarketNews(Event *marketNews  );//展示市场消息相关信息
		
	void showHurt( Event *hurt );//展示受伤事件相关信息
		
	void showStolen(Event *stolen ); //展示受伤事件相关信息
};
