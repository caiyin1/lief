#ifndef BLACKMARKET_H_INCLUDED
#define BLACKMARKET_H_INCLUDED
#include<list>
#include"Goods.h"
#include"GameSences.h"
class BlackMarket:public GameSences{
private:
list<Goods*> m_goodsList;    //���еĻ����б�

public:
BlackMarket()
{
    list<Goods*> goodList(10);
    this->m_goodsList = goodList;
}
/** ���ػ����б� */
void loadGoods();

/** ���»��� */
void updateGoods();

/** �ں��г�����Ҳֿ��еĻ��� */
void sellGoods(int id,int countNum);

/*
 * �ں��й���һ�������Ļ���
 * @param id ��Ʒ�ı��
 * @param account ��Ʒ������
 */
Goods* buyGoods(int id,int account);

/** ��ȡ�����б� */
list<Goods*> getGoodsList();







};

#endif // BLACKMARKET_H_INCLUDED
