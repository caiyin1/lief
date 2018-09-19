#include"GameView.h"
#include"News.h"
#include"Stolen.h"
#include"MarketNews.h"
#include<cstdlib>
#include<string>
#include <iostream>
#include "GameController.h"

using namespace std;
int main() {

	GameController::getInstance()->init();
	GameController::getInstance()->start();
	return 0;
}