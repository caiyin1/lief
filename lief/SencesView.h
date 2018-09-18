#pragma once
#include "Station.h"
#include "Bank.h"

class SencesView
{
public:
	SencesView();

	void	showStation(Station *station);//展示具体的某个地铁站相关信息（应包含黑市信息）
		
	void	showBank(Bank * bank);//展示银行相关信息
		
	void	showHospital(Hospital *hospital  );// 展示医院相关信息
		
	void	showAirport(Airport *airport );// 展示机场相关信息
		
	void	showHousingAgency(HousingAgency * ha );//展示房屋中介相关信息（应包含房屋信息）
		
	void	showInternetBar(InternetBar * bar );//展示网吧相关信息
		
};

