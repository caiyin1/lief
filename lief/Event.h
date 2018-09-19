#ifndef EVENT_H_INCLUDED
#define EVENT_H_INCLUDED

#include <ctime>
#include <string>
#include <cstdlib>

using namespace std;

typedef enum ENUM_EVENT_TYPE{
    ENUM_EVENT_NEWS,            // 新闻消息
    ENUM_EVENT_MARKET_NEWS,      // 市场消息
    ENUM_EVENT_HURT,            // 受伤事件
    ENUM_EVENT_STOLEN,          // 失窃事件
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
    EVENT_TYPE m_type;                  // 事件类型
    string m_description;               // 事件描述
};

#endif // EVENT_H_INCLUDED
