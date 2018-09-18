#include "Player.h"

Player::Player()
{
    // 创建一个背包对象
    Package *package = new Package();

    // 调用函数绑定背包到人物身上
    setPlayerPackage(package);

}

Player::~Player()
{
    delete m_package;
}


/**
* 设置玩家金钱
*/
void Player::setPlayerMoney(int money)
{
    m_money = money;
}


/**
* 获取玩家金钱
*/
int Player::getPlayerMoney()
{
    return m_money;
}


/**
* 设置玩家健康值
*/
void Player::setPlayerHealth(int health)
{
    m_health = health;
}


/**
* 获取玩家健康值
*/
int Player::getPlayerHealth()
{
    return m_health;
}


/**
* 设置玩家声望值
*/
void Player::setPlayerReputation(int reputation)
{
    m_reputation = reputation;
}


/**
* 获取玩家声望值
*/
int Player::getPlayerReputation()
{
    return m_reputation;
}


/**
* 设置玩家存款金额
*/
void Player::setPlayerDeposit(int deposit)
{
    m_deposit = deposit;
}


/**
* 获取玩家存款金额
*/
int Player::getPlayerDeposit()
{
    return m_deposit;
}


/**
* 设置玩家负债金额
*/
void Player::setPlayerDebt(int debt)
{
    m_debt = debt;
}


/**
* 获取玩家负债金额
*/
int Player::getPlayerDebt()
{
    return m_debt;
}


/**
* 购买指定数量的货物
*/
bool Player::buy(Goods *goods,int amount)
{
    /**
    * 购入的货物数量必须大于0，否则提示购入货物失败
    */
    if(amount <= 0)
    {
//        // 如果购入数量小于0，提示购入货物失败
//        if(amount < 0)
//            printf("购入货物的数量小于0，购入货物失败！\n");
//
//        // 如果购入数量为0，视为放弃购入
//        if(amount == 0)
//            printf("购入货物的数量为0，已默认为放弃购入。\n");

        // 返回值为false
        return false;
    }

    /**
    * 如果想购买的数量大于货物数量，提示错误
    * 用else if是为了只出现一种提示
    */
    else if(amount > goods->getGoodsQualtity())
    {
//        printf("货物数量不足！\n");

        // 返回值为false
        return false;
    }

    /**
    * 判断仓库容量是否足够，不足则不能购入，提示先清空仓库
    */
    else if(m_package->getMaxReserve() + amount > m_package->getMaxReserve())
    {
        printf("仓库容量不足，请先清空仓库。\n");

        // 返回值为false
        return false;
    }

    /**
    * 如果现金不足以买预购入的商品，给出提示
    */
    else if(goods->getGoodsPrice() * amount > m_money)
    {
//        printf("当前现金不足，请先取钱后再来。\n");

        // 返回值为false
        return false;
    }

    /**
    * 1、货物数量大于买入数量的条件,且购入数量大于0
    * 2、现金数量大于购买商品需要金额的条件
    * 当满足上面的条件后，可以买入货物
    */
    else
    {
        // 买入后，列表货物数量减少
        goods->setGoodsQualtity(goods->getGoodsQualtity() - amount);

        // 玩家现金减少:货物价格 * 货物数量
        m_money -= goods->getGoodsPrice() * amount;

        // 仓库当前容量增加，可用容量减少
        m_package->setCurReserve(m_package->getCurReserve() + amount);


        ///////////
        //
        // 下面是背包的变动,用到vector，我不会搭
        //
        ///////////



        // 提示购买成功
//        printf("购买成功，已加入仓库中。\n");

        // 返回值为true
        return true;
    }
}


/**
* 出售指定数量的货物
*/
bool Player::sell(Goods *goods,int amount)
{
    /**
    * 出售的货物数量必须大于0，否则提示出售商品失败
    */
    if(amount <= 0)
    {
        // 如果购入数量小于0，提示购入货物失败
        if(amount < 0)
            printf("购入货物的数量小于0，出售货物失败！\n");

        // 如果购入数量为0，视为放弃购入
        if(amount == 0)
            printf("出售货物的数量为0，已默认为放弃出售。\n");

        // 返回值为false
        return false;
    }

    /**
    * 如果想出售的数量大于货物数量，提示错误
    */
    else if(amount > goods->getGoodsQualtity())
    {
//        printf("库存货物数量不足！\n");

        // 返回值为false
        return false;
    }

    /**
    * 1、出售数量小于等于库存数量
    * 2、出售数量大于等于0
    * 满足以上条件后可正常出售
    */
    else
    {
        // 出售后，玩家现金增加:货物价格 * 货物数量
        m_money += goods->getGoodsPrice() * amount;

        // 仓库当前容量减少，可用容量增加
        m_package->setCurReserve(m_package->getCurReserve() - amount);

        ////////////////
        //
        // 相应的仓库的操作，vector部分
        //
        ////////////////


        // 提示出售成功
//        printf("出售成功，现金增加，小心安全！\n");
    }

    // 返回值为true
    return true;
}


/**
* 设置玩家个人仓库地址
*/
void Player::setPlayerPackage(Package *package)
{
    m_package = package;
}


/**
* 获取玩家个人仓库地址
*/
Package *Player::getPlayerPackage()
{
    return m_package;
}




