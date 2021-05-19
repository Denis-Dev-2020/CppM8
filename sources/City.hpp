#pragma once
#include "Color.hpp"

namespace pandemic
{
    enum City
    {
        Algiers,
        Atlanta,
        Baghdad,
        Bangkok,
        Beijing,
        Bogota,
        BuenosAires,
        Cairo,
        Chennai,
        Chicago,
        Delhi,
        Essen,
        HoChiMinhCity,
        HongKong,
        Istanbul,
        Jakarta,
        Johannesburg,
        Karachi,
        Khartoum,
        Kinshasa,
        Kolkata,
        Lagos,
        Lima,
        London,
        LosAngeles,
        Madrid,
        Manila,
        MexicoCity,
        Miami,
        Milan,
        Montreal,
        Moscow,
        Mumbai,
        NewYork,
        Osaka,
        Paris,
        Riyadh,
        SanFrancisco,
        Santiago,
        SaoPaulo,
        Seoul,
        Shanghai,
        StPetersburg,
        Sydney,
        Taipei,
        Tehran,
        Tokyo,
        Washington
    };

    inline std::string get_city(City c)
    {
        switch (c)
        {
        case Algiers:
            return "Algiers";
            break;
        case Atlanta:
            return "Atalanta";
            break;
        case Baghdad:
            return "Baghdad";
            break;
        case Bangkok:
            return "Bangkok";
            break;
        case Beijing:
            return "Beijing";
            break;
        case Bogota:
            return "Bogota";
            break;
        case BuenosAires:
            return "BuenosAires";
            break;
        case Cairo:
            return "Cairo";
            break;
        case Chennai:
            return "Chennai";
            break;
        case Chicago:
            return "Chicago";
            break;
        case Delhi:
            return "Delhi";
            break;
        case Essen:
            return "Essen";
            break;
        case HoChiMinhCity:
            return "HoChiMinCity";
            break;
        case HongKong:
            return "HongKong";
            break;
        case Istanbul:
            return "Istanbul";
            break;
        case Jakarta:
            return "Jakarta";
            break;
        case Johannesburg:
            return "Johannesburg";
            break;
        case Karachi:
            return "Karachi";
            break;
        case Khartoum:
            return "Khartoum";
            break;
        case Kinshasa:
            return "Kinshasa";
            break;
        case Kolkata:
            return "Kolkata";
            break;
        case Lagos:
            return "Lagos";
            break;
        case Lima:
            return "Lima";
            break;
        case London:
            return "London";
            break;
        case LosAngeles:
            return "LosAngeles";
            break;
        case Madrid:
            return "Madrid";
            break;
        case Manila:
            return "Manila";
            break;
        case MexicoCity:
            return "MexicoCity";
            break;
        case Miami:
            return "Miami";
            break;
        case Milan:
            return "Milan";
            break;
        case Montreal:
            return "Montreal";
            break;
        case Moscow:
            return "Moscow";
            break;
        case Mumbai:
            return "Mumbai";
            break;
        case NewYork:
            return "NewYork";
            break;
        case Osaka:
            return "Osaka";
            break;
        case Paris:
            return "Paris";
            break;
        case Riyadh:
            return "Riyadh";
            break;
        case SanFrancisco:
            return "SanFrancisco";
            break;
        case Santiago:
            return "Santiago";
            break;
        case SaoPaulo:
            return "SaoPaulo";
            break;
        case Seoul:
            return "Seoul";
            break;
        case Shanghai:
            return "Shanghai";
            break;
        case StPetersburg:
            return "StPetersburg";
            break;
        case Sydney:
            return "Sydney";
            break;
        case Taipei:
            return "Taipei";
            break;

        case Tehran:
            return "Tehran";
            break;

        case Tokyo:
            return "Tokyo";
            break;

        case Washington:
            return "Washington";
            break;
        };
    }

    const std::map<const City, const Color> color_by_city{
        {Algiers, Black},
        {Atlanta, Blue},
        {Baghdad, Black},
        {Bangkok, Red},
        {Beijing, Red},
        {Bogota, Yellow},
        {BuenosAires, Yellow},
        {Cairo, Black},
        {Chennai, Black},
        {Chicago, Blue},
        {Delhi, Black},
        {Essen, Blue},
        {HoChiMinhCity, Red},
        {HongKong, Red},
        {Istanbul, Black},
        {Jakarta, Red},
        {Johannesburg, Yellow},
        {Karachi, Black},
        {Khartoum, Yellow},
        {Kinshasa, Yellow},
        {Kolkata, Black},
        {Lagos, Yellow},
        {Lima, Yellow},
        {London, Blue},
        {LosAngeles, Yellow},
        {Madrid, Blue},
        {Manila, Red},
        {MexicoCity, Yellow},
        {Miami, Yellow},
        {Milan, Blue},
        {Montreal, Blue},
        {Moscow, Black},
        {Mumbai, Black},
        {NewYork, Blue},
        {Osaka, Red},
        {Paris, Blue},
        {Riyadh, Black},
        {SanFrancisco, Blue},
        {Santiago, Yellow},
        {SaoPaulo, Yellow},
        {Seoul, Red},
        {Shanghai, Red},
        {StPetersburg, Blue},
        {Sydney, Red},
        {Taipei, Red},
        {Tehran, Black},
        {Tokyo, Red},
        {Washington, Blue},
    };
    
}