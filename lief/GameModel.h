#ifndef GAMEMODEL_H
#define GAMEMODEL_H

#include "Player.h"
#include "Station.h"
#include "GameSences.h"
#include "Goods.h"
#include "Event.h"
#include <map>

using namespace std;

class GameModel
{
    public:
        GameModel();
        virtual ~GameModel();

        static GameModel* getInstance();

        void init();

        Player* getPlayer();

        map<int, Station*> getStation();

        map<int, GameSences*> getSences();

        // map<int, Goods*> getGoods();

        map<int, Event*> getEvent();

    private:
        static GameModel* m_pInstance;
        Player* m_player;
        map<int, Station*> m_mapStations;
        map<int, GameSences*> m_mapSences;
//        map<int, Goods*> m_mapGoods;
        map<int, Event*> m_mapEvents;
};

#endif // GAMEMODEL_H
