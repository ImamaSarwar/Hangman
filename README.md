# Hangman Game
Hangman is a 2D word-guessing game with a clean, modular OOP design. The player is challenged to guess a randomly selected word from one of three categories: Food, Space, or Animals.
## Gameplay Features
### Word Selection
- A random word is selected from the chosen category.
### Attempts
- The player has 7 wrong guesses and 90 seconds to guess the word correctly.
- With each wrong guess, a new sprite (body part) appears on the hanging pole, increasing tension and bringing the player closer to losing.
### Time Limit
- A visible countdown timer at the top of the screen creates urgency.
- If the 90 seconds run out before the word is guessed, the game ends in a loss.
### Smart Input Handling
- Repeating an already guessed wrong letter has no additional effect — no penalty or new sprite is added.
### Controls
- Letter guesses are made via keyboard key presses.
- Spacebar toggles the Play/Pause functionality at any time.
## Getting Started
Since SFML was used for graphics and audio, the SFML library is required to run the game. [Installing SFML for Visual Studio](https://www.youtube.com/watch?v=lFzpkvrscs4)
### Enjoy!
