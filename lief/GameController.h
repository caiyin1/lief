#ifndef GAMECONTROLLER_H_INCLUDED
#define GAMECONTROLLER_H_INCLUDED
/**
* Copyright(2018)
* All rights reserved.
* Author :
* Date : 2018-09-13-09.06.41
* Description :
*/
#include "SoundController.h"
#include "EventController.h"
#include "TimeController.h"
#include <conio.h>
#include <windows.h>
#include <bits/stdc++.h>
#include <string.h>
#include <mmsystem.h>
#pragma comment(lib,"WinMM.Lib")
using namespace std;
class GameController{
    public:
        /**���ô��ڴ�С*/
        void setWindowsSize(int x,int y){
            HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE); /*��׼������*/
            COORD size = {x, y}; /*��������С*/
            SMALL_RECT rc = {0, 0, x-1, y-1};// �����0��ʼ
            SetConsoleWindowInfo(hOut, true, &rc);
            SetConsoleScreenBufferSize(hOut, size);
        }
        /**���ô��ڱ���*/
        void setWindowsTitle(string title){
            char *str ;
            strcpy(str,title.c_str());
            SetConsoleTitle(str);
        }
        /**���ô���ǰ��ɫ������ɫ*/
        void setWindowsColor(char foreColor,char backColor){
            char str[9] = "color   ";
            str[6] = foreColor;
            str[7] = backColor;
            system(str);
        }
        /**��Ϸ��ʼ���������ô��ڴ�С�����⡢ǰ��ɫ������ɫ*/
        void init(){
            setWindowsSize(31,101);
            setWindowsTitle("UrbanLife");
            setWindowsColor('0','8');
        }
        /**������Ϸ*/
        void start(){
            m_pInstance->showStory();
        }
        /**�¼�����ӿڣ������¼����͵��ö�Ӧ�Ĵ�����*/
        void dealEvent(Event*event){
            ENUM_EVENT_TYPE e = event->getEventType();
            if(e == ENUM_EVENT_NEWS){
                m_pEventController->dealNews();
            }
            else if(e == ENUM_EVENT_MARKET_NEWS){
                m_pEventController->dealMarketNews();
            }
            else if(e == ENUM_EVENT_HURT){
                m_pEventController->dealHurt();
            }
            else if(e == ENUM_EVENT_STOLEN){
                m_pEventController->dealStolen();
            }
        }
        /**��ȡ��ǰ���ֲ���״̬*/
        bool getMusicStatus(){
            return m_pSoundController->getMusicStatus();
        }
        /**�������ֲ��ţ�����playTextMusic��playBackgroundMusic*/
        void openMusic(){
            m_pSoundController->playTextMusic(filename);
            m_pSoundController->playBackgroundMusic(filename);
        }
        /**ֹͣ���ֲ���*/
        void closeMusic(){
            m_pSoundController->stopTextMusic();
            m_pSoundController->stopBackgroundMusic();
        }
        /**�����¼���curDay + 1*/
        void updateDay(){
            m_pTimeController->curDay += 1;
        }
    private:
        static GameController *m_pInstance;
        static SoundController *m_pSoundController;
        static EventController *m_pEventController;
        static TimeController *m_pTimeController;
};
#endif // GAMECONTROLLER_H_INCLUDED
