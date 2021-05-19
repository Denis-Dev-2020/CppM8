
#pragma once
#include <map>
#include <set>
#include <string>
#include <iostream>
#include "City.hpp"
#include "Color.hpp"

namespace pandemic
{

    class Board
    {
        static std::map<City, std::set<City>> board_map;
        std::set<City> station_list;
        std::map<City, int> cubes_data;
        std::set<Color> cured_dises;

    public:
        Board();
        ~Board(){};
        bool is_clean();
        int &operator[](City c);
        static Color get_city_color(City c);
        void set_station(City c);
        void set_cured(Color c);
        void set_cubes(City c, int n);
        void remove_cures();
        void remove_stations();
       static  bool check_sib(City from,City to);
        bool check_station(City c);
        bool check_cured(Color c);
        
        friend std::ostream &operator<<(std::ostream &os, const Board &b);
       
    };

}