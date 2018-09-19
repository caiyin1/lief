#ifndef EVENTVIEW_H
#define EVENTVIEW_H

#include "News.h"
#include "MarketNews.h"
#include "Hurt.h"
#include "Stolen.h"

class EventView
{
    public:
        EventView();
        virtual ~EventView();

        void showNews(News *news);//展示新闻事件相关信息

        void showMarketNews(MarketNews *marketNews);//展示市场消息相关信息

        void showHurt(Hurt *hurt);//展示受伤事件相关信息

        void showStolen(Stolen *stolen); //展示受伤事件相关信息
};

#endif // EVENTVIEW_H
