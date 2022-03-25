#include <iostream>
#include <string.h>

char board[4][4];

int user1_move_row;
int user1_move_column;

int user2_move_row;
int user2_move_column;

void create_board() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = '_';
        }
    }
}

void user1_turn() {
    
    

    std::cout << "What row user1?\n";
    std::cin >> user1_move_row;
    std::cout << "What column user1?\n";
    std::cin >> user1_move_column;

    while (board[user1_move_row][user1_move_column] != '_') { // puts an x if there is a open space
        std::cout << "That move is invalid\n";
        std::cout << "What row user1?\n";
        std::cin >> user1_move_row;
        std::cout << "What column user1?\n";
        std::cin >> user1_move_column;
    }
    if (board[user1_move_row][user1_move_column] == '_') {
        board[user1_move_row][user1_move_column] = 'X';
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
        std::cout << board[i][j] << " ";
    }   std::cout << "\n";
}
}

void user2_turn() {


    std::cout << "What row user2?\n";
    std::cin >> user2_move_row;
    std::cout << "What column user2?\n";
    std::cin >> user2_move_column;

    while (board[user2_move_row][user2_move_column] != '_') {
        std::cout << "That move is invalid\n";
        std::cout << "What row user2?\n";
        std::cin >> user2_move_row;
        std::cout << "What column user1?\n";
        std::cin >> user2_move_column;
    }
    if (board[user2_move_row][user2_move_column] == '_') {
        board[user2_move_row][user2_move_column] = 'O';
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
        std::cout << board[i][j] << " ";
    }   std::cout << "\n";
}
}

void check_winner1() {
    bool winner = false;
while (winner == false) {
    std::string line = "";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            line += board[i][j];
            if (line == "XXX") {
                std::cout << "user1 Wins!\n"; // checks each row for a possible row of 3 x's
                winner = true;
                break;
                
            }

        }
        line = "";
    }
    line = "";
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            line += board[i][j];
            if (line == "XXX") {
                std::cout << "user1 Wins!\n"; // checks each column for a possible column of 3 x's
                winner = true;
                break;
            }
        }
        line = "";
    }
    if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') { // checks the two diagonals
        std::cout << "user1 Wins!\n";
        winner = true;
        break;
    }
    else if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X') {
        std::cout << "user1 Wins!\n";
        winner = true;
        break;
    }
    break;
}
}

void check_winner2() {
    bool winner = false;
while (winner == false) {
     std::string line = "";
     for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            line += board[i][j];
            if (line == "OOO") {
                std::cout << "user2 Wins!\n"; // checks all 3 rows for possible row of 3 o's
                winner = true;
                break;
            }

        }
        line = "";
    }
    line = "";
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            line += board[i][j];
            if (line == "OOO") {
                std::cout << "user2 Wins!\n"; // checks all 3 columnns for a possible column of 3 o's
                winner = true;
                break;
            }
        }
        line = "";
    }
    if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') { // checks the diagonals
        std::cout << "user2 Wins!\n";
        winner = true;
        break;
    }
    else if (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O') {
        std::cout << "user2 Wins!\n";
        winner = true;
        break;
    }
    break;
    }
}




