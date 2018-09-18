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
	cout << "现在是第" << curDay << "天"<<endl;
	cout << "游戏最多能玩" << maxDays << "天,";
	cout << "你还剩下" << maxDays - curDay << "天" << endl;
	Sleep(5000);
	system("cls");
}
void GameView::showStory() {
	cout << "Hello！人见人爱的XXX又来给大家带来了XXX的MC生存（冒险）实况，今天的XXX会遇到怎样的冒险呢？让我们一起去探索吧！"<<endl;
	Sleep(5000);
	system("cls");
}
/*void  GameView::showPlayerInfo(Player * player) {
		cout << "玩家金钱:" << player->getPlayerMoney() << endl;
		cout << "玩家健康值:" <<player-> getPlayerHealth() << endl;
		cout << "玩家声望值:" << player->getPlayerReputation() << endl; 
		cout << "玩家存款金额:" <<player-> getPlayerDeposit() << endl;
		cout << "玩家负债金额:" << player->getPlayerDebt() << endl; 
}*/
int  GameView::showPlayerOptions(string title, vector<string> options) {
	cout << title << "游戏" << endl;
	int i;
	for ( i= 0; i<options.size(); ++i)
		cout << i+1<<":"<<options[i] << endl;
	int choice; string str;
	cout << "请输入选择:";
	cin >> choice;
	while (cin.fail() || choice <= 0|| choice>i) {
		if (!(cin.fail()) && (choice <= 0||choice>i)) {
			cout << "不在范围内,请重新输入:";
			cin >> choice;
		}
		else {
			cin.clear();
			cin >> str;
			cout << "你输入的" << str << "不是数字，请重新输入" << endl;
			cin >> choice;
		}
	}
	Sleep(5000);
	system("cls");
	return choice;
}
/*void GameView::showGoodsInfo(Goods *goods) {
	 cout << "货物编号:" << goods->getGoodsId()<<endl;
	 cout << "货物名称:" << goods->getGoodsName() << endl;
	 cout << "货物数量:" <<  goods->getGoodsQualtity()<< endl;
	 cout << "售价:" << goods->getGoodsPrice() << endl;
}
void GameView::showGoodsList(map<int, Goods*>goodsList) {
	map<int, Goods*>::iterator iter;
	iter = goodsList.begin();
	while (iter!=goodsList.end())
	{
		cout << iter->first << "号商品:";
		cout << "货物编号:" <<iter->second->getGoodsId() << endl;
		cout << "货物名称:" << iter->second->getGoodsName() << endl;
		cout << "货物数量:" << iter->second->getGoodsQualtity() << endl;
		cout << "售价:" << iter->second->getGoodsPrice() << endl;
	}
}*/
void GameView::showEvent(Event *event) {
	if (typeid(*event) == typeid(News)) {
		cout << "现在插播一条新闻:";
		m_pEvent->showNews(event);
	}
	else if (typeid(*event) == typeid(MarketNews)) {
		cout << "啊!市场出现了一点小波动。" << endl ;
		m_pEvent->showMarketNews(event);
	}
	else if (typeid(*event) == typeid(Stolen)) {
		cout << "啊!那个杀千刀的小偷敢偷老子东西。" << endl;
		m_pEvent->showStolen(event);
	}
	else if (typeid(*event) == typeid(Hurt)) {
		cout << "啊!你居然伤了我!";
		m_pEvent->showHurt(event);
	}
}