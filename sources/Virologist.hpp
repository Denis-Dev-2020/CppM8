#pragma once
#include "Board.hpp"
#include "Player.hpp"
#include "City.hpp"
#include "Color.hpp"

namespace pandemic
{
    class Virologist : public Player
    {
    public:
        Virologist(Board &b, City c) : Player(b, c, "Virologist"){};
        ~Virologist(){};
        virtual Player &treat(City c);
    };
}