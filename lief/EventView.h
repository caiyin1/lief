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

        void showNews(News *news);//չʾ�����¼������Ϣ

        void showMarketNews(MarketNews *marketNews);//չʾ�г���Ϣ�����Ϣ

        void showHurt(Hurt *hurt);//չʾ�����¼������Ϣ

        void showStolen(Stolen *stolen); //չʾ�����¼������Ϣ
};

#endif // EVENTVIEW_H
