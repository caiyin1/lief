#include"BlackMarket.h"
#include<ctime>
#include<iostream>

using namespace std;

/** ���ػ����б� */
void BlackMarket::loadGoods()
{
    //��ʾ�����ֻ������Ϣ
    //��һ�����»���
    this->getGoodsList();
    //���һ������ӡ����
    list<Goods>::iterator iter;

    for(iter = this->m_goodsList.begin(); iter != this->m_goodsList.end() ;iter++){
    // cout<< *iter <<endl;
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

list<Goods> BlackMarket::getGoodsList()
{
    //��ȡ���еĻ�����Ϣ������Ϣ
    return this->m_goodsList;
}


/** �ں��г�����Ҳֿ��еĻ��� */
void sellGoods(int id,int countNum){
    //��ȡ��Ҳֿ�Ļ���
    //ͨ����Ų�����Ʒ
    //������Ҫ�õ������Ͳֿ��ࡣ����Ȼ����û�С�����
    //����Goods���ǲֿ��ࡣ��
    Goods* goods = new Goods();
    for(int i = 0; i < 10 ;i++)
    {
        if(goods->m_id == id)
            //ָ��ָ����
            break;
    }
    else{cout<<"����"<<endl;}
   //�ҵ���ͼ��ٻ������ҵĽ��
   goods->m_qualtity -=countNum;
   /**
        player.money += goods->m_price * countNum;

   */
}

/*
 * �ں��й���һ�������Ļ���
 * @param id ��Ʒ�ı��
 * @param account ��Ʒ������
 */
Goods* BlackMarket::buyGoods(int id,int account){

    Goods* goods = new Goods();
    //��ȡһ��������
    list<Goods>::iterator iter;
    //�ҵ����ж�Ӧ�Ļ���id���˳�
    for(iter = this->m_goodsList.begin(); iter != this->m_goodsList.end();iter++)
    {
        if(iter->id == id)
            break;
    }
    if(account <= iter->m_qualtity)
    {
        /**
            ��ҵĲֿ���Ӧ�Ļ������ӣ�Ȼ����ҵĽ�Ҽ���
        */
    }
    else{cout<<"������������!"<<endl;}
    return goods;
}
