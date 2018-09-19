#ifndef BLACKMARKET_H
#define BLACKMARKET_H

#include "Goods.h"
#include <map>

using namespace std;

class BlackMarket
{
    public:
        BlackMarket();
        virtual ~BlackMarket();

        void loadGoods();

        // int sellGoods(int goodsId, int goodsAmounts);
		/**
		* @brief 出售商品
		*/
        bool sellGoods(int nGoodsId, int nGoodsAmounts);

		/*
		 * 在黑市购买一定数量的货物
		 * @param id 商品的编号
		 * @param account 商品的数量
		 */
		Goods* buyGoods(int id, int account);

        map<int, Goods*> getGoodsList();

    private:
        map<int, Goods*> m_mapGoodsList;
};

#endif // BLACKMARKET_H
