#pragma once
#include "Board.hpp"
#include "Player.hpp"
#include "City.hpp"
#include "Color.hpp"

namespace pandemic
{
    class OperationsExpert : public Player
    {
    public:
        OperationsExpert(Board &b, City c) : Player(b, c, "OperationsExpert"){};
        ~OperationsExpert(){};
        virtual Player &build();
    };
}