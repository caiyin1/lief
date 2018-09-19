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
		* @brief ������Ʒ
		*/
        bool sellGoods(int nGoodsId, int nGoodsAmounts);

		/*
		 * �ں��й���һ�������Ļ���
		 * @param id ��Ʒ�ı��
		 * @param account ��Ʒ������
		 */
		Goods* buyGoods(int id, int account);

        map<int, Goods*> getGoodsList();

    private:
        map<int, Goods*> m_mapGoodsList;
};

#endif // BLACKMARKET_H
