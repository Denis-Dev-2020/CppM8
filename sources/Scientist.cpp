#include "Scientist.hpp"

using namespace std;
using namespace pandemic;

Player &Scientist::discover_cure(Color c)
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
             if (count==n){
                 break;
             }
         }
     }
         //if les then five were found
         if (count<n){
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