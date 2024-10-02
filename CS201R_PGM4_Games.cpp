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
