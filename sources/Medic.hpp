#pragma once
#include "Board.hpp"
#include "Player.hpp"

namespace pandemic
{
    class Medic : public Player
    {
    public:
    void treat_auto(){
        
          if (my_board.check_cured(my_board.get_city_color(city)))
    {
        my_board.set_cubes(city,0);
    }
    }
        Medic(Board &my_board, City c) : Player(my_board, c, "Medic")
        {
           treat_auto();
        };
        ~Medic(){};
        Player &drive(City c);
        Player &fly_direct(City c);
        Player &fly_charter(City c);
        Player &fly_shuttle(City c);
        Player &treat(City c);
    };
}