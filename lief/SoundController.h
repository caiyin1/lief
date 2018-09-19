#ifndef SOUNDCONTROLLER_H
#define SOUNDCONTROLLER_H

#include <iostream>
using namespace std;

class SoundController
{
    public:
        SoundController();
        virtual ~SoundController();

        void setMusicStatus(bool isOpen);

        bool getMusicStatus();

        void playTextMusic(string filename);

        void playBackgroundMusic(string filename);

        void stopTextMusic(string filename);

        void stopBackgroundMusic();

    private:
        bool m_musicStatus;
};

#endif // SOUNDCONTROLLER_H
