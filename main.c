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
    char dice[DICE][SIDES];
    char board[ROWS][COLS];
    int usedDie[DICE];


    memset(usedDie[DICE], 0, sizeof(usedDie[DICE]));
    memset(board[ROWS][COLS], SPACE, sizeof(board[ROWS][COLS]));

    srand(time(0));
    welcomeScreen();
    clearScreen();


    /* displayExplicitBoard();
     clearScreen(); */


    displayDice(dice[DICE][SIDES]);
    clearScreen();
    createBoard(dice[DICE][SIDES], board[ROWS][COLS], usedDie[DICE]);
    displayBoard(board[ROWS][COLS]);
    return 0;
}