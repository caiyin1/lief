#ifndef TIMECONTROLLER_H_INCLUDED
#define TIMECONTROLLER_H_INCLUDED

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
