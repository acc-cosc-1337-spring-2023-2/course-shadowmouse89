//h
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using std::string;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H


class tic_tac_toe{

    public:
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const;
    void display_board() const;
    void clear_board();
    private:
    bool check_board_full();
    string player;
    std::vector<std::string> pegs = std::vector<std::string>(9, " ");
    void set_next_player();

};

#endif