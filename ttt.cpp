#include <iostream>
#include <string.h>


void create_board();
void user1_turn();
void user2_turn();
void check_winner1();
void check_winner2();



int main() {

    create_board();
    user1_turn();
    user2_turn();
    user1_turn();
    user2_turn();
    user1_turn();
    check_winner1();
    user2_turn();
    check_winner2();
    user1_turn();
    check_winner1();
    user2_turn();
    check_winner2();
    user1_turn();
    check_winner1();
    user2_turn();
    check_winner2();
}
    







