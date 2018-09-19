#ifndef INTERNETBAR_H
#define INTERNETBAR_H

#include "GameSences.h"
#include "Player.h"

class InternetBar : public GameSences
{
    public:
        InternetBar() : GameSences(ENUM_SENCES_INTERNET_BAR, "����") {}
        virtual ~InternetBar();

        //������������
        void setFees(int fee);

        //��ȡ��������
        int getFees();

        //���ѽ�Ǯ����
        void accessInternet(Player *player);

        bool isEmporty();

    private:
        int fee;
};

#endif // INTERNETBAR_H
