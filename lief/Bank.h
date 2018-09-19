#ifndef BANK_H
#define BANK_H

#include "GameSences.h"
#include "Player.h"


class Bank : public GameSences
{
    public:
        Bank(Player *Playera) :
            GameSences(ENUM_SENCES_BANK,"����"),
            m_money(Playera->getPlayerDeposit())
        {}

        virtual ~Bank();

        //��Ǯ
        int saveMoney(int money, Player *player)
        {
            m_money += money;
            player->setPlayerDeposit(m_money);
            player->setPlayerMoney(player->getPlayerMoney()-money);
            return m_money;
        }

        //ȡǮ
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
        int m_money;//��������еĴ��
};

#endif // BANK_H
