// CS201R_PGM4_Games.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// NAME: SHRUTHIKA UDUTHURI
// DATE: 19/09/2024
// PROGRAM: Games
// This assignment was written with the help of LLM's

/* Prompt: Write a boiler plate C++ code to develop the following games.
1. Craps
2. Scraps
3. Rock, Paper & Scissors
4. Rock, Paper, Scissors & Spock
5. BlackJack
6. Hangman
*/

#include "Games.h"
#include "Functions.h"

int main()
{
    cout << "Welcome to My Games!\n";
    string choice;
    do
    {
        // Display the menu and get user's choice
        choice = menu();

        if (isMenuItem(choice))
        {
            if (choice == "C")
            {
                craps();
            }
            else if (choice == "S")
            {
                scraps();
            }
            else if (choice == "R")
            {
                rockPaperScissors();
            }
            else if (choice == "E")
            {
                rockPaperScissorsSpock();
            }
            else if (choice == "B")
            {
                blackjack();
            }
            else if (choice == "H")
            {
                hangman();
            }
        }
        else
        {
            cout << "Invalid choice. Please select a valid game or Q to quit.\n";
        }
    } while (choice != "Q");

    cout << "Thanks for playing!\n";
    return 0;
}
