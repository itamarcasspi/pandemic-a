#include "Board.hpp"


namespace pandemic{

        bool Board::is_clean(){
            return false;
        }

        void Board::remove_cures(){

        }

        int& Board::operator[](City c){
            
            return Board::disease_levels[c];
        }        


        ostream& operator<<(std::ostream &os,const Board &a){
            return os;
        }
}