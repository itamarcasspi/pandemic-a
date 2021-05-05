#pragma once
#include "City.hpp"
#include "Board.hpp"
#include "Player.hpp"

namespace pandemic{

    class FieldDoctor : public Player{

        public:
        FieldDoctor(Board b, City c) : Player(b,c){

        }
    };
}