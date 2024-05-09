/*
Author: Donald Jackson
Date: 05/05/2024
Language / File: boggle.c
Desc: This file hosts the necessary functions to create the Game "boggle" featured here: https://en.wikipedia.org/wiki/Boggle
*/



#include "boggle.h"


// Welcome Screen function provides users with the rules as well as the title of the game they will be playing
void welcomeScreen(){
printf("BBBBB    OOOO     GGGGG     GGGGG   LL      EEEEEE\n");
printf("BB  BB  OO  OO   GG        GG       LL      EE\n");
printf("BBBBB   OO  OO   GG        GG       LL      EEEE\n");
printf("BB  BB  OO  OO   GG  GGG   GG  GGG  LL      EE\n");
printf("BBBBB    OOOO     GGGGGG    GGGGGG  LLLLLL  EEEEEE\n");
printf("\n");
printf("\n");
printf("\n");
printf("RULES OF THE GAME:\n");
printf("    1. The player is presented with a Boggle board.\n");
printf("    2. The player will have three minutes to find as many words as possible.\n");
printf("    3. Words must contain three letters or more\n");
printf("    4. Words are formed from adjoining letters.\n");
printf("    5. Letters must join in the proper sequence to spell a word.\n");
printf("    6. Letters may join horizontally, vertically, or diagonally, to the left, right, up or down\n");
printf("    7. No letter cube may be used more than once in a single word.\n");
printf("    8. Words submitted will be scored accordingly.\n");
printf("    9. Good luck!\n");}




// Clear Screen function clears the screen 
void clearScreen() 
{
    char character;
    printf("Hit <ENTER> to continue! ");
    scanf("%c", &character);
    while (getchar() != '\n'); 
    system("cls");
}




// Display Explicit Board displays the board (given board with predetermined characters)
void displayExplicitBoard(){
    printf("|------------------------------------------------|\n");
    printf("|                   BOGGLE BOARD                 |\n");
    printf("|------------------------------------------------|\n");
    printf("|      T      |     A     |     O     |   C      |\n");
    printf("|------------------------------------------------|\n");
    printf("|      L      |     I     |     S     |   M      |\n");
    printf("|------------------------------------------------|\n");
    printf("|      U      |     N     |     B     |   I      |\n");
    printf("|------------------------------------------------|\n");
    printf("|      B      |     O     |     G     |   D      |\n");
    printf("|------------------------------------------------|\n");
 
}



// prints the new boggle board with randomized characters for 4x4 boggle board
void displayBoard(char board[ROWS][COLS]) {
    int row, col;

    printf("|---------------------------------------------------|\n");
    printf("|                   BOGGLE BOARD                    |\n");
    printf("|---------------------------------------------------|\n");

    for (row = 0; row < ROWS; row++) {
        for (col = 0; col < COLS; col++) {
            printf("|      %c     ", board[row][col]);
        }
        printf("|\n");
        printf("|---------------------------------------------------|\n");
    }
    clearScreen();
}


void displayDice(char dice[DICE][SIDES])
{
    int row, col;
    for (row = 0; row < ROWS; row++)
    {
        for (col = 0; col < COLS; col++)
        {
            printf("%c", dice[row][col]);
        }
    }
}

char getLetter(char dice[DICE][SIDES], int row)
{   
    int col;
    char letter;
    col = rand() % SIDES;
    letter = dice[row][col];
    return letter;
}


void createBoard(char dice[DICE][SIDES], char board[ROWS][COLS], int usedDie[DICE])
{
    int row, col, die;
    for (row = 0; row < ROWS; row++)
    {
        col = 0;
        while (col < COLS)
        {
            die = rand() % DICE;
            if (usedDie[die] == 0)
            {
                char letter = getLetter(dice, row);
                board[row][col] = letter;
                usedDie[die] = 1;
                col++;
            }
        }
    }
}