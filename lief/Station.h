#ifndef STATION_H_INCLUDED
#define STATION_H_INCLUDED
#include"BlackMarket.h"
#include"GameSences.h"
//初始化地铁站的列表
    string stationNames[] = {
        "西直门",
        "积水潭",
        "东直门",
        "苹果园",
        "公主坟",
        "复兴门",
        "建国门",
        "长椿街",
        "崇文门",
        "北京站"
    };

class Station: public virtual GameSences{
private:
    int m_id;   //地铁站编号
    bool m_isExistBlackMarket;  //当前地铁站是否存在黑市
    BlackMarket* m_BlackMarket; //如果不存在黑市，则为null

public:

Station();

virtual ~Station();

/** 设置地铁编号 */
void setStation(int id);

/** 获取地铁编号 */
int getStation();

/** 设置当前地铁站的黑市状态 */
void setBlackMarketStatus(bool isExist);

/** 获取当前地铁站的黑市状态 */
bool getBlackMarketStatus();

/** 获取黑市实例对象，不存在则为null */
BlackMarket* getBlackMarketInstance();

};

#endif // STATION_H_INCLUDED
