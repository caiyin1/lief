#include"BlackMarket.h"
#include<ctime>
#include<iostream>
#include "Player.h"

using namespace std;

/** 加载货物列表 */
void BlackMarket::loadGoods()
{
	//显示出各种货物的信息
    //第一步更新货物
    this->getGoodsList();
    //最后一步，打印货物

    for(auto iter = this->m_mapGoodsList.begin(); iter != this->m_mapGoodsList.end() ;iter++){
     cout<< iter->second->getGoodsPrice()<< "\t" << iter->second->getGoodsPrice() << iter->second->getGoodsQualtity() <<endl;
    }
}

/** 更新货物 */
void updateGoods(){
    //思路：通过设计随机数的方法，决定每次取多少种货物
    //再随机决定哪几种货物
    srand((unsigned)time(NULL));
    //暂时先设置为1-10
    int SizeNum = rand() % 10 + 1;
    for(int i = 0; i < SizeNum;i++)
    {

    }
}

map<int, Goods*> BlackMarket::getGoodsList()
{
    //获取所有的货物信息货物信息
    return this->m_mapGoodsList;
}


/** 在黑市出售玩家仓库中的货物 */
bool BlackMarket::sellGoods(int nGoodsId, int nGoodsAmounts){
    //获取玩家仓库的货物
    //通过编号查找商品
    //这里需要用到玩家类和仓库类。。。然而我没有。。。
    //假设Goods类是仓库类。。
	auto pGoods = this->m_mapGoodsList.find(nGoodsId);
	if (pGoods == this->m_mapGoodsList.end())
	{
		cout << "找不到该商品" << endl;
		return false;
	}
   //找到后就减少货物，加玩家的金币
   // goods->m_nQualtity -=countNum;
   /**
        player.money += goods->m_nPrice * countNum;

   */
	Player::getInstance()->buy(pGoods->second, nGoodsAmounts);
	return true;
}

/*
 * 在黑市购买一定数量的货物
 * @param id 商品的编号
 * @param account 商品的数量
 */
Goods* BlackMarket::buyGoods(int id,int account){

    Goods* goods = new Goods();
    //获取一个迭代器
    /*list<Goods>::iterator iter;
    //找到黑市对应的货物id，退出
    for(iter = this->m_goodsList.begin(); iter != this->m_goodsList.end();iter++)
    {
        if(iter->id == id)
            break;
    }
    if(account <= iter->m_nQualtity)
    {
        /**
            玩家的仓库相应的货物增加，然后玩家的金币减少
        */
	//    }
    /*else{cout<<"输入数量错误!"<<endl;}*/
    return goods;
}
