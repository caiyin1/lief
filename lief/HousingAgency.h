#ifndef HOUSINGAGENCY_H
#define HOUSINGAGENCY_H

#include "GameSences.h"
#include "Player.h"
#include "House.h"
#include <map>

//���� [a,b] ����������
#define RANDOM(a,b) (rand()%((b+1)-(a)) + (a))
//���� 1-3 ����������Ҫ�ı�������Χ�����޸������Ĳ�������
#define GEN_VALUE() RANDOM(1, 100)//һ�γ��ַ��ӵ�����
#define GEN_VALUE1() RANDOM(1, 3)//�ȼ�ר��
#define GEN_VALUE2() RANDOM(60, 100)//����ר��
#define GEN_VALUE3() RANDOM(50, 100)//����ר��
#define GEN_VALUE4() RANDOM(0, 10000)//����

class HousingAgency : public GameSences
{
    public:
        HousingAgency() : GameSences(ENUM_SENCES_HOUSING_AGENCY,"�����н�")
        {
            House *h1 = new House(1, 1000, 5, 5);
            House *h2 = new House(2, 1500, 10, 10);
            House *h3 = new House(3, 2000, 15, 15);

            m_mapHouse.insert(pair<int, House*>(1, h1));
            m_mapHouse.insert(pair<int, House*>(2, h2));
            m_mapHouse.insert(pair<int, House*>(3, h3));
        }
        virtual ~HousingAgency();

        //��
        void buyHouse(int i,Player *player,House house);

        //��ȡ�����б�
        map<int, House*> getHouseList();

        void showall();

    private:
        map<int, House*> m_mapHouse;//- �н�ӵ�еķ��ݼ���
};

#endif // HOUSINGAGENCY_H
