//cpp
#include "tic_tac_toe.h"
#include<vector>



void tic_tac_toe::start_game(string first_player)
{
    if (first_player != "X" && first_player != "O") {
        throw std::invalid_argument("Please enter X or O: " + first_player);
    }
    
    player = first_player[0];
    clear_board();
}
string tic_tac_toe::get_player() const{
    return player;
}
bool tic_tac_toe::game_over() {
    return check_board_full();
}

void tic_tac_toe::set_next_player(){
   if (player == "X") {
        player = "O";
    }
    else {
        player = "X";
    }
}
void tic_tac_toe::mark_board(int position){
    pegs[position - 1] = player;
    set_next_player();
}
void tic_tac_toe::display_board() const{
    for (int i = 0; i < pegs.size(); i++) {
        if (i % 3 == 0 && i != 0) {
            std::cout << std::endl << "---------" << std::endl;
        }
        if (pegs[i] == "X" || pegs[i] == "O") {
            std::cout << " " << pegs[i] << " ";
        }
        else {
            std::cout << "   ";
        }
        if (i % 3 != 2) {
            std::cout << "|";
        }
    
    }
    std::cout << std::endl;
}
bool tic_tac_toe::check_board_full() {
    for (auto peg : pegs) {
        if (peg == " ") {
            return false;
        }
    }
    return true;
}
 void tic_tac_toe::clear_board(){
    for (int i = 0; i < 9; i++) {
        pegs[i] = " ";
    }
 }