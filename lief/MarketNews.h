#ifndef MARKETNEWS_H_INCLUDED
#define MARKETNEWS_H_INCLUDED

#include "Event.h"
#include<string>
#include<cstdlib>

using namespace std;

class MarketNews : public Event
{
public:
	MarketNews(){}

	virtual ~MarketNews() {}

	virtual void setGoodsId(int id) {
		m_goodsId = id;
	}//������Ӱ��Ļ���ID

	virtual int	getGoodsId() {
		return m_goodsId;
	}//��ȡ��Ӱ��Ļ���

	virtual void setGoodsAmount(int amount) {
		m_goodsAmount = amount;
	}// ������Ӱ��Ļ�������

	virtual int	getGoodsAmount() {
		return m_goodsAmount;
	}//��ȡ��Ӱ��Ļ�������

	virtual void setGoodsPrice(int price) {
		m_goodsPrice = price;
	}// ������Ӱ��Ļ���۸�

	virtual int getGoodsPrice() {
		return m_goodsPrice;
	}	//������Ӱ��Ļ���۸�

private:
    int m_goodsId;
    int m_goodsPrice;
    int m_goodsAmount;
};

#endif // MARKETNEWS_H_INCLUDED
