#ifndef BLACKMARKET_H_INCLUDED
#define BLACKMARKET_H_INCLUDED
#include<list>
#include"Goods.h"
#include"GameSences.h"
class BlackMarket:public GameSences{
private:
list<Goods*> m_goodsList;    //黑市的货物列表

public:
BlackMarket()
{
    list<Goods*> goodList(10);
    this->m_goodsList = goodList;
}
/** 加载货物列表 */
void loadGoods();

/** 更新货物 */
void updateGoods();

/** 在黑市出售玩家仓库中的货物 */
void sellGoods(int id,int countNum);

/*
 * 在黑市购买一定数量的货物
 * @param id 商品的编号
 * @param account 商品的数量
 */
Goods* buyGoods(int id,int account);

/** 获取货物列表 */
list<Goods*> getGoodsList();







};

#endif // BLACKMARKET_H_INCLUDED
