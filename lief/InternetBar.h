#ifndef INTERNETBAR_H
#define INTERNETBAR_H

#include "GameSences.h"
#include "Player.h"

class InternetBar : public GameSences
{
    public:
        InternetBar() : GameSences(ENUM_SENCES_INTERNET_BAR, "网吧") {}
        virtual ~InternetBar();

        //设置上网费用
        void setFees(int fee);

        //获取上网费用
        int getFees();

        //花费金钱上网
        void accessInternet(Player *player);

        bool isEmporty();

    private:
        int fee;
};

#endif // INTERNETBAR_H
