#ifndef GAMESENCES_H_INCLUDED
#define GAMESENCES_H_INCLUDED

#include<string>
using namespace std;
typedef enum ENUM_SENCES_TYPE{
    ENUM_SENCES_STATION ,    //����վ
    ENUM_SENCES_BANK,           //����
    ENUM_SENCES_HOSPITAL,       //ҽԺ
    ENUM_SENCES_AIRPORT,        //����
    ENUM_SENCES_POST_OFFICE,    //�ʾ�
    ENUM_SENCES_HOUSING_AGENCY  //�����н�
}SENCES_TYPE;


class GameSences{
private:
    SENCES_TYPE m_type;     //��������
    string m_name;          //��������
public:
GameSences();

GameSences(SENCES_TYPE type,string name){
        setSencesName(name);
        setSencesType(type);
}

/** ���ó������� */
void setSencesType(SENCES_TYPE type);

/** ��ȡ�������� */
int getSencesType();

/** ���ó������� */
void setSencesName(string name);

/** ��ȡ�������� */
string getSencesName();


};

#endif // GAMESENCES_H_INCLUDED
