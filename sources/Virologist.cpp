#include "Virologist.hpp"

using namespace std;
using namespace pandemic;

Player &Virologist::treat(City c)
{
    bool flag=false;
    //if he is in the city or you have card keep going
    if (city!=c){
        flag =true;
        //if you not in the city cheeck if you got card 
       if(all_cards.count(c)==0){
        throw std::invalid_argument("you dont have card for this city! ");
    }
    }
        // check if cured or not 
    if (my_board[c]==0){
        throw std::invalid_argument("no need to cure");
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
    //check if we need to drop a card.
    if (flag){
        all_cards.erase(c);
    }
    return *this;
}