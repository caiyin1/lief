#ifndef HOSPITAL_H
#define HOSPITAL_H

#include"GameSences.h"
#include "Player.h"
#include <iostream>

using namespace std;

class Hospital : public GameSences
{
    public:
        Hospital():GameSences(ENUM_SENCES_HOSPITAL, "医院"),fee(0){}
        virtual ~Hospital(){}

        //设置诊金金额
        void setFees(int money);

        //获取诊金金额
        int getFees();

        //检测玩家健康值，是否需要治疗
        bool checkHealth(Player* Player);

        //花费金钱治疗，是否治疗成功
        bool treatment(Player* Player);

        void begin_H(Player* Player);

    private:
        int fee;
};

#endif // HOSPITAL_H
