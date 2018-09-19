#ifndef PLAYER_H
#define PLAYER_H

#include <stdio.h>
#include <windows.h>
#include <stdbool.h>
#include "GameSences.h"
#include "Package.h"
#include "Goods.h"
#include "Player.h"
#include <iostream>

using namespace std;


class Player
{
    public:
		static Player* getInstance();
        Player();
        virtual ~Player();

		void init()
		{
			int m_nMoney = 200;            // 现金
			int m_nHealth = 100;           // 健康值
			int m_nReputation = 100;       // 声望
			int m_nDeposit = 500;          // 存款
			int m_nDebt = 0;             // 欠款
			Package *m_pPackage = new Package();     // 背包
		}
        /**
        * 设置玩家金钱
        */
        void setPlayerMoney(int money);
        /**
        * 获取玩家金钱
        */
        int getPlayerMoney();

        /**
        * 设置玩家健康值
        */
        void setPlayerHealth(int health);
        /**
        * 获取玩家健康值
        */
        int getPlayerHealth();


        /**
        * 设置玩家声望值
        */
        void setPlayerReputation(int reputation);
        /**
        * 获取玩家声望值
        */
        int getPlayerReputation();


        /**
        * 设置玩家存款金额
        */
        void setPlayerDeposit(int deposit);
        /**
        * 获取玩家存款金额
        */
        int getPlayerDeposit();


        /**
        * 设置玩家负债金额
        */
        void setPlayerDebt(int debt);
        /**
        * 获取玩家负债金额
        */
        int getPlayerDebt();


        /**
        * 购买指定数量的货物
        */
        bool buy(Goods *goods,int amount);
        /**
        * 出售指定数量的货物
        */
        bool sell(Goods *goods,int amount);


        /**
        * 获取玩家个人仓库地址
        */
        Package* getPlayerPackage();

    private:
        int m_nMoney;            // 现金
        int m_nHealth;           // 健康值
        int m_nReputation;       // 声望
        int m_nDeposit;          // 存款
        int m_nDebt;             // 欠款
        Package *m_pPackage;     // 背包
};

#endif // PLAYER_H
