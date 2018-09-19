#ifndef BANK_H
#define BANK_H

#include "GameSences.h"
#include "Player.h"


class Bank : public GameSences
{
    public:
        Bank(Player *Playera) :
            GameSences(ENUM_SENCES_BANK,"银行"),
            m_money(Playera->getPlayerDeposit())
        {}

        virtual ~Bank();

        //存钱
        int saveMoney(int money, Player *player)
        {
            m_money += money;
            player->setPlayerDeposit(m_money);
            player->setPlayerMoney(player->getPlayerMoney()-money);
            return m_money;
        }

        //取钱
        int getMoney(int money, Player *player)
        {
            m_money-=money;
            player->setPlayerDeposit(m_money);
            player->setPlayerMoney(player->getPlayerMoney()+money);
            return m_money;
        }

        void beginB(Player Player);

    protected:

    private:
        int m_money;//玩家在银行的存款
};

#endif // BANK_H
