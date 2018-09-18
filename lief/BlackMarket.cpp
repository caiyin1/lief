#include"BlackMarket.h"
#include<ctime>
#include<iostream>

using namespace std;

/** 加载货物列表 */
void BlackMarket::loadGoods()
{
    //显示出各种货物的信息
    //第一步更新货物
    this->getGoodsList();
    //最后一步，打印货物
    list<Goods>::iterator iter;

    for(iter = this->m_goodsList.begin(); iter != this->m_goodsList.end() ;iter++){
    // cout<< *iter <<endl;
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

list<Goods> BlackMarket::getGoodsList()
{
    //获取所有的货物信息货物信息
    return this->m_goodsList;
}


/** 在黑市出售玩家仓库中的货物 */
void sellGoods(int id,int countNum){
    //获取玩家仓库的货物
    //通过编号查找商品
    //这里需要用到玩家类和仓库类。。。然而我没有。。。
    //假设Goods类是仓库类。。
    Goods* goods = new Goods();
    for(int i = 0; i < 10 ;i++)
    {
        if(goods->m_id == id)
            //指针指向它
            break;
    }
    else{cout<<"错误"<<endl;}
   //找到后就减少货物，加玩家的金币
   goods->m_qualtity -=countNum;
   /**
        player.money += goods->m_price * countNum;

   */
}

/*
 * 在黑市购买一定数量的货物
 * @param id 商品的编号
 * @param account 商品的数量
 */
Goods* BlackMarket::buyGoods(int id,int account){

    Goods* goods = new Goods();
    //获取一个迭代器
    list<Goods>::iterator iter;
    //找到黑市对应的货物id，退出
    for(iter = this->m_goodsList.begin(); iter != this->m_goodsList.end();iter++)
    {
        if(iter->id == id)
            break;
    }
    if(account <= iter->m_qualtity)
    {
        /**
            玩家的仓库相应的货物增加，然后玩家的金币减少
        */
    }
    else{cout<<"输入数量错误!"<<endl;}
    return goods;
}
