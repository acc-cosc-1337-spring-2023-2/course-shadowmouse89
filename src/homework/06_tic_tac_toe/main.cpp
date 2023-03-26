#include <iostream>
#include "tic_tac_toe.h"

int main() {
    std::string first_player;
    std::cout << "Enter first player (X or O): ";
    std::cin >> first_player;
    tic_tac_toe game;
    game.start_game(first_player);

    bool continue_playing = true;
    while (continue_playing) {
        int position;
        while (!game.game_over()) {
            std::cout << "Player " << game.get_player() << ", enter a position (1-9): ";
            std::cin >> position;
            game.mark_board(position);
            game.display_board();
        }

        std::cout << "Game over!" << std::endl;
        std::cout << "Enter 'C' to continue playing, or any other key to exit: ";
        char choice;
        std::cin >> choice;
        if (choice != 'C' && choice != 'c') {
            continue_playing = false;
        }
        else {
            game.clear_board();
            game.start_game(first_player);
        }
    }
    return 0;
}
