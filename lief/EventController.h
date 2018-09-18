#ifndef EVENTCONTROLLER_H_INCLUDED
#define EVENTCONTROLLER_H_INCLUDED

/**
* Copyright(2018)
* All rights reserved.
* Author :
* Date : 2018-09-13-09.07.41
* Description :
*/
#include "GameController.h"
#include "SoundController.h"
#include "TimeController.h"
class EventController{
    public:
        /**�¼���ʼ�������������͵��¼�-ENUM_EVENT_TYPE*/
        void init(){

        }


        /**���ݴ����¼������͵�����Ӧ�Ĵ�����*/
        void dealEvent(Event * event){

        }


        /**������Ϣ�¼�*/
        void dealNews(Event*news){
            m_pEvent->showNews(news);
        }


        /**�����г���Ϣ�¼�*/
        void dealMarketNews(Event*marketNews){
            m_pEvent->showMarketNews(marketNews);
            //m_player:Player* - ��Ϸ���

            //�ҵ���Ӱ�����
            Goods *gameGood = nullptr;
            for(int i=0;i<m_player->m_vecGoods.size();i++){
                if(m_vecGoods[i].id = marketNews->getGoodsId()){
                    gameGood = m_vecGoods[i];
                    break;
                }
            }
            //������ڣ���������
            if(gameGood){
                int amounts = gameGood->getGoodsQualtity();
                gameGood->setGoodsQualtity(gameGood->getGoodsQualtity() + marketNews->getGoodsAmount());
                gameGood->setGoodsPrice(amouts * gameGood->getGoodsPrice() / gameGood->getGoodsQualtity());
            }
            //���ﲻ���ڣ����ӻ���
            else{
                gameGood = new Goods();
                gameGood->setGoodsId(marketNews->getGoodsId());
                gameGood->setGoodsPrice(0);
                gameGood->setGoodsQualtity(marketNews->getGoodsAmount());

                m_player->m_vecGoods.push_back(gameGood);
            }
        }


        /**���������¼�*/
        void dealHurt(Event*hurt){
            m_pEvent->showHurt(hurt);

            //ֱ�ӿ�����ֵ
            m_player->setPlayerHealth(m_player->getPlayerHealth() - hurt->getPlayerHealth());
        }


        /**����ʧ���¼�*/
        void dealStolen(Event*stolen){
            m_pEvent->showStolen(stolen);

            //ֱ�ӿ۽�Ǯ
            m_player->setPlayerDeposit(m_player->getPlayerDeposit() - stolen->getLoseMoney());
            //�ж������ǮΪ����תΪ��ծ
            if(m_player->getPlayerDeposit<0){
                m_player->setPlayerDebt(m_player->getPlayerDeposit());
                m_player->setPlayerDeposit(0);
            }

        }
    private:

};
#endif // EVENTCONTROLLER_H_INCLUDED
