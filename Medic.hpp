#pragma once
#include "City.hpp"
#include "Board.hpp"
#include "Player.hpp"

namespace pandemic{

    class Medic : public Player{

        public:
        Medic(Board b, City c) : Player(b,c){

        }
    };

}