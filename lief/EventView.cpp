#include "EventView.h"
#include<iostream>
#include<Windows.h>
using namespace std;
EventView::EventView()
{
}

void EventView::showNews(Event *news) {  //չʾ�����¼������Ϣ
	cout << news->getEventDesc() << endl;
	Sleep(5000);
	system("cls");
}    

void EventView::showMarketNews(Event *marketNews) {  //չʾ�г���Ϣ�����Ϣ
	cout<<marketNews->getEventDesc();
	cout << endl;
	cout << "�ܴ�Ӱ��,����" << marketNews->getGoodsId() << "�ż۸���������˱仯,���ڼ۸�������ֱ�Ϊ:" << marketNews->getGoodsPrice() << "Ԫ," << marketNews->getGoodsAmount() << "��" << endl;
	Sleep(5000);
	system("cls");
}       

void EventView::showHurt(Event *hurt) {//չʾ�����¼������Ϣ
	cout << hurt->getEventDesc() << endl;
	cout << "��Ľ���ֵ������" << hurt->getPlayerHealth() << endl;
	Sleep(5000);
	system("cls");
}

void EventView::showStolen(Event *stolen) {//չʾ�����¼������Ϣ
	cout << stolen->getEventDesc() << endl;
	cout << "���Ǯ����" << stolen->getLoseMoney() << "Ԫ" << endl;
	Sleep(5000);
	system("cls");
}     
