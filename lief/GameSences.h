#ifndef GAMESENCES_H
#define GAMESENCES_H

#include <iostream>
#include <string>

using namespace std;

typedef enum ENUM_SENCES_TYPE{
    ENUM_SENCES_STATION ,       // ����վ
    ENUM_SENCES_BANK,           // ����
    ENUM_SENCES_HOSPITAL,       // ҽԺ
    ENUM_SENCES_AIRPORT,        // ����
    ENUM_SENCES_HOUSING_AGENCY, // �����н�
    ENUM_SENCES_INTERNET_BAR    // ����
}SENCES_TYPE;

class GameSences
{
    public:
        GameSences(SENCES_TYPE type,string name);
        GameSences();
        // virtual ~GameSences();

        /** ���ó������� */
        void setSencesType(SENCES_TYPE type);

        /** ��ȡ�������� */
        int getSencesType();

        /** ���ó������� */
        void setSencesName(string name);

        /** ��ȡ�������� */
        string getSencesName();

    private:
        SENCES_TYPE m_type;     //��������
        string m_strName;          //��������
};

#endif // GAMESENCES_H
