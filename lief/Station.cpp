#include<iostream>
#include"Station.h"
#include<time.h>
using namespace std;
/**
Station::Station(){

    for(int i = 0;i < sizeof(stationNames)/sizeof(*stationNames);i++)
    {
        Station* station = new Station();
        station->setStation(i+1);
        station->setSencesName(stationNames[i]);
    }

}*/

Station::~Station()
{
    //dtor
    if(this->m_BlackMarket)
    {
        delete this->m_BlackMarket;
        this->m_BlackMarket = nullptr;
    }
}

/**  */
int Station::getStation()
{
    return this->m_id;
}

/** 设置当前地铁站的黑市状态 */
void Station::setBlackMarketStatus(bool isExist){
    //利用时间种子来制定骰子，单双决定是否存在黑市
    srand((unsigned)time(NULL));
    int isHave = (rand() % 10000)+1;    //[1,10000]
    if(isHave % 2 == 0)
        this->m_isExistBlackMarket = true;
    else this->m_isExistBlackMarket = false;
}

/** 获取当前地铁站的黑市状态 */
bool Station::getBlackMarketStatus()
{
    return this->m_isExistBlackMarket;
}

/** 获取黑市实例对象，不存在则为null */
BlackMarket* Station::getBlackMarketInstance(){
    //先定义一个黑市的指针，再进行判断是否存在黑市
    BlackMarket* black = NULL;
    if(this->m_isExistBlackMarket)
        black = new BlackMarket();
    return black;
}
