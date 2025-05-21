# Hangman Game
This project is a 2D implementation of the classic Hangman word-guessing game, developed with a clean and modular Object-Oriented Programming (OOP) architecture. The game challenges the player to identify a randomly selected word by guessing individual letters within a limited number of attempts.
Words are drawn from one of three predefined categories: Food, Space, and Animals. The game logic, structure, and user interface have been designed with a focus on clarity, maintainability, and adherence to software development best practices.
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
### Game UI
![Game UI](https://github.com/ImamaSarwar/Hangman/raw/d8969dd8b696fea1a04f7271224cc84956cd8bcf/Game%20UI.png)
## Getting Started
Since SFML was used for graphics and audio, the SFML library is required to run the game. [Installing SFML for Visual Studio](https://www.youtube.com/watch?v=lFzpkvrscs4)
### Enjoy!
