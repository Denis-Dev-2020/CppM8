#pragma once
#include "Board.hpp"
#include "Player.hpp"
#include "City.hpp"
#include "Color.hpp"

namespace pandemic
{
    class Researcher : public Player
    {
    public:
        Researcher(Board &b, City c) : Player(b, c, "Researcher"){};
        ~Researcher(){};
        virtual Player &discover_cure(Color c);
    };
}