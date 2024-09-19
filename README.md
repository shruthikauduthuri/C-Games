# Game Instructions

This repository contains multiple game implementations in C++. Below are the detailed rules for each game:

---

## 1. Craps

### **Basic Rules:**

1. **The Come-Out Roll**:
   - The game begins with the come-out roll (the player’s first roll).
   - If the total of the dice is **7** or **11**, the player **wins** immediately.
   - If the total is **2**, **3**, or **12**, the player **loses** (this is called "crapping out").
   - Any other number (4, 5, 6, 8, 9, or 10) establishes the **point**.

2. **Establishing the Point**:
   - If a point is established, the player keeps rolling the dice.
   - The goal is to roll the **point** number again before rolling a **7**.
   - If the player rolls the point again, they **win**.

---

## 2. Scraps

### **Basic Rules:**

1. **Initial Roll**:
   - Roll three 8-sided dice (each die has values from 1 to 8).

2. **Immediate Win or Loss**:
   - You **win** if:
     - One die shows an **8**.
     - The sum of the dice equals **9**, **10**, or **14**.
   - You **lose** if:
     - One die shows a **1**.
     - The sum of the dice equals **8**, **20**, **23**, or **24**.

3. **Point Establishment**:
   - If none of the above conditions are met, the sum of the three dice becomes the **point**.

4. **Point Phase**:
   - Continue rolling until:
     - You win by rolling the **point** again.
     - You lose by rolling:
       - A single **8** on any die.
       - A sum of **15** from the dice.

---

## 3. Rock, Paper, Scissors

### **Basic Rules:**
- **Rock beats Scissors** (Rock crushes Scissors).
- **Scissors beats Paper** (Scissors cut Paper).
- **Paper beats Rock** (Paper covers Rock).

---

## 3. Rock, Paper, Scissors, Spock

### **Basic Rules:**
- **Rock beats Scissors** (Rock crushes Scissors).
- **Rock loses to Paper** (Paper covers Rock).
- **Rock loses to Spock** (Spock vaporizes Rock).
- **Paper beats Rock** (Paper covers Rock).
- **Paper loses to Scissors** (Scissors cuts Paper).
- **Paper beats Spock** (Paper disproves Spock).
- **Scissors beats Paper** (Scissors cuts Paper).
- **Scissors loses to Rock** (Rock crushes Scissors).
- **Scissors loses to Spock** (Spock smashes Scissors).
- **Spock beats Rock** (Spock vaporizes Rock).
- **Spock loses to Paper** (Paper disproves Spock).
- **Spock beats Scissors** (Spock smashes Scissors).

If both players select the same option, it's a **tie**.

---

## 4. Blackjack

### **Basic Rules:**

1. **Objective**:
   - Beat the dealer by having a hand value closer to **21** without exceeding it.

2. **Card Values**:
   - Number cards (2-10): Worth their face value.
   - Face cards (Jack, Queen, King): Worth **10 points**.
   - Aces: Worth **1** or **11** points, depending on what’s more beneficial.

3. **Initial Deal**:
   - Each player is dealt two cards.
   - Players’ cards are face-up, while the dealer has one card face-up and one face-down (hole card).

4. **Player’s Turn**:
   - Players can:
     - **Hit**: Take another card.
     - **Stand**: Stop taking cards.
   - The player loses if they go over **21**.

5. **Dealer’s Turn**:
   - The dealer reveals the hole card.
   - The dealer must hit if their hand is **16** or less, and stand on **17** or more.

6. **Winning Conditions**:
   - Players win if their hand value is closer to **21** than the dealer’s without going over.
   - If the player’s hand exceeds **21**, they lose.

---

## 5. Hangman

### **Basic Rules:**

1. **Setup**:
   - One player (or the computer) chooses a secret word and represents it as a series of blank spaces.

2. **Game Objective**:
   - The guesser must identify the secret word by guessing letters before a full "hangman" figure is drawn.

3. **Gameplay**:
   - The guesser suggests one letter at a time.
   - Correct guesses fill in the blanks for that letter.
   - Incorrect guesses result in drawing a part of the hangman figure.
   - The game continues until:
     - The guesser guesses the word, or
     - The hangman figure is completed (usually after **6-8** incorrect guesses).

4. **Winning and Losing**:
   - The guesser **wins** if they guess the word before the hangman is fully drawn.
   - The guesser **loses** if the hangman figure is fully drawn before the word is guessed.


