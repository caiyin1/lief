#ifndef SOUNDCONTROLLER_H_INCLUDED
#define SOUNDCONTROLLER_H_INCLUDED

/**
* Copyright(2018)
* All rights reserved.
* Author :
* Date : 2018-09-13-09.07.15
* Description :
*/
#include "GameController.h"
#include "EventController.h"
#include "TimeController.h"
#pragma comment(lib,"WinMM.Lib")
#include <conio.h>
#include <windows.h>
#include <bits/stdc++.h>
#include <string.h>
#include <mmsystem.h>
using namespace std;
class SoundController{
    public:
        /**��������״̬*/
        void setMusicStatus(bool isOpen){
            m_musicStatus = isOpen;
        }
        /**��ȡ����״̬*/
        bool getMusicStatus(){
            return m_musicStatus;
        }
        /**������Ϸ����*/
        void playTextMusic(string filename){
            if(m_musicStatus) return;
            stringstream ss;
            ss<<"play res/";
            ss<<filename;
            ss<<".wav";
            mciSendString(ss.str().c_str(),"",0,NULL);
        }
        /**���ű�������*/
        void playBackgroundMusic(string filename){
            PlaySound(TEXT("res/bgm.wav"),NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
        }
        /**ֹͣ��Ϸ����*/
        void stopTextMusic(string filename){
            stringstream cmd;
            cmd<<"stop res/";
            cmd<<filename;
            cmd<<".wav";
            mciSendString(cmd.str().c_str(),"",0,NULL);
        }
        /**ֹͣ��������*/
        void stopBackgroundMusic(){
            PlaySound(TEXT(NULL),NULL,SND_FILENAME);
        }
    private:
        bool m_musicStatus;
};
#endif // SOUNDCONTROLLER_H_INCLUDED
