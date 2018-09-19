#ifndef HOSPITAL_H
#define HOSPITAL_H

#include"GameSences.h"
#include "Player.h"
#include <iostream>

using namespace std;

class Hospital : public GameSences
{
    public:
        Hospital():GameSences(ENUM_SENCES_HOSPITAL, "ҽԺ"),fee(0){}
        virtual ~Hospital(){}

        //���������
        void setFees(int money);

        //��ȡ�����
        int getFees();

        //�����ҽ���ֵ���Ƿ���Ҫ����
        bool checkHealth(Player* Player);

        //���ѽ�Ǯ���ƣ��Ƿ����Ƴɹ�
        bool treatment(Player* Player);

        void begin_H(Player* Player);

    private:
        int fee;
};

#endif // HOSPITAL_H
