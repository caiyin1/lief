#ifndef STATION_H_INCLUDED
#define STATION_H_INCLUDED
#include"BlackMarket.h"
#include"GameSences.h"
//��ʼ������վ���б�
    string stationNames[] = {
        "��ֱ��",
        "��ˮ̶",
        "��ֱ��",
        "ƻ��԰",
        "������",
        "������",
        "������",
        "������",
        "������",
        "����վ"
    };

class Station: public virtual GameSences{
private:
    int m_id;   //����վ���
    bool m_isExistBlackMarket;  //��ǰ����վ�Ƿ���ں���
    BlackMarket* m_BlackMarket; //��������ں��У���Ϊnull

public:

Station();

virtual ~Station();

/** ���õ������ */
void setStation(int id);

/** ��ȡ������� */
int getStation();

/** ���õ�ǰ����վ�ĺ���״̬ */
void setBlackMarketStatus(bool isExist);

/** ��ȡ��ǰ����վ�ĺ���״̬ */
bool getBlackMarketStatus();

/** ��ȡ����ʵ�����󣬲�������Ϊnull */
BlackMarket* getBlackMarketInstance();

};

#endif // STATION_H_INCLUDED
