#include "Medic.hpp"

using namespace std;
using namespace pandemic;




Player &Medic::drive(City c)
{
  if (c==city){
         throw std::invalid_argument("you are already here! " + get_city(city));
    }
    
    if(pandemic::Board::check_sib(city,c)){
        city=c;
    }
    else{
        throw std::invalid_argument("no connection to : " + get_city(c));
    }
    treat_auto();
    return *this;
}

Player &Medic::fly_direct(City c)
{
    if (c==city){
         throw std::invalid_argument("you are already here! " + get_city(city));
    }

    if(all_cards.count(c)==0){
          throw std::invalid_argument("you dont have card of  " + get_city(c));
    }

        
        all_cards.erase(c);
        city=c;
    
    treat_auto();
    return *this;
    
}

Player &Medic::fly_charter(City c)
{
    if (c==city){
         throw std::invalid_argument("you are already here! " + get_city(city));
    }
    if(all_cards.count(city)==0){
          throw std::invalid_argument("you dont have card of  " + get_city(city));
    }

        city=c;
        all_cards.erase(city);
    
    treat_auto();
    return *this;
}

Player &Medic::fly_shuttle(City c)
{
    if (c==city){
         throw std::invalid_argument("you are already here! " + get_city(city));
    }
    if (!my_board.check_station(city)){
         throw std::invalid_argument("you dont have station in your city!  " + get_city(city));
    }
    if (!my_board.check_station(c)){
         throw std::invalid_argument("there is no station at :  " + get_city(city));
    }
    city=c;
    treat_auto();
    return *this;
    
}

Player &Medic::treat(City c)
{
    if (city!=c){
        throw std::invalid_argument("you cant treat city you not in ");
    }
     // check if cured or not 
    if (my_board[c]==0){
        throw std::invalid_argument("already cured");
    }

        my_board.set_cubes(c,0);
   

    return *this;
}