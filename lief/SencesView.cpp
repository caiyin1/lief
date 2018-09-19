#include "SencesView.h"
#include"GameSences.h"
#include<iostream>
#include<cstdlib>
#include<map>
#include "Player.h"
using namespace std;
SencesView::SencesView()
{
}
void SencesView::showStation(Station *station) {
	cout << "����վId:" << station->getStationId() << endl;
	if (station->getBlackMarketStatus())
		cout << "�������վ�к���Ŷ��Ҫ��Ҫ�����أ�" << endl;
}//չʾ�����ĳ������վ�����Ϣ��Ӧ����������Ϣ��

void	SencesView::showBank(Bank * bank) {

	cout << "��ӭ��������" << endl;

}//չʾ���������Ϣ

void	SencesView::showAirport(Airport *airport) {
	cout << "������·���Ҫ��ũ��" << endl;
	airport->leave();
}// չʾ���������Ϣ

void	SencesView::showHousingAgency(HousingAgency * ha) {
	cout << "���ⷿ�����ʷ�Դ�����У����㿴����" << endl;
	map<int, House*>housemap = ha->getHouseList();
	// map<int, Goods*>::iterator iter;
	auto iter = housemap.begin();
	while (iter != housemap.end())
	{
		cout << iter->first << "�ŷ�:";
		cout << "��������:" << iter->second->getHouseType() << endl;
		cout << "�����ۼ�:" << iter->second->getHousePrice() << endl;
		cout << "���ݽ���ֵ:" << iter->second->getHouseHealth() << endl;
		cout << "��������ֵ:" << iter->second->getHouseReputation() << endl;
	}

}//չʾ�����н������Ϣ��Ӧ����������Ϣ��

void SencesView::showInternetBar(InternetBar * bar) {
	cout << "��ү��������,�����ɣ������ܵ����۸���ˣ�ÿ��Сʱ����:" <<bar->getFees()<<"ԪǮ"<<endl;

}//չʾ���������Ϣ
void SencesView::showHospital(Hospital *hospital) {
	auto player = Player::getInstance();
	if (hospital->checkHealth(player)) {
		cout << "���Ѳ��������������ư�" << endl;
		if (hospital->treatment(player)) {
			cout << "���Ƴɹ���������" << hospital->getFees() << "ԪǮ" << endl;
		}
		else
		{
			cout << "ûǮ��ɶ��" << endl;
		}
	}
	else	{
			cout << "û����ɶҽԺ��" << endl;
		}
}