#ifndef PLAYER_H
#define PLAYER_H

#include <stdio.h>
#include <windows.h>
#include <stdbool.h>
#include "Package.h"
#include "Goods.h"

Player* instance = nullptr;

using namespace std;

class Player
{
    public:
		 static Player* getInstance()
		{
			if (instance == NULL)
				instance = new Player();

			return instance;
		}

        Player();
        virtual ~Player();

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
        * ������Ҹ��˱�����ַ
        */
        void setPlayerPackage(Package *package);
        /**
        * ��ȡ��Ҹ��˱�����ַ
        */
        Package *getPlayerPackage();


        /**
        * ����ָ�������Ļ���
        */
        bool buy(Goods *goods,int amount);
        /**
        * ����ָ�������Ļ���
        */
        bool sell(Goods *goods,int amount);

    protected:

    private:
        int m_nMoney = 2000;         // �ֽ�
        int m_nHealth = 100;         // ����ֵ
        int m_nReputation = 100;     // ����
        int m_nDeposit = 0;          // ���
        int m_nDebt = 5500;          // Ƿ��
        Package *m_pPackage;         // ����
};

#endif // PLAYER_H
