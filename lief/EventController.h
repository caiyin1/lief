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
        /**事件初始化，共四种类型的事件-ENUM_EVENT_TYPE*/
        void init(){

        }


        /**根据传入事件的类型调用相应的处理函数*/
        void dealEvent(Event * event){

        }


        /**处理消息事件*/
        void dealNews(Event*news){
            m_pEvent->showNews(news);
        }


        /**处理市场消息事件*/
        void dealMarketNews(Event*marketNews){
            m_pEvent->showMarketNews(marketNews);
            //m_player:Player* - 游戏玩家

            //找到受影响货物
            Goods *gameGood = nullptr;
            for(int i=0;i<m_player->m_vecGoods.size();i++){
                if(m_vecGoods[i].id = marketNews->getGoodsId()){
                    gameGood = m_vecGoods[i];
                    break;
                }
            }
            //货物存在，数量增加
            if(gameGood){
                int amounts = gameGood->getGoodsQualtity();
                gameGood->setGoodsQualtity(gameGood->getGoodsQualtity() + marketNews->getGoodsAmount());
                gameGood->setGoodsPrice(amouts * gameGood->getGoodsPrice() / gameGood->getGoodsQualtity());
            }
            //货物不存在，增加货物
            else{
                gameGood = new Goods();
                gameGood->setGoodsId(marketNews->getGoodsId());
                gameGood->setGoodsPrice(0);
                gameGood->setGoodsQualtity(marketNews->getGoodsAmount());

                m_player->m_vecGoods.push_back(gameGood);
            }
        }


        /**处理受伤事件*/
        void dealHurt(Event*hurt){
            m_pEvent->showHurt(hurt);

            //直接扣生命值
            m_player->setPlayerHealth(m_player->getPlayerHealth() - hurt->getPlayerHealth());
        }


        /**处理失窃事件*/
        void dealStolen(Event*stolen){
            m_pEvent->showStolen(stolen);

            //直接扣金钱
            m_player->setPlayerDeposit(m_player->getPlayerDeposit() - stolen->getLoseMoney());
            //判断如果金钱为负，转为负债
            if(m_player->getPlayerDeposit<0){
                m_player->setPlayerDebt(m_player->getPlayerDeposit());
                m_player->setPlayerDeposit(0);
            }

        }
    private:

};
#endif // EVENTCONTROLLER_H_INCLUDED
