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
    welcomeScreen();
    clearScreen();
    displayExplicitBoard();
    return 0; // return 0 on successful operation
}