#pragma once
#include "Station.h"
#include "Bank.h"

class SencesView
{
public:
	SencesView();

	void	showStation(Station *station);//չʾ�����ĳ������վ�����Ϣ��Ӧ����������Ϣ��
		
	void	showBank(Bank * bank);//չʾ���������Ϣ
		
	void	showHospital(Hospital *hospital  );// չʾҽԺ�����Ϣ
		
	void	showAirport(Airport *airport );// չʾ���������Ϣ
		
	void	showHousingAgency(HousingAgency * ha );//չʾ�����н������Ϣ��Ӧ����������Ϣ��
		
	void	showInternetBar(InternetBar * bar );//չʾ���������Ϣ
		
};

