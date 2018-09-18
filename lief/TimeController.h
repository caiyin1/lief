#ifndef TIMECONTROLLER_H_INCLUDED
#define TIMECONTROLLER_H_INCLUDED

/**
* Copyright(2018)
* All rights reserved.
* Author :
* Date : 2018-09-13-09.08.09
* Description :
*/
#include "GameController.h"
#include "SoundController.h"
#include "EventController.h"
class TimeController{
    public:
        /**�����ܵ���Ϸ����*/
        void setTotalDays(int days){
            totalDays = days;
        }
        /**��ȡ�ܵ���Ϸ����*/
        int getTotalDays(){
            return totalDays;
        }
        /**���õ�ǰ��Ϸ����*/
        void setCurDay(int day){
            curDay = day;
        }
        /**��ȡ��ǰ��Ϸ����*/
        int getCurDay(){
            return curDay;
        }
    private:
        int totalDays;
        int curDay;
};
#endif // TIMECONTROLLER_H_INCLUDED
