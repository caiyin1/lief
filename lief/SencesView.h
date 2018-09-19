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

        void showStation(Station *station);//չʾ�����ĳ������վ�����Ϣ��Ӧ����������Ϣ��

        void showBank(Bank *bank);//չʾ���������Ϣ

        void showHospital(Hospital *hospital);// չʾҽԺ�����Ϣ

        void showAirport(Airport *airport);// չʾ���������Ϣ

        void showHousingAgency(HousingAgency *ha);//չʾ�����н������Ϣ��Ӧ����������Ϣ��

        void showHouseInfo(House* house);

        void showInternetBar(InternetBar *bar);//չʾ���������Ϣ
};

#endif // SENCESVIEW_H
