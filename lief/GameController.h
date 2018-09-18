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
        /**设置窗口大小*/
        void setWindowsSize(int x,int y){
            HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE); /*标准输出句柄*/
            COORD size = {x, y}; /*缓冲区大小*/
            SMALL_RECT rc = {0, 0, x-1, y-1};// 坐标从0开始
            SetConsoleWindowInfo(hOut, true, &rc);
            SetConsoleScreenBufferSize(hOut, size);
        }
        /**设置窗口标题*/
        void setWindowsTitle(string title){
            char *str ;
            strcpy(str,title.c_str());
            SetConsoleTitle(str);
        }
        /**设置窗口前景色及背景色*/
        void setWindowsColor(char foreColor,char backColor){
            char str[9] = "color   ";
            str[6] = foreColor;
            str[7] = backColor;
            system(str);
        }
        /**游戏初始化，含设置窗口大小、标题、前景色及背景色*/
        void init(){
            setWindowsSize(31,101);
            setWindowsTitle("UrbanLife");
            setWindowsColor('0','8');
        }
        /**启动游戏*/
        void start(){
            m_pInstance->showStory();
        }
        /**事件处理接口，根据事件类型调用对应的处理函数*/
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
        /**获取当前音乐播放状态*/
        bool getMusicStatus(){
            return m_pSoundController->getMusicStatus();
        }
        /**启动音乐播放，调用playTextMusic，playBackgroundMusic*/
        void openMusic(){
            m_pSoundController->playTextMusic(filename);
            m_pSoundController->playBackgroundMusic(filename);
        }
        /**停止音乐播放*/
        void closeMusic(){
            m_pSoundController->stopTextMusic();
            m_pSoundController->stopBackgroundMusic();
        }
        /**更新事件，curDay + 1*/
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
