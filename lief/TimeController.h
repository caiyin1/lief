#ifndef TIMECONTROLLER_H_INCLUDED
#define TIMECONTROLLER_H_INCLUDED

class TimeController{
    public:
        /**设置总的游戏天数*/
        void setTotalDays(int days){
            totalDays = days;
        }
        /**获取总的游戏天数*/
        int getTotalDays(){
            return totalDays;
        }
        /**设置当前游戏天数*/
        void setCurDay(int day){
            curDay = day;
        }
        /**获取当前游戏天数*/
        int getCurDay(){
            return curDay;
        }
    private:
        int totalDays;
        int curDay;
};

#endif // TIMECONTROLLER_H_INCLUDED
