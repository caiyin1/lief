#pragma once
#include "Event.h"
#include<string>
#include<cstdlib>
using namespace std;
class MarketNews :
	public Event
{
public:
	MarketNews(){
		setEventDesc();
	}
	virtual void setEventDesc() {
		m_description[0] = "1";
		m_description[1] = "2";
		m_description[2] = "3";
		m_description[3] = "4";
		m_description[4] = "5";
		m_description[5] = "6";
	}//�����¼�����
	virtual string getEventDesc() {
		return m_description[randomnumb()];
	}//��ȡ�¼�����
	virtual void	setGoodsId(int id) {
		m_goodsId = id;
	}//������Ӱ��Ļ���ID
	virtual int	   getGoodsId() {
		return m_goodsId;
	}//��ȡ��Ӱ��Ļ���
	virtual void setGoodsAmount(int amount) {
		m_goodsAmount = amount;
	}// ������Ӱ��Ļ�������
	virtual int	 getGoodsAmount() {
		return m_goodsAmount;
	}//��ȡ��Ӱ��Ļ�������
	virtual void setGoodsPrice(int price) {
		m_goodsPrice = price;
	}// ������Ӱ��Ļ���۸�
	virtual int getGoodsPrice() {
		return m_goodsPrice;
	}	//������Ӱ��Ļ���۸�
};
