#ifndef SENCESVIEW_H
#define SENCESVIEW_H

#include "Station.h"
#include "Bank.h"
#include "Hospital.h"
#include "Airport.h"
#include "HousingAgency.h"
#include "InternetBar.h"

class SencesView
{
    public:
        SencesView();
        virtual ~SencesView();

        void showStation(GameSences *station);

        void showStation(Station *station);//展示具体的某个地铁站相关信息（应包含黑市信息）

        void showBank(Bank *bank);//展示银行相关信息

        void showHospital(Hospital *hospital);// 展示医院相关信息

        void showAirport(Airport *airport);// 展示机场相关信息

        void showHousingAgency(HousingAgency *ha);//展示房屋中介相关信息（应包含房屋信息）

        void showHouseInfo(House* house);

        void showInternetBar(InternetBar *bar);//展示网吧相关信息
};

#endif // SENCESVIEW_H
