#include "Board.hpp"
#include "City.hpp"
using namespace std;
using namespace pandemic;

Board::Board()
{
   
}

bool Board::is_clean()
{
   for (auto const &current_unit:cubes_data) {
        if (current_unit.second!=0){
            return false;
        }

    }
    return true;
}

int &Board::operator[](City c)
{
  return cubes_data[c];
}

void Board::remove_cures()
{
  set<Color> a;
  this->cured_dises=a;
}

void Board::remove_stations()
{
   set<City> a;
   station_list=a;
}

ostream &pandemic::operator<<(ostream &os, const Board &b)
{

    
    os<<"city and level of diesies:"<<endl;
     for (auto const &current_unit:b.cubes_data) {
         os<<current_unit.first<<" : " <<current_unit.second<<endl;
    }
    os<<"cure found for : "<<endl;
     for (auto const &current_unit:b.cured_dises) {
         os<<current_unit<<endl;
    }
    os<<"station is in : "<<endl;
     for (auto const &current_unit:b.station_list) {
         os<<current_unit<<endl;
    }

    return os;
}

Color Board::get_city_color(City c)
{
    return pandemic::color_by_city.at(c);
}

void Board::set_station(City c)
{
  station_list.insert(c);

}

void Board::set_cured(Color c)
{
   cured_dises.insert(c);
}

void Board::set_cubes(City c, int n)
{
    cubes_data[c]=n;
   
}

bool Board::check_station(City c){
bool flag=true;
if (station_list.count(c)==0){
    flag= false;
}
return flag;

}
bool Board::check_cured(Color c){
bool flag=true;
if (cured_dises.count(c)==0){
   flag=false;
}
return flag;

}
bool Board::check_sib(City from,City to){
bool flag=true;
if(board_map[from].count(to)==0)
    
                    {
                        flag =false;    
                    }
                    return flag;
         }

std::map<pandemic::City, std::set<pandemic::City>> Board::board_map =
    {
        {City::Algiers, {City::Madrid, City::Paris, City::Istanbul, City::Cairo}},
        {City::Atlanta, {City::Chicago, City::Miami, City::Washington}},
        {City::Baghdad, {City::Tehran, City::Istanbul, City::Cairo, City::Riyadh, City::Karachi}},
        {City::Bangkok, {City::Kolkata, City::Chennai, City::Jakarta, City::HoChiMinhCity, City::HongKong}},
        {City::Beijing, {City::Shanghai, City::Seoul}},
        {City::BuenosAires, {City::Bogota, City::SaoPaulo}},
        {City::Bogota, {City::MexicoCity, City::Lima, City::Miami, City::SaoPaulo, City::BuenosAires}},
        {City::Cairo, {City::Algiers, City::Istanbul, City::Baghdad, City::Khartoum, City::Riyadh}},
        {City::Chennai, {City::Mumbai, City::Delhi, City::Kolkata, City::Bangkok, City::Jakarta}},
        {City::Chicago, {City::SanFrancisco, City::LosAngeles, City::MexicoCity, City::Atlanta, City::Montreal}},
        {City::Delhi, {City::Tehran, City::Karachi, City::Mumbai, City::Chennai, City::Kolkata}},
        {City::Essen, {City::London, City::Paris, City::Milan, City::StPetersburg}},
        {City::HoChiMinhCity, {City::Jakarta, City::Bangkok, City::HongKong, City::Manila}},
        {City::HongKong, {City::Bangkok, City::Kolkata, City::HoChiMinhCity, City::Shanghai, City::Manila, City::Taipei}},
        {City::Istanbul, {City::Milan, City::Algiers, City::StPetersburg, City::Cairo, City::Baghdad, City::Moscow}},
        {City::Jakarta, {City::Chennai, City::Bangkok, City::HoChiMinhCity, City::Sydney}},
        {City::Johannesburg, {City::Kinshasa, City::Khartoum}},
        {City::Karachi, {City::Tehran, City::Baghdad, City::Riyadh, City::Mumbai, City::Delhi}},
        {City::Khartoum, {City::Cairo, City::Lagos, City::Kinshasa, City::Johannesburg}},
        {City::Kinshasa, {City::Lagos, City::Khartoum, City::Johannesburg}},
        {City::Kolkata, {City::Delhi, City::Chennai, City::Bangkok, City::HongKong}},
        {City::Lagos, {City::SaoPaulo, City::Khartoum, City::Kinshasa}},
        {City::Lima, {City::MexicoCity, City::Bogota, City::Santiago}},
        {City::London, {City::NewYork, City::Madrid, City::Essen, City::Paris}},
        {City::LosAngeles, {City::SanFrancisco, City::Chicago, City::MexicoCity, City::Sydney}},
        {City::Madrid, {City::London, City::NewYork, City::Paris, City::SaoPaulo, City::Algiers}},
        {City::Manila, {City::HongKong, City::Taipei, City::SanFrancisco, City::HoChiMinhCity, City::Sydney}},
        {City::MexicoCity, {City::LosAngeles, City::Chicago, City::Miami, City::Lima, City::Bogota}},
        {City::Miami, {City::Atlanta, City::MexicoCity, City::Washington, City::Bogota}},
        {City::Milan, {City::Essen, City::Paris, City::Istanbul}},
        {City::Montreal, {City::Chicago, City::Washington, City::NewYork}},
        {City::Moscow, {City::StPetersburg, City::Istanbul, City::Tehran}},
        {City::Mumbai, {City::Karachi, City::Delhi, City::Chennai}},
        {City::NewYork, {City::Montreal, City::Washington, City::London, City::Madrid}},
        {City::Osaka, {City::Taipei, City::Tokyo}},
        {City::Paris, {City::Algiers, City::Essen, City::Madrid, City::Milan, City::London}},
        {City::Riyadh, {City::Baghdad, City::Cairo, City::Karachi}},
        {City::SanFrancisco, {City::LosAngeles, City::Chicago, City::Tokyo, City::Manila}},
        {City::Santiago, {City::Lima}},
        {City::SaoPaulo, {City::Bogota, City::BuenosAires, City::Lagos, City::Madrid}},
        {City::Seoul, {City::Beijing, City::Shanghai, City::Tokyo}},
        {City::Shanghai, {City::Beijing, City::HongKong, City::Taipei, City::Seoul, City::Tokyo}},
        {City::StPetersburg, {City::Essen, City::Istanbul, City::Moscow}},
        {City::Sydney, {City::Jakarta, City::Manila, City::LosAngeles}},
        {City::Taipei, {City::Shanghai, City::HongKong, City::Osaka, City::Manila}},
        {City::Tehran, {City::Baghdad, City::Moscow, City::Karachi, City::Delhi}},
        {City::Tokyo, {City::Seoul, City::Shanghai, City::Osaka, City::SanFrancisco}},
        {City::Washington, {City::Atlanta, City::NewYork, City::Montreal, City::Miami}}


         

};
