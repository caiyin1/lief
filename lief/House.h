#ifndef HOUSE_H
#define HOUSE_H


class House
{
    public:
        House();
        House(int m_type, int m_price, int m_health, int m_reputation)
            : m_type(m_type), m_price(m_price),
              m_health(m_health), m_reputation(m_reputation) {}
        virtual ~House();

        //设置房屋类型
        void setHouseType(int type);

        //获取房屋类型
        int getHouseType();

       //设置房屋售价
        void setHousePrice(int price);

        //获取房屋售价
        int getHousePrice();

        //设置房屋健康值
        void setHouseHealth(int health);

        //获取房屋健康值
        int getHouseHealth();

        //设置房屋声望值
        int setHouseReputation(int reputation);

        //获取房屋声望值
        int getHouseReputation();


        void show();

    private:
        int m_type;         // – 房屋类型
        int m_price;        // – 房屋的价格
        int m_health;       // – 房屋携带的健康值
        int m_reputation;   // – 房屋携带的声望值
};

#endif // HOUSE_H
