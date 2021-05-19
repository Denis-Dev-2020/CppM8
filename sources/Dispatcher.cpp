#include "Dispatcher.hpp"

using namespace std;
using namespace pandemic;

Player &Dispatcher::fly_direct(City c)
{
     // check we are no in the same city
    if (c==city){
         throw std::invalid_argument("you are already here! " + get_city(city));
    }

     // if you done have station
   if (!my_board.check_station(city)){
          

     if(all_cards.count(c)==0){
          throw std::invalid_argument("you dont have card of and no station in your city! " + get_city(c));
     }
    
        city=c;
        all_cards.erase(c);

    }
    city=c;
    
    return *this;

}
// Player &Dispatcher::fly_direct(City c)
// {
//      // check we are no in the same city
//     if (c==city){
//          throw std::invalid_argument("you are already here! " + get_city(city));
//     }




//      // if you got station just fly
//    if (my_board.check_station(city)){
//           city=c;  
//     }

//     //if no station check if there is a card
//     if (!(my_board.check_station(city))){
         
    

//           if(all_cards.count(c)==0)
//           {
//           throw std::invalid_argument("you dont have card of and no station in your city! " + get_city(c));
//           }
    
//         city=c;
//         all_cards.erase(c);
//     }
    
    
//     return *this;

// }