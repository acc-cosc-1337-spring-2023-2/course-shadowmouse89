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
    string get_winner();

    private:
    bool check_board_full();
    string player;
    std::vector<std::string> pegs = std::vector<std::string>(9, " ");
    void set_next_player();
    string winner;
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();

};

#endif