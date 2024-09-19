#include "Games.h"
#include <cstdlib>  // for rand()
#include <ctime>    // for time()
#include <iomanip>  // for setting precision
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <fstream>
using namespace std;

// void craps() {}
// void scraps() {}

double sixRollDie() {
    return rand() % 6 + 1; // generates a random number between 1 and 6
}

double eightRollDie() {
    return rand() % 8 + 1;
}

void craps() {
    // Seed the random number generator with the current time
    srand(time(0));

    double netWorth = 50.00;
    char userChoice = 'Y';

    cout << "WELCOME TO CRAPS!" << endl;

    while (toupper(userChoice) == 'Y' && netWorth > 0) {
        double bet = 0.0;

        // Show the player's current net worth
        cout << fixed << setprecision(2) << "Your net worth is: $" << netWorth << endl;

        // Input bet and validate
        do {
            cout << "Please enter your bet: ";
            cin >> bet;

            if (bet > netWorth) {
                cout << "Your net worth is only: $" << netWorth << ". Please adjust your bet: ";
                cin >> bet;
            }
        } while (bet > netWorth);

        // Roll two dice
        int die1 = sixRollDie();
        int die2 = sixRollDie();
        int sum = die1 + die2;

        cout << "You rolled: " << die1 << " + " << die2 << " = " << sum << endl;

        // First roll win/loss conditions
        if (sum == 7 || sum == 11) {
            cout << "You Win!! ";
            netWorth += bet;  // Increase player's net worth by the bet amount
        }
        else if (sum == 2 || sum == 3 || sum == 12) {
            cout << "You Lost!! ";
            netWorth -= bet;  // Deduct the bet from the player's net worth
        }
        else {
            // Establish 'point'
            int point = sum;
            cout << "Point is: " << point << endl;

            // Keep rolling until point or 7 is rolled
            bool pointAchieved = false;
            while (true) {
                die1 = sixRollDie();
                die2 = sixRollDie();
                sum = die1 + die2;

                cout << "You rolled: " << die1 << " + " << die2 << " = " << sum << endl;

                if (sum == point) {
                    pointAchieved = true;
                    break;
                }
                else if (sum == 7) {
                    break;
                }
            }

            // Determine final outcome
            if (pointAchieved) {
                cout << "Yay, you Win!! ";
                netWorth += bet;
            }
            else {
                cout << "Sorry, but you lost!! ";
                netWorth -= bet;
            }
        }

        // Check if the player still has money
        if (netWorth <= 0) {
            cout << "You're out of money! Game over." << endl;
            break;
        }

        // Ask if the player wants to play again
        cout << fixed << setprecision(2) << "You now have: $" << netWorth << endl;
        cout << "Would you like to go again? (Y or N): ";
        cin >> userChoice;
        userChoice = toupper(userChoice);
    }

    if (netWorth > 0) {
        cout << "Thank you for playing! You leave with: $" << netWorth << endl;
    }
    
}

void scraps() {
    // Seed the random number generator with the current time
    srand(time(0));

    double netWorth = 50.00;
    char userChoice = 'Y';

    cout << "WELCOME TO SCRAPS!" << endl;

    while (toupper(userChoice) == 'Y' && netWorth > 0) {
        double bet = 0.0;

        // Show the player's current net worth
        cout << fixed << setprecision(2) << "Your net worth is: $" << netWorth << endl;

        // Input bet and validate
        do {
            cout << "Please enter your bet: ";
            cin >> bet;

            if (bet > netWorth) {
                cout << "Your net worth is only: $" << netWorth << ". Please adjust your bet: ";
                cin >> bet;
            }
        } while (bet > netWorth);

        // Roll two dice
        int die1 = eightRollDie();
        int die2 = eightRollDie();
        int die3 = eightRollDie();
        int sum = die1 + die2 + die3;

        cout << "You rolled: " << die1 << " + " << die2 << " + " << die3 << " = " << sum << endl;

        // First roll win/loss conditions
        if (die1 == 8 || die2 == 8 || die3 == 8) {
            cout << "You Win!! ";
            netWorth += bet;  // Increase player's net worth by the bet amount
        }
        else if (sum == 9 || sum == 10 || sum == 14) {
            cout << "You Win!! ";
            netWorth -= bet;  // Deduct the bet from the player's net worth
        }
        else if (die1 == 1 || die2 == 1 || die3 == 1) {
            cout << "You Lost!! ";
            netWorth -= bet;  // Deduct the bet from the player's net worth
        }
        else if (sum == 8 || sum == 20 || sum == 23 || sum == 24) {
            cout << "You Lost!! ";
            netWorth -= bet;  // Deduct the bet from the player's net worth
        }
        else {
            // Establish 'point'
            int point = sum;
            cout << "Point is: " << point << endl;

            // Keep rolling until point or 7 is rolled
            bool pointAchieved = false;
            while (true) {
                die1 = eightRollDie();
                die2 = eightRollDie();
                die3 = eightRollDie();
                sum = die1 + die2 + die3;

                cout << "You rolled: " << die1 << " + " << die2 << " + " << die3 << " = " << sum << endl;

                if (sum == point || sum == 8) {
                    pointAchieved = true;
                    break;
                }
                else if (sum == 15) {
                    break;
                }
            }

            // Determine final outcome
            if (pointAchieved) {
                cout << "Yay, you Win!! ";
                netWorth += bet;
            }
            else {
                cout << "Sorry, but you lost!! ";
                netWorth -= bet;
            }
        }

        // Check if the player still has money
        if (netWorth <= 0) {
            cout << "You're out of money! Game over." << endl;
            break;
        }

        // Ask if the player wants to play again
        cout << fixed << setprecision(2) << "You now have: $" << netWorth << endl;
        cout << "Would you like to go again? (Y or N): ";
        cin >> userChoice;
        userChoice = toupper(userChoice);
    }

    if (netWorth > 0) {
        cout << "Thank you for playing! You leave with: $" << netWorth << endl;
    }

}

