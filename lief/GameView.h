#pragma once
#include<string>
#include<vector>
#include<map>
#include"EventView.h"
#include"SencesView.h"
#include"Event.h"
#include"GameSence"
using namespace std;
class GameView
{
private:
	GameView();
	 static  GameView * m_pInstance;//实例对象
	EventView * m_pEvent; //事件视图对象
	SencesView *m_pSences;// 场景视图对象
public:
	void init();//对象实例化
	static GameView *getInstance();//获取GameView 类的实例对象
	void showStory();//展示开场剧情
	void	showTime(int curDay, int maxDays  );// 展示时间信息
		
	//void showPlayerInfo(Player * player  );// 展示玩家信息
		
	int	 showPlayerOptions(string title  ,vector<string> options  );// 展示玩家的选择界面并返回玩家的选择
		
	//void	showGoodsList(map<int, Goods*>goodsList );//  展示货物列表
		
	//void	showGoodsInfo(Goods *goods   );// 展示货物详细信息
		
	void	showSences(GameSences *sences   );// 展示详细场景相关信息
		
	void	showEvent(Event *event );// 展示详细事件相关信息
};

