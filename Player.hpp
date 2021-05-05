#pragma once
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"

namespace pandemic
{
    class Player
    {

    public:
        Player(Board& b,City c){

        }

        Player &take_card(City city);

        Player &build();

        Player &drive(City city);

        Player &fly_charter(City city);

        Player &fly_shuttle(City city);

        Player &fly_direct(City city);

        Player &discover_cure(Color color);

        Player &treat(City city);

        string role();
    };
}