void rockPaperScissors() {
    cout << "WELCOME TO Rock, Paper, Scissors!\n";
    
    char userChoice = 'Y';
    int compPick;
    string compChose;

    while (userChoice == 'Y') {
        cout << "Enter rock, paper, or scissors: ";
        string userChose;
        cin >> userChose;

        // Computer randomly picks
        compPick = rand() % 3;
        if (compPick == 0) {
            compChose = "rock";
        } else if (compPick == 1) {
            compChose = "paper";
        } else {
            compChose = "scissors";
        }
        cout << "Computer chose: " << compChose << endl;

        // Determine the result
        if (userChose == compChose) {
            cout << "It's a tie!" << endl;
        } else if ((userChose == "rock" && compChose == "scissors") ||
                   (userChose == "paper" && compChose == "rock") ||
                   (userChose == "scissors" && compChose == "paper")) {
            cout << "You win!" << endl;
        } else {
            cout << "Computer wins!" << endl;
        }

        // Ask if the user wants to play again
        cout << "Would you like to go again? Y or N: ";
        cin >> userChoice;
        userChoice = toupper(userChoice);
    }
}

void rockPaperScissorsSpock() {
    cout << "WELCOME TO Rock, Paper, Scissors, Spock!\n";
    
    char userChoice = 'Y';
    int compPick;
    string compChose;

    while (userChoice == 'Y') {
        cout << "Enter rock, paper, scissors, or spock: ";
        string userChose;
        cin >> userChose;

        // Computer randomly picks
        compPick = rand() % 4;
        if (compPick == 0) {
            compChose = "rock";
        } else if (compPick == 1) {
            compChose = "paper";
        } else if (compPick == 2) {
            compChose = "scissors";
        } else {
            compChose = "spock";
        }

        cout << "Computer chose: " << compChose << endl;

        // Determine the result
        if (userChose == compChose) {
            cout << "It's a tie!" << endl;
        } else if ((userChose == "rock" && compChose == "scissors") ||
                   (userChose == "paper" && compChose == "rock") ||
                   (userChose == "scissors" && compChose == "paper") ||
                   (userChose == "spock" && compChose == "paper") ||
                   (userChose == "spock" && compChose == "scissors") ||
                   (userChose == "paper" && compChose == "spock")) {
            cout << "You win!" << endl;
        } else {
            cout << "Computer wins!" << endl;
        }

        // Ask if the user wants to play again
        cout << "Would you like to go again? Y or N: ";
        cin >> userChoice;
        userChoice = toupper(userChoice);
    }
}

void setColor(const string& colorCode) {
    cout << "\033[" << colorCode << "m";
}

struct Card {
    string face;
    string suit;
    int value;
};

struct Hand {
    vector<Card> dealt;
    int total;
};

