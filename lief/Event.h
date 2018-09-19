#ifndef EVENT_H_INCLUDED
#define EVENT_H_INCLUDED

#include <ctime>
#include <string>
#include <cstdlib>

using namespace std;

typedef enum ENUM_EVENT_TYPE{
    ENUM_EVENT_NEWS,            // ������Ϣ
    ENUM_EVENT_MARKET_NEWS,      // �г���Ϣ
    ENUM_EVENT_HURT,            // �����¼�
    ENUM_EVENT_STOLEN,          // ʧ���¼�
}EVENT_TYPE;

class Event
{
public:
    Event() {}
    virtual ~Event() {}

    void setEventType(EVENT_TYPE type)
    {
        m_type = type;
    }

    EVENT_TYPE getEventType()
    {
        return m_type;
    }

    void setEventDesc(string desc)
    {
        m_description = desc;
    }

    string getEventDesc()
    {
        return m_description;
    }

protected:
    EVENT_TYPE m_type;                  // �¼�����
    string m_description;               // �¼�����
};

#endif // EVENT_H_INCLUDED
