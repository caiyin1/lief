#ifndef STATION_H
#define STATION_H

#include "GameSences.h"
#include "BlackMarket.h"

class Station : public GameSences
{
    public:
        // Station() :: GameSences(ENUM_SENCES_STATION,"地铁站") {}
        virtual ~Station();

        void setStationId(int id);

        int getStationId();

        void setBlackMarketStatus(bool isExist);

        bool getBlackMarketStatus();

        BlackMarket* getBlackmarketInstance();

    private:
        int m_nId;
        bool m_bIsExistBlackMarket;
        BlackMarket *m_pBlackMarket;
};

#endif // STATION_H
