#include"BlackMarket.h"
#include<ctime>
#include<iostream>
#include "Player.h"

using namespace std;

/** ���ػ����б� */
void BlackMarket::loadGoods()
{
	//��ʾ�����ֻ������Ϣ
    //��һ�����»���
    this->getGoodsList();
    //���һ������ӡ����

    for(auto iter = this->m_mapGoodsList.begin(); iter != this->m_mapGoodsList.end() ;iter++){
     cout<< iter->second->getGoodsPrice()<< "\t" << iter->second->getGoodsPrice() << iter->second->getGoodsQualtity() <<endl;
    }
}

/** ���»��� */
void updateGoods(){
    //˼·��ͨ�����������ķ���������ÿ��ȡ�����ֻ���
    //����������ļ��ֻ���
    srand((unsigned)time(NULL));
    //��ʱ������Ϊ1-10
    int SizeNum = rand() % 10 + 1;
    for(int i = 0; i < SizeNum;i++)
    {

    }
}

map<int, Goods*> BlackMarket::getGoodsList()
{
    //��ȡ���еĻ�����Ϣ������Ϣ
    return this->m_mapGoodsList;
}


/** �ں��г�����Ҳֿ��еĻ��� */
bool BlackMarket::sellGoods(int nGoodsId, int nGoodsAmounts){
    //��ȡ��Ҳֿ�Ļ���
    //ͨ����Ų�����Ʒ
    //������Ҫ�õ������Ͳֿ��ࡣ����Ȼ����û�С�����
    //����Goods���ǲֿ��ࡣ��
	auto pGoods = this->m_mapGoodsList.find(nGoodsId);
	if (pGoods == this->m_mapGoodsList.end())
	{
		cout << "�Ҳ�������Ʒ" << endl;
		return false;
	}
   //�ҵ���ͼ��ٻ������ҵĽ��
   // goods->m_nQualtity -=countNum;
   /**
        player.money += goods->m_nPrice * countNum;

   */
	Player::getInstance()->buy(pGoods->second, nGoodsAmounts);
	return true;
}

/*
 * �ں��й���һ�������Ļ���
 * @param id ��Ʒ�ı��
 * @param account ��Ʒ������
 */
Goods* BlackMarket::buyGoods(int id,int account){

    Goods* goods = new Goods();
    //��ȡһ��������
    /*list<Goods>::iterator iter;
    //�ҵ����ж�Ӧ�Ļ���id���˳�
    for(iter = this->m_goodsList.begin(); iter != this->m_goodsList.end();iter++)
    {
        if(iter->id == id)
            break;
    }
    if(account <= iter->m_nQualtity)
    {
        /**
            ��ҵĲֿ���Ӧ�Ļ������ӣ�Ȼ����ҵĽ�Ҽ���
        */
	//    }
    /*else{cout<<"������������!"<<endl;}*/
    return goods;
}
