#pragma once
#include<ctime>
#include<string>
#include<cstdlib>
using namespace std;
class Event
{
protected:
	string m_description[6];//�¼�����
	int  m_goodsId;// �C ��Ӱ��Ļ���Id
	int m_goodsAmount;// ��Ӱ��Ļ�������
	int m_goodsPrice;// ��Ӱ��Ļ���۸�
	int m_playerHealth;// ��Ҽ��ٵĽ���ֵ
	int m_loseMoney;// ��Ҷ�ʧ�Ľ�Ǯ
public:
	int randomnumb() {
		srand((int)time(NULL));
		return rand() % 6;
	}//�������
	virtual void setEventDesc() {}//�����¼�����
	virtual string getEventDesc() {
		return NULL;
	}//��ȡ�¼�����
	virtual 	void	setGoodsId(int id) {
	}//������Ӱ��Ļ���ID
	virtual 	int	   getGoodsId() {
		return 0;
	}//��ȡ��Ӱ��Ļ���
	virtual 	void setGoodsAmount(int amount) {
	}// ������Ӱ��Ļ�������

	virtual 	int	 getGoodsAmount() {
		return 0;
	}//��ȡ��Ӱ��Ļ�������

	virtual void setGoodsPrice(int price) {
	}// ������Ӱ��Ļ���۸�

	virtual int getGoodsPrice() {
		return 0;
	}//������Ӱ��Ļ���۸�

	virtual void setPlayerHealth(int health) {
	}//������Ҽ��ٵĽ���ֵ

	virtual int	 getPlayerHealth() {
		return 0;
	}//��ȡ��Ҽ��ٵĽ���ֵ

	virtual void setLoseMoney(int money) {}//������Ҷ�ʧ�Ľ�Ǯ

	virtual int getLoseMoney() {// ��ȡ��Ҷ�ʧ�Ľ�Ǯ
		return 0;
	}
	Event(){}
};