#pragma once
#include "Board.hpp"
#include "Player.hpp"
#include "City.hpp"
#include "Color.hpp"

namespace pandemic
{
    class GeneSplicer : public Player
    {
    public:
        GeneSplicer(Board &b, City c) : Player(b, c, "GeneSplicer"){};
        ~GeneSplicer(){};
        virtual Player &discover_cure(Color c);
    };
}