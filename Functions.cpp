#include "Functions.h"


bool isMenuItem(string str) {
    return str.find_first_not_of("BSCREHQ") == string::npos;
}

string menu() {
    string choice;
    cout << "\nYour Games List\n";
    cout << "C - Craps\n";
    cout << "S - Scraps\n";
    cout << "R - Rock, Paper, Scissors\n";
    cout << "E - Rock, Paper, Scissors, Spock\n";
    cout << "B - Blackjack\n";
    cout << "H - Hangman\n";
    cout << "Q - Quit\n";
    cout << "What game would you like to play? ";
    cin >> choice;

    // Convert choice to uppercase
    for (auto &c : choice) c = toupper(c);

    return choice;
}