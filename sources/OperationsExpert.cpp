#include "OperationsExpert.hpp"

using namespace std;
using namespace pandemic;

Player &OperationsExpert::build()
{
     
        my_board.set_station(city);
        all_cards.erase(city);

    
    return *this;
    
}