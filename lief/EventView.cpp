#include "EventView.h"
#include<iostream>
#include<Windows.h>
using namespace std;
EventView::EventView()
{
}

void EventView::showNews(Event *news) {  //展示新闻事件相关信息
	cout << news->getEventDesc() << endl;
	Sleep(5000);
	system("cls");
}    

void EventView::showMarketNews(Event *marketNews) {  //展示市场消息相关信息
	cout<<marketNews->getEventDesc();
	cout << endl;
	cout << "受此影响,货物" << marketNews->getGoodsId() << "号价格和数量有了变化,现在价格和数量分别为:" << marketNews->getGoodsPrice() << "元," << marketNews->getGoodsAmount() << "件" << endl;
	Sleep(5000);
	system("cls");
}       

void EventView::showHurt(Event *hurt) {//展示受伤事件相关信息
	cout << hurt->getEventDesc() << endl;
	cout << "你的健康值减少了" << hurt->getPlayerHealth() << endl;
	Sleep(5000);
	system("cls");
}

void EventView::showStolen(Event *stolen) {//展示受伤事件相关信息
	cout << stolen->getEventDesc() << endl;
	cout << "你的钱少了" << stolen->getLoseMoney() << "元" << endl;
	Sleep(5000);
	system("cls");
}     
