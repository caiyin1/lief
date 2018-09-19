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
			int m_nMoney = 200;            // �ֽ�
			int m_nHealth = 100;           // ����ֵ
			int m_nReputation = 100;       // ����
			int m_nDeposit = 500;          // ���
			int m_nDebt = 0;             // Ƿ��
			Package *m_pPackage = new Package();     // ����
		}
        /**
        * ������ҽ�Ǯ
        */
        void setPlayerMoney(int money);
        /**
        * ��ȡ��ҽ�Ǯ
        */
        int getPlayerMoney();

        /**
        * ������ҽ���ֵ
        */
        void setPlayerHealth(int health);
        /**
        * ��ȡ��ҽ���ֵ
        */
        int getPlayerHealth();


        /**
        * �����������ֵ
        */
        void setPlayerReputation(int reputation);
        /**
        * ��ȡ�������ֵ
        */
        int getPlayerReputation();


        /**
        * ������Ҵ����
        */
        void setPlayerDeposit(int deposit);
        /**
        * ��ȡ��Ҵ����
        */
        int getPlayerDeposit();


        /**
        * ������Ҹ�ծ���
        */
        void setPlayerDebt(int debt);
        /**
        * ��ȡ��Ҹ�ծ���
        */
        int getPlayerDebt();


        /**
        * ����ָ�������Ļ���
        */
        bool buy(Goods *goods,int amount);
        /**
        * ����ָ�������Ļ���
        */
        bool sell(Goods *goods,int amount);


        /**
        * ��ȡ��Ҹ��˲ֿ��ַ
        */
        Package* getPlayerPackage();

    private:
        int m_nMoney;            // �ֽ�
        int m_nHealth;           // ����ֵ
        int m_nReputation;       // ����
        int m_nDeposit;          // ���
        int m_nDebt;             // Ƿ��
        Package *m_pPackage;     // ����
};

#endif // PLAYER_H
