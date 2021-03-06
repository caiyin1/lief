#ifndef GAMESENCES_H
#define GAMESENCES_H

#include <iostream>
#include <string>

using namespace std;

typedef enum ENUM_SENCES_TYPE{
    ENUM_SENCES_STATION ,       // 地铁站
    ENUM_SENCES_BANK,           // 银行
    ENUM_SENCES_HOSPITAL,       // 医院
    ENUM_SENCES_AIRPORT,        // 机场
    ENUM_SENCES_HOUSING_AGENCY, // 房屋中介
    ENUM_SENCES_INTERNET_BAR    // 网吧
}SENCES_TYPE;

class GameSences
{
    public:
        GameSences(SENCES_TYPE type,string name);
        GameSences();
        // virtual ~GameSences();

        /** 设置场景类型 */
        void setSencesType(SENCES_TYPE type);

        /** 获取场景类型 */
        int getSencesType();

        /** 设置场景名称 */
        void setSencesName(string name);

        /** 获取场景名称 */
        string getSencesName();

    private:
        SENCES_TYPE m_type;     //场景类型
        string m_strName;          //场景名称
};

#endif // GAMESENCES_H
