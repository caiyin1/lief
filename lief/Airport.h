#ifndef AIRPORT_H
#define AIRPORT_H

#include "GameSences.h"

class Airport : public GameSences
{
    public:
        Airport() : GameSences(ENUM_SENCES_AIRPORT, "机场") {}
        virtual ~Airport();

        void leave();
};

#endif // AIRPORT_H