// Function to create a deck of cards
vector<Card> createDeck() {
    vector<Card> deck;
    string faces[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
    string suits[] = {"\033[31m♥\033[0m", "\033[31m◆\033[0m", "♣", "♠"};

    for (int f = 0; f < 13; ++f) {
        for (int s = 0; s < 4; ++s) {
            Card tempCard;
            tempCard.face = faces[f];
            tempCard.suit = suits[s];

            // Assign values to cards
            if (f >= 9) {
                tempCard.value = 10; // For J, Q, K
            } else if (f == 12) {
                tempCard.value = 11; // For Ace (initially 11)
            } else {
                tempCard.value = f + 2; // For numbered cards
            }
            deck.push_back(tempCard);
        }
    }
    return deck;
}

// Function to shuffle the deck
void shuffleDeck(vector<Card>& deck) {
    srand(time(0)); 
    for (int i = deck.size() - 1; i > 0; --i) {
        int j = rand() % (i + 1); // Random index from 0 to i
        swap(deck[i], deck[j]);   // Swap the cards
    }
}

// Function to display a hand
void displayHand(Hand& hand) {
    cout << "The hand contains: " << endl;
    for (const auto& card : hand.dealt) {
        cout << card.suit << " " << card.face << endl;
    }
    cout << "Total: " << hand.total << endl;
}

// Function to add a card to a hand and adjust total
void addCardToHand(Hand& hand, vector<Card>& deck) {
    hand.dealt.push_back(deck.back());
    hand.total += deck.back().value;
    deck.pop_back();
}

// Function to handle the ace value adjustment
void adjustForAce(Hand& hand) {
    for (auto& card : hand.dealt) {
        if (card.face == "A" && hand.total > 21) {
            card.value = 1;
            hand.total -= 10; // Adjust ace from 11 to 1
        }
    }
}

// Function for player's turn
bool playerTurn(Hand& player, vector<Card>& deck) {
    char choice;
    while (true) {
        displayHand(player);
        if (player.total > 21) {
            adjustForAce(player);  
        }

        if (player.total > 21) {
            cout << "Oops - Player went over 21. COMPUTER WINS!!" << endl;
            return false;  // Player loses
        }

        cout << "Would you like to take another card? (Y or N): ";
        cin >> choice;

        if (toupper(choice) == 'Y') {
            addCardToHand(player, deck);
        } else {
            break;
        }
    }
    return true;  // Player did not bust
}

// Function for dealer's turn
bool dealerTurn(Hand& dealer, vector<Card>& deck) {
    while (dealer.total <= 17) {
        addCardToHand(dealer, deck);
        if (dealer.total > 21) {
            adjustForAce(dealer);
        }
    }
    displayHand(dealer);
    if (dealer.total > 21) {
        cout << "Dealer went over 21. PLAYER WINS!!" << endl;
        return false;  // Dealer loses
    }
    return true;  // Dealer did not bust
}

// Function to evaluate the winner
void evaluateWinner(Hand& player, Hand& dealer) {
    if (player.total > 21) {
        cout << "COMPUTER WINS!!" << endl;
    } else if (dealer.total > 21 || player.total > dealer.total) {
        cout << "PLAYER WINS!!" << endl;
    } else if (player.total == dealer.total) {
        cout << "PUSH!! It's a tie." << endl;
    } else {
        cout << "COMPUTER WINS!!" << endl;
    }
}

void blackjack() {
    vector<Card> deck = createDeck();
    shuffleDeck(deck);

    Hand player, dealer;
    player.total = 0;
    dealer.total = 0;

    // Initial deal: 2 cards each
    addCardToHand(player, deck);
    addCardToHand(dealer, deck);
    addCardToHand(player, deck);
    addCardToHand(dealer, deck);

    cout << "WELCOME TO BLACKJACK!" << endl;

    // Player's turn
    if (playerTurn(player, deck)) {
        // Dealer's turn
        if (dealerTurn(dealer, deck)) {
            // Evaluate winner if no one busts
            evaluateWinner(player, dealer);
        }
    }

    char playAgain;
    cout << "Would you like to play again? (Y or N): ";
    cin >> playAgain;

    if (toupper(playAgain) == 'Y') {
        blackjack(); // Recursive call for a new game
    } else {
        cout << "Thank you for playing Blackjack!" << endl;
    }
}

vector<string> readWordsFromFile(const string& filename) {
    vector<string> words;
    ifstream file(filename);
    string word;
    while (getline(file, word)) {
        words.push_back(word);
    }
    return words;
}

// Function to choose a random word from the vector
string chooseRandomWord(const vector<string>& words) {
    srand(static_cast<unsigned>(time(0)));
    int index = rand() % words.size();
    return words[index];
}

// Function to display the current state of the guessed word
void displayGuessWord(const string& guessWord) {
    cout << "HANGMAN - your word is: ";
    for (char c : guessWord) {
        cout << c << ' ';
    }
    cout << endl;
}

// Function to update the guess word with the guessed letter
bool updateGuessWord(string& guessWord, const string& chosenWord, char guess) {
    bool found = false;
    for (size_t i = 0; i < chosenWord.size(); ++i) {
        if (chosenWord[i] == guess) {
            guessWord[i] = guess;
            found = true;
        }
    }
    return found;
}

void hangman() {
    vector<string> words = readWordsFromFile("words.txt");
    if (words.empty()) {
        cout << "No words found in the file." << endl;
        return;
    }

    string chosenWord = chooseRandomWord(words);
    string guessWord(chosenWord.size(), '?');
    int maxGuesses = 6;
    int guessesLeft = maxGuesses;

    while (guessesLeft > 0 && guessWord != chosenWord) {
        displayGuessWord(guessWord);

        char guess;
        cout << "Enter your guess: ";
        cin >> guess;

        // Check if the guess is valid (a letter)
        if (!isalpha(guess)) {
            cout << "Sorry! Guess is not valid. You have " << guessesLeft << " guesses left." << endl;
            continue;
        }

        // Convert guess to lowercase
        guess = tolower(guess);

        if (updateGuessWord(guessWord, chosenWord, guess)) {
            cout << "Nice Guess! You have " << guessesLeft << " guesses left." << endl;
        } else {
            --guessesLeft;
            cout << "Sorry! Guess is not valid. You have " << guessesLeft << " guesses left." << endl;
        }
    }

    if (guessWord == chosenWord) {
        cout << "You WIN!!!! The word was " << chosenWord << endl;
    } else {
        cout << "Game Over! The word was " << chosenWord << endl;
    }
}