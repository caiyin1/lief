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

        //���÷�������
        void setHouseType(int type);

        //��ȡ��������
        int getHouseType();

       //���÷����ۼ�
        void setHousePrice(int price);

        //��ȡ�����ۼ�
        int getHousePrice();

        //���÷��ݽ���ֵ
        void setHouseHealth(int health);

        //��ȡ���ݽ���ֵ
        int getHouseHealth();

        //���÷�������ֵ
        int setHouseReputation(int reputation);

        //��ȡ��������ֵ
        int getHouseReputation();


        void show();

    private:
        int m_type;         // �C ��������
        int m_price;        // �C ���ݵļ۸�
        int m_health;       // �C ����Я���Ľ���ֵ
        int m_reputation;   // �C ����Я��������ֵ
};

#endif // HOUSE_H
