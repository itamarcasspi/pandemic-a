#pragma once

#include <iostream>
#include "City.hpp"
#include <unordered_map>
using namespace std;



namespace pandemic
{
    class Board{

        unordered_map<City,int> disease_levels;

        public:
        Board(){}

        int& operator[](City c);

        bool is_clean();

        void remove_cures();

        friend ostream& operator<<(std::ostream &os,const Board &a);
        
    };

}