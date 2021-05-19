#pragma once
#include "Board.hpp"
#include "Player.hpp"
#include "City.hpp"
#include "Color.hpp"

namespace pandemic
{
    class Scientist : public Player
    {
        int n;

    public:
        Scientist(Board &b, City c, int n) : Player(b, c, "Scientist"), n(n){};
        ~Scientist(){};
        virtual Player &discover_cure(Color c);
    };
}