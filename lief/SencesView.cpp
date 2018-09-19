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
	cout << "地铁站Id:" << station->getStationId() << endl;
	if (station->getBlackMarketStatus())
		cout << "这个地铁站有黑市哦，要不要剁手呢？" << endl;
}//展示具体的某个地铁站相关信息（应包含黑市信息）

void	SencesView::showBank(Bank * bank) {

	cout << "欢迎来到银行" << endl;

}//展示银行相关信息

void	SencesView::showAirport(Airport *airport) {
	cout << "城市套路深，我要回农村" << endl;
	airport->leave();
}// 展示机场相关信息

void	SencesView::showHousingAgency(HousingAgency * ha) {
	cout << "想租房吗？优质房源大大地有，给你看看吧" << endl;
	map<int, House*>housemap = ha->getHouseList();
	// map<int, Goods*>::iterator iter;
	auto iter = housemap.begin();
	while (iter != housemap.end())
	{
		cout << iter->first << "号房:";
		cout << "房子类型:" << iter->second->getHouseType() << endl;
		cout << "房子售价:" << iter->second->getHousePrice() << endl;
		cout << "房屋健康值:" << iter->second->getHouseHealth() << endl;
		cout << "房屋声望值:" << iter->second->getHouseReputation() << endl;
	}

}//展示房屋中介相关信息（应包含房屋信息）

void SencesView::showInternetBar(InternetBar * bar) {
	cout << "大爷来上网啊,本网吧，服务周到，价格便宜，每个小时仅需:" <<bar->getFees()<<"元钱"<<endl;

}//展示网吧相关信息
void SencesView::showHospital(Hospital *hospital) {
	auto player = Player::getInstance();
	if (hospital->checkHealth(player)) {
		cout << "你已病入膏肓，快快治疗吧" << endl;
		if (hospital->treatment(player)) {
			cout << "治疗成功，共花费" << hospital->getFees() << "元钱" << endl;
		}
		else
		{
			cout << "没钱看啥病" << endl;
		}
	}
	else	{
			cout << "没病来啥医院！" << endl;
		}
}