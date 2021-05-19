#include "FieldDoctor.hpp"

using namespace std;
using namespace pandemic;

Player &FieldDoctor::treat(City c)
{
    //check if he is not in the city or sib.
   if (city!=c&&!pandemic::Board::check_sib(city,c)){
        throw std::invalid_argument("you cant treat city you not in ");
    }
    
    // check if cured or not 
    if (my_board[c]==0){
        throw std::invalid_argument("you dont have five cards");
    }

    // check if there is medicen
    if (my_board.check_cured(pandemic::Board::get_city_color(c)))
    {
        my_board.set_cubes(c,0);
    }

    else
    {
        my_board.set_cubes(c,my_board[c]-1);
    }

    return *this;
}