/*
Author: Donald Jackson
Date: 05/05/2024
Language / File: boggle.h 
Desc: This header contains the necessary constants, prototypes and libraries to create the Game "boggle" featured here: https://en.wikipedia.org/wiki/Boggle
*/ 


#ifndef Boggle_H
#define Boggle_H


// include libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


// Macro, Constant, and External variable decalrations
#define ROWS 4  // Number of Rows
#define COLS 4  // Number of Columns 
#define LETTERS 26  // Number of Letters
#define DICE 16 // number of dice


#define SIDES 6 // number of sides on dice
#define TRUE 1  
#define FALSE 0
#define SPACE ' '


// Function Prototypes
void welcomeScreen(void);
void clearScreen(void);
void displayExplicitBoard(void);
void createBoard(char dice[DICE][SIDES], char board[ROWS][COLS], int usedDie[DICE]);


void displayBoard(char board[ROWS][COLS]);
char getLetter(char dice[DICE][SIDES], int row);
void displayDice(char dice[DICE][SIDES]);



#endif // Boggle_H Included
