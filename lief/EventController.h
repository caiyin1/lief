#ifndef EVENTCONTROLLER_H
#define EVENTCONTROLLER_H

#include "News.h"
#include "MarketNews.h"
#include "Hurt.h"
#include "Stolen.h"

class EventController
{
    public:
        EventController();
        virtual ~EventController();

        void dealNews(News *news);

        void dealMarketNews(MarketNews *marketNews);

        void dealHurt(Hurt *hurt);

        void dealStolen(Stolen *stolen);

};

#endif // EVENTCONTROLLER_H
