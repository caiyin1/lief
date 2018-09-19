#ifndef HOUSINGAGENCY_H
#define HOUSINGAGENCY_H

#include "GameSences.h"
#include "Player.h"
#include "House.h"
#include <map>

//产生 [a,b] 区间的随机数
#define RANDOM(a,b) (rand()%((b+1)-(a)) + (a))
//产生 1-3 的整数，如要改变算术范围，则修改这个宏的参数即可
#define GEN_VALUE() RANDOM(1, 100)//一次出现房子的数量
#define GEN_VALUE1() RANDOM(1, 3)//等级专用
#define GEN_VALUE2() RANDOM(60, 100)//健康专用
#define GEN_VALUE3() RANDOM(50, 100)//声望专用
#define GEN_VALUE4() RANDOM(0, 10000)//定价

class HousingAgency : public GameSences
{
    public:
        HousingAgency() : GameSences(ENUM_SENCES_HOUSING_AGENCY,"房屋中介")
        {
            House *h1 = new House(1, 1000, 5, 5);
            House *h2 = new House(2, 1500, 10, 10);
            House *h3 = new House(3, 2000, 15, 15);

            m_mapHouse.insert(pair<int, House*>(1, h1));
            m_mapHouse.insert(pair<int, House*>(2, h2));
            m_mapHouse.insert(pair<int, House*>(3, h3));
        }
        virtual ~HousingAgency();

        //买房
        void buyHouse(int i,Player *player,House house);

        //获取房屋列表
        map<int, House*> getHouseList();

        void showall();

    private:
        map<int, House*> m_mapHouse;//- 中介拥有的房屋集合
};

#endif // HOUSINGAGENCY_H
