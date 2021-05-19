#pragma once
#include "Board.hpp"
#include "City.hpp"
#include <set>

namespace pandemic
{
    const int FIVE = 5;

    class Player
    {
    protected:
        Board &my_board;
        City city;
        std::string r;
        std::set<City> all_cards;

    public:
        Player(Board &b, City c, std::string r = "Player") : r(r), my_board(b), city(c){};
        ~Player(){};
        Player &take_card(City c);
        Player &remove_cards();
        
        virtual Player &drive(City c);
        virtual Player &fly_charter(City c);
        virtual Player &fly_shuttle(City c);
        virtual Player &fly_direct(City c);
        virtual Player &build();
        virtual Player &discover_cure(Color c);
        virtual Player &treat(City c);
        std::string &role() { return r; };
    };
}