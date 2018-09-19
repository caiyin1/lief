#ifndef GAMEVIEW_H
#define GAMEVIEW_H

#include<string>
#include<vector>
#include<map>
#include"EventView.h"
#include"SencesView.h"
#include"Event.h"
using namespace std;

class GameView
{
    public:
        GameView();
        virtual ~GameView();

        void init();//����ʵ����

        void start();

        static GameView *getInstance();//��ȡGameView ���ʵ������

        void showInfo();

        void showStory();//չʾ��������

        void showTime(int curDay, int maxDays);// չʾʱ����Ϣ

        void showPlayerInfo(Player *player);// չʾ�����Ϣ

        int	showPlayerOptions(string title, vector<string> options);// չʾ��ҵ�ѡ����沢������ҵ�ѡ��

        void showGoodsList(map<int, Goods*>goodsList);//  չʾ�����б�

        void showGoodsInfo(Goods *goods);// չʾ������ϸ��Ϣ

        void showSences(GameSences *sences);// չʾ��ϸ���������Ϣ

        void showEvent(Event *event);// չʾ��ϸ�¼������Ϣ

    private:
        static  GameView * m_pInstance;//ʵ������
        EventView * m_pEvent; //�¼���ͼ����
        SencesView *m_pSences;// ������ͼ����

        void playTypywrite(string line);
};

#endif // GAMEVIEW_H
