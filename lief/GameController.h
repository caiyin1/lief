#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H

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

#include <iostream>

#define RANDOM(a,b) (rand()%((b+1)-(a)) + (a))

class GameController
{
    public:
        GameController();
        virtual ~GameController();

        static GameController* getInstance();

        void init();

        void start();

        void dealEvent(Event *event);

        bool getMusicStatus();

        void openMusic();

        void closeMusic();

        bool updateDay();

        void setupGame();

        void stopGame();

        SoundController* getSoundController();

    private:

        static GameController *m_pInstance;

        SoundController *m_pSoundController;

        EventController *m_pEventController;

        TimeController *m_pTimeController;

        bool m_isRunning;

        void setWindowsSize(int x, int y);

        void setWindowsTitle(std::string title);

        void setWindowsColor(char foreColor, char backColor);
};

#endif // GAMECONTROLLER_H
