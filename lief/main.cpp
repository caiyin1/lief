#include<iostream>
#include"GameView.h"
#include"News.h"
#include"Stolen.h"
#include"MarketNews.h"
#include<cstdlib>
#include<string>
using namespace std;
int main() {

	GameView *mygame = GameView::getInstance();
	Event *news = new News();
	Event *stolen = new Stolen();
	mygame->init();
	mygame->showStory();
	mygame->showTime(3, 5);
	mygame->showEvent(news);
	mygame->showEvent(stolen);
	system("pause");
	return 0;
}