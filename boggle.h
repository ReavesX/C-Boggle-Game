/*
Author: Donald Jackson
Date: 05/05/2024
Language / File: main.c
Desc: This program will play the Game boggle featured here: https://en.wikipedia.org/wiki/Boggle
*/


#ifndef Boggle_H
#define Boggle_H

// Macro, Constant, and External variable decalrations
#define ROWS 4  // Number of Rows
#define COLS 4  // Number of Columns 
#define LETTERS 26  // Number of Letters


extern char character;
extern int row;
extern int col;
extern int num;
extern char letter;

// Function Prototypes
void welcomeScreen();
void clearScreen();
void displayExplicitBoard();

#endif // Boggle_H Included
