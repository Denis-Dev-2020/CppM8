#pragma once
#include "Board.hpp"
#include "Player.hpp"
#include "City.hpp"
#include "Color.hpp"

namespace pandemic
{
    class FieldDoctor : public Player
    {
    public:
        FieldDoctor(Board &b, City c) : Player(b, c, "FieldDoctor"){};
        ~FieldDoctor(){};
        virtual Player &treat(City c);
    };
}