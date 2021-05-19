#include "Player.hpp"

using namespace std;
using namespace pandemic;
const int FIVE =5;
void check_no_here(City from,City to){
    if (to==from){
         throw std::invalid_argument("you are already here! " + get_city(from));
    }
}


Player &Player::take_card(City c)
{
    all_cards.insert(c);
    return *this;
}

Player &Player::remove_cards()
{
   set<City> a;
   all_cards=a;
   return *this;
}

Player &Player::drive(City c)
{
   check_no_here(city,c);
    
    if(pandemic::Board::check_sib(city,c)){
        city=c;
    }
    else{
        throw std::invalid_argument("no connection to : " + get_city(c));
    }
    return *this;
    
    
}

Player &Player::fly_direct(City c)
{
   check_no_here(city,c);

    if(all_cards.count(c)==0){
          throw std::invalid_argument("you dont have card of  " + get_city(c));
    }
    
        city=c;
        all_cards.erase(c);
    
    return *this;
}

Player &Player::fly_shuttle(City c)
{
    
    check_no_here(city,c);
    if (!my_board.check_station(city)){
         throw std::invalid_argument("you dont have station in your city!  " + get_city(city));
    }
    if (!my_board.check_station(c)){
         throw std::invalid_argument("there is no station at :  " + get_city(city));
    }
    city=c;
    return *this;

    
    
}

Player &Player::fly_charter(City c)
{
    check_no_here(city,c);
    if(all_cards.count(city)==0){
          throw std::invalid_argument("you dont have card of  " + get_city(city));
    }
    
       
        all_cards.erase(city);
        city=c;
    
    return *this;

   
}

Player &Player::build()
{
    if(all_cards.count(city)==0){
          throw std::invalid_argument("you dont have card of " + get_city(city));
    }
    
        my_board.set_station(city);
        all_cards.erase(city);

    
    return *this;
    
    
}

Player &Player::discover_cure(Color c)
{
    int count =0;
    //check if there is a station 
    if (!my_board.check_station(city)){
         throw std::invalid_argument("you dont have station in your city! " + get_city(city));
    }
    
    //check if there is 5 from this color 
    set <City> counter;
     for (auto const &card:all_cards) {
         if (color_by_city.at(card)==c){
             count++;
             counter.insert(card);
             if (count==FIVE){
                 break;
             }
         }
     }
         //if les then five were found
         if (count<FIVE){
             throw std::invalid_argument("you dont have five cards " );
         }
         //if you find 5
         
             //build and drop the cards
             my_board.set_cured(c);
             
             for (auto const &card:counter){
                 all_cards.erase(card);
             }
         
    
    return *this;


   
}

Player &Player::treat(City c)
{
    if (city!=c){
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