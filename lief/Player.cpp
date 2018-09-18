#include "Player.h"

Player::Player()
{
    // ����һ����������
    Package *package = new Package();

    // ���ú����󶨱�������������
    setPlayerPackage(package);

}

Player::~Player()
{
    delete m_package;
}


/**
* ������ҽ�Ǯ
*/
void Player::setPlayerMoney(int money)
{
    m_money = money;
}


/**
* ��ȡ��ҽ�Ǯ
*/
int Player::getPlayerMoney()
{
    return m_money;
}


/**
* ������ҽ���ֵ
*/
void Player::setPlayerHealth(int health)
{
    m_health = health;
}


/**
* ��ȡ��ҽ���ֵ
*/
int Player::getPlayerHealth()
{
    return m_health;
}


/**
* �����������ֵ
*/
void Player::setPlayerReputation(int reputation)
{
    m_reputation = reputation;
}


/**
* ��ȡ�������ֵ
*/
int Player::getPlayerReputation()
{
    return m_reputation;
}


/**
* ������Ҵ����
*/
void Player::setPlayerDeposit(int deposit)
{
    m_deposit = deposit;
}


/**
* ��ȡ��Ҵ����
*/
int Player::getPlayerDeposit()
{
    return m_deposit;
}


/**
* ������Ҹ�ծ���
*/
void Player::setPlayerDebt(int debt)
{
    m_debt = debt;
}


/**
* ��ȡ��Ҹ�ծ���
*/
int Player::getPlayerDebt()
{
    return m_debt;
}


/**
* ����ָ�������Ļ���
*/
bool Player::buy(Goods *goods,int amount)
{
    /**
    * ����Ļ��������������0��������ʾ�������ʧ��
    */
    if(amount <= 0)
    {
//        // �����������С��0����ʾ�������ʧ��
//        if(amount < 0)
//            printf("������������С��0���������ʧ�ܣ�\n");
//
//        // �����������Ϊ0����Ϊ��������
//        if(amount == 0)
//            printf("������������Ϊ0����Ĭ��Ϊ�������롣\n");

        // ����ֵΪfalse
        return false;
    }

    /**
    * ����빺����������ڻ�����������ʾ����
    * ��else if��Ϊ��ֻ����һ����ʾ
    */
    else if(amount > goods->getGoodsQualtity())
    {
//        printf("�����������㣡\n");

        // ����ֵΪfalse
        return false;
    }

    /**
    * �жϲֿ������Ƿ��㹻���������ܹ��룬��ʾ����ղֿ�
    */
    else if(m_package->getMaxReserve() + amount > m_package->getMaxReserve())
    {
        printf("�ֿ��������㣬������ղֿ⡣\n");

        // ����ֵΪfalse
        return false;
    }

    /**
    * ����ֽ�������Ԥ�������Ʒ��������ʾ
    */
    else if(goods->getGoodsPrice() * amount > m_money)
    {
//        printf("��ǰ�ֽ��㣬����ȡǮ��������\n");

        // ����ֵΪfalse
        return false;
    }

    /**
    * 1����������������������������,�ҹ�����������0
    * 2���ֽ��������ڹ�����Ʒ��Ҫ��������
    * ����������������󣬿����������
    */
    else
    {
        // ������б������������
        goods->setGoodsQualtity(goods->getGoodsQualtity() - amount);

        // ����ֽ����:����۸� * ��������
        m_money -= goods->getGoodsPrice() * amount;

        // �ֿ⵱ǰ�������ӣ�������������
        m_package->setCurReserve(m_package->getCurReserve() + amount);


        ///////////
        //
        // �����Ǳ����ı䶯,�õ�vector���Ҳ����
        //
        ///////////



        // ��ʾ����ɹ�
//        printf("����ɹ����Ѽ���ֿ��С�\n");

        // ����ֵΪtrue
        return true;
    }
}


/**
* ����ָ�������Ļ���
*/
bool Player::sell(Goods *goods,int amount)
{
    /**
    * ���۵Ļ��������������0��������ʾ������Ʒʧ��
    */
    if(amount <= 0)
    {
        // �����������С��0����ʾ�������ʧ��
        if(amount < 0)
            printf("������������С��0�����ۻ���ʧ�ܣ�\n");

        // �����������Ϊ0����Ϊ��������
        if(amount == 0)
            printf("���ۻ��������Ϊ0����Ĭ��Ϊ�������ۡ�\n");

        // ����ֵΪfalse
        return false;
    }

    /**
    * �������۵��������ڻ�����������ʾ����
    */
    else if(amount > goods->getGoodsQualtity())
    {
//        printf("�������������㣡\n");

        // ����ֵΪfalse
        return false;
    }

    /**
    * 1����������С�ڵ��ڿ������
    * 2�������������ڵ���0
    * �����������������������
    */
    else
    {
        // ���ۺ�����ֽ�����:����۸� * ��������
        m_money += goods->getGoodsPrice() * amount;

        // �ֿ⵱ǰ�������٣�������������
        m_package->setCurReserve(m_package->getCurReserve() - amount);

        ////////////////
        //
        // ��Ӧ�Ĳֿ�Ĳ�����vector����
        //
        ////////////////


        // ��ʾ���۳ɹ�
//        printf("���۳ɹ����ֽ����ӣ�С�İ�ȫ��\n");
    }

    // ����ֵΪtrue
    return true;
}


/**
* ������Ҹ��˲ֿ��ַ
*/
void Player::setPlayerPackage(Package *package)
{
    m_package = package;
}


/**
* ��ȡ��Ҹ��˲ֿ��ַ
*/
Package *Player::getPlayerPackage()
{
    return m_package;
}




