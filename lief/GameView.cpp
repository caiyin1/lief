#include "GameView.h"
#include"EventView.h"
#include"SencesView.h"
#include"Event.h"
#include"News.h"
#include"Hurt.h"
#include"Stolen.h"
#include"MarketNews.h"
#include<iostream>
#include<cstdlib>
#include<map>
#include<vector>
#include<string>
#include<Windows.h>
using namespace std;
GameView::GameView()
{
	init();
}
GameView*GameView::m_pInstance = NULL;

GameView *GameView::getInstance() {
	if (m_pInstance == NULL)
		m_pInstance = new GameView();
	return m_pInstance;
}
void GameView::init() {
	m_pEvent = new EventView();
	//m_pSences = new SencesView();
}
  void	 GameView::showTime(int curDay, int maxDays) {
	cout << "�����ǵ�" << curDay << "��"<<endl;
	cout << "��Ϸ�������" << maxDays << "��,";
	cout << "�㻹ʣ��" << maxDays - curDay << "��" << endl;
	Sleep(5000);
	system("cls");
}
void GameView::showStory() {
	cout << "Hello���˼��˰���XXX��������Ҵ�����XXX��MC���棨ð�գ�ʵ���������XXX������������ð���أ�������һ��ȥ̽���ɣ�"<<endl;
	Sleep(5000);
	system("cls");
}
/*void  GameView::showPlayerInfo(Player * player) {
		cout << "��ҽ�Ǯ:" << player->getPlayerMoney() << endl;
		cout << "��ҽ���ֵ:" <<player-> getPlayerHealth() << endl;
		cout << "�������ֵ:" << player->getPlayerReputation() << endl; 
		cout << "��Ҵ����:" <<player-> getPlayerDeposit() << endl;
		cout << "��Ҹ�ծ���:" << player->getPlayerDebt() << endl; 
}*/
int  GameView::showPlayerOptions(string title, vector<string> options) {
	cout << title << "��Ϸ" << endl;
	int i;
	for ( i= 0; i<options.size(); ++i)
		cout << i+1<<":"<<options[i] << endl;
	int choice; string str;
	cout << "������ѡ��:";
	cin >> choice;
	while (cin.fail() || choice <= 0|| choice>i) {
		if (!(cin.fail()) && (choice <= 0||choice>i)) {
			cout << "���ڷ�Χ��,����������:";
			cin >> choice;
		}
		else {
			cin.clear();
			cin >> str;
			cout << "�������" << str << "�������֣�����������" << endl;
			cin >> choice;
		}
	}
	Sleep(5000);
	system("cls");
	return choice;
}
/*void GameView::showGoodsInfo(Goods *goods) {
	 cout << "������:" << goods->getGoodsId()<<endl;
	 cout << "��������:" << goods->getGoodsName() << endl;
	 cout << "��������:" <<  goods->getGoodsQualtity()<< endl;
	 cout << "�ۼ�:" << goods->getGoodsPrice() << endl;
}
void GameView::showGoodsList(map<int, Goods*>goodsList) {
	map<int, Goods*>::iterator iter;
	iter = goodsList.begin();
	while (iter!=goodsList.end())
	{
		cout << iter->first << "����Ʒ:";
		cout << "������:" <<iter->second->getGoodsId() << endl;
		cout << "��������:" << iter->second->getGoodsName() << endl;
		cout << "��������:" << iter->second->getGoodsQualtity() << endl;
		cout << "�ۼ�:" << iter->second->getGoodsPrice() << endl;
	}
}*/
void GameView::showEvent(Event *event) {
	if (typeid(*event) == typeid(News)) {
		cout << "���ڲ岥һ������:";
		m_pEvent->showNews(event);
	}
	else if (typeid(*event) == typeid(MarketNews)) {
		cout << "��!�г�������һ��С������" << endl ;
		m_pEvent->showMarketNews(event);
	}
	else if (typeid(*event) == typeid(Stolen)) {
		cout << "��!�Ǹ�ɱǧ����С͵��͵���Ӷ�����" << endl;
		m_pEvent->showStolen(event);
	}
	else if (typeid(*event) == typeid(Hurt)) {
		cout << "��!���Ȼ������!";
		m_pEvent->showHurt(event);
	}
}