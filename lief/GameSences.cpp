#include"GameSences.h"

GameSences::GameSences()
{
    this->m_type = ENUM_SENCES_STATION;
    this->m_name = "����վ";
}
/** ���ó������� */
void GameSences::setSencesType(SENCES_TYPE type){
        //�û�����Ϸ����ѡ����еĳ���
        this->m_type = type;
        //����̳�֮������ȷ��������֮��Ļ�ȡ��������
}

/** ��ȡ�������� */
int GameSences::getSencesType(){
    //��Ϊ�����˳�������Ϊö���࣬�������ص���ö�����͵�ֵ
    //֮�����ڻ�ȡ��������
    int id;
    id = this->m_type;
    return id;
}

/** ���ó������� */
void GameSences::setSencesName(string name){
    //���ڸ��ݳ�����Ҫ���ļ���
    string NameArr[] = {"����վ","����","ҽԺ","����","�ʾ�","�����н�"};
    this->m_name = NameArr[this->m_type];
}

/** ��ȡ�������� */
string GameSences::getSencesName(){
    return this->m_name;
}
