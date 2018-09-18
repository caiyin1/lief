#include"GameSences.h"

GameSences::GameSences()
{
    this->m_type = ENUM_SENCES_STATION;
    this->m_name = "地铁站";
}
/** 设置场景类型 */
void GameSences::setSencesType(SENCES_TYPE type){
        //用户在游戏界面选择进行的场景
        this->m_type = type;
        //子类继承之后类型确定，便于之后的获取场景名称
}

/** 获取场景类型 */
int GameSences::getSencesType(){
    //因为设置了场景类型为枚举类，函数返回的是枚举类型的值
    //之后用于获取场景名称
    int id;
    id = this->m_type;
    return id;
}

/** 设置场景名称 */
void GameSences::setSencesName(string name){
    //后期根据场景需要更改即可
    string NameArr[] = {"地铁站","银行","医院","机场","邮局","房屋中介"};
    this->m_name = NameArr[this->m_type];
}

/** 获取场景名称 */
string GameSences::getSencesName(){
    return this->m_name;
}
