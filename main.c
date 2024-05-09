/*
Author: Donald Jackson
Date: 05/05/2024
Language / File: main.c
Desc: This program will play the Game boggle featured here: https://en.wikipedia.org/wiki/Boggle
*/


// include the following libraries
#include <stdio.h>
#include <stdlib.h>
#include "boggle.h"

int main(void)
{
    char dice[DICE][SIDES] = {
     {'R', 'I', 'F', 'O', 'B', 'X'},
     {'I', 'F', 'E', 'H', 'E', 'Y'},
     {'D', 'E', 'N', 'O', 'W', 'S'},
     {'U', 'T', 'O', 'K', 'N', 'D'},
     {'H', 'M', 'S', 'R', 'A', 'O'},
     {'L', 'U', 'P', 'E', 'T', 'S'},
     {'A', 'C', 'I', 'T', 'O', 'A'},
     {'Y', 'L', 'G', 'K', 'U', 'E'},
     {'Q', 'B', 'M', 'J', 'O', 'A'},
     {'E', 'H', 'I', 'S', 'P', 'N'},
     {'V', 'E', 'T', 'I', 'G', 'N'},
     {'B', 'A', 'L', 'I', 'Y', 'T'},
     {'E', 'Z', 'A', 'V', 'N', 'D'},
     {'R', 'A', 'L', 'E', 'S', 'C'},
     {'U', 'W', 'I', 'L', 'R', 'G'},
     {'P', 'A', 'C', 'E', 'M', 'D'}
    };


    char board[ROWS][COLS];
    int usedDie[DICE];

    memset(usedDie, 0, sizeof(usedDie));
    srand(time(0));
    welcomeScreen();
    clearScreen();

    displayExplicitBoard();
    clearScreen(); // Clear the screen before generating the randomized board
    createBoard(dice, board, usedDie);
    displayBoard(board);
    return 0;
}