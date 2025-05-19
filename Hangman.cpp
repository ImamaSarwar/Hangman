#include <iostream>
#include "hangman.h"
#include "HangmanFigures.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
void Hangman::welcomeScreen() {
    sf::Sprite backgroundSprite;
    sf::Texture background;
    background.loadFromFile("welcome.png");
    backgroundSprite.setTexture(background);
    sf::Text welcomeText;
    welcomeText.setFont(font);
    welcomeText.setString("Press any key to continue...");
    welcomeText.setCharacterSize(50);
    welcomeText.setPosition(390, 860);
    welcomeText.setFillColor(sf::Color::White);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
                return;
            }

            // Check if any key is pressed
            if (event.type == sf::Event::KeyPressed) {
                return; // Exit the welcome screen
            }
        }

        window.clear();
        window.draw(backgroundSprite);
        window.draw(welcomeText);
        window.display();
    }
}
void Hangman::setCategory(char input) {
    word[0] = '\0';
    length = 0;
    switch (input)
    {
    case 'F':
        for (int i = 0; i < 30; i++)
        {
            word[i] = category.getString(selectIndex, 0, i);
            if (word[i] == '\0')
                break;
        }
        word[29] = '\0';
        break;
    case 'S':
        for (int i = 0; i < 30; i++)
        {
            word[i] = category.getString(selectIndex, 1, i);
            if (word[i] == '\0')
                break;
        }
        word[29] = '\0';
        break;
    case 'A':
        for (int i = 0; i < 30; i++)
        {
            word[i] = category.getString(selectIndex, 2, i);
            if (word[i] == '\0')
                break;
        }
        word[29] = '\0';
        break;
    }
}
int Hangman::getLengthOfSelectedWord() {
    length = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}
char* Hangman::getWord() {
    return word;
}
void Hangman::displayCategories()
{
    sf::Text title, foodOption, spaceOption, countryOption;

    title.setFont(font);
    title.setString("Select a Category:");
    title.setCharacterSize(50);
    title.setPosition(500, 200);
    title.setFillColor(sf::Color::White);

    foodOption.setFont(font);
    foodOption.setString("Press F for Food");
    foodOption.setCharacterSize(40);
    foodOption.setPosition(550, 350);
    foodOption.setFillColor(sf::Color::White);

    spaceOption.setFont(font);
    spaceOption.setString("Press S for Space");
    spaceOption.setCharacterSize(40);
    spaceOption.setPosition(540, 450);
    spaceOption.setFillColor(sf::Color::White);

    countryOption.setFont(font);
    countryOption.setString("Press A for Animals");
    countryOption.setCharacterSize(40);
    countryOption.setPosition(520, 550);
    countryOption.setFillColor(sf::Color::White);

    window.draw(title);
    window.draw(foodOption);
    window.draw(spaceOption);
    window.draw(countryOption);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::KeyPressed)
            {
                if (event.key.code == sf::Keyboard::F) {
                    setCategory('F'); // Pass 'F' for Food
                    return;
                }
                else if (event.key.code == sf::Keyboard::S) {
                    setCategory('S'); // Pass 'S' for Space     
                    return;
                }
                else if (event.key.code == sf::Keyboard::A) {
                    setCategory('A'); // Pass 'A' for Animals
                    return;
                }
            }
        }
        window.draw(hangmanBackgroundSprite);
        window.draw(title);
        window.draw(foodOption);
        window.draw(spaceOption);
        window.draw(countryOption);
        window.display();
        window.clear();

    }
}
void Hangman::endGame() {
    sound.playLoseMusic();
    sf::Sprite endGameSprite;
    sf::Texture endGameTexture;
    endGameTexture.loadFromFile("EndGame.png");
    endGameSprite.setTexture(endGameTexture);
    sf::Text endGameText;
    endGameText.setFont(font);
    endGameText.setString("You Lost!");
    endGameText.setCharacterSize(70);
    endGameText.setPosition(550, 450);
    endGameText.setFillColor(sf::Color::White);
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
                return;
            }
        }
        window.clear();
        window.draw(endGameSprite);
        window.draw(endGameText);
        window.display();
    }
}


void Hangman::winGame() {
    sound.playWinMusic();
    sf::Sprite winGameSprite;
    sf::Texture winGameTexture;
    winGameTexture.loadFromFile("WinGame.png");
    winGameSprite.setTexture(winGameTexture);
    sf::Text winGameText;
    winGameText.setFont(font);
    winGameText.setString("Thank you for Saving me!");
    winGameText.setCharacterSize(70);
    winGameText.setPosition(300, 800);
    winGameText.setFillColor(sf::Color::White);
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
                return;
            }
        }
        window.clear();
        window.draw(winGameSprite);
        window.draw(winGameText);
        window.display();
    }
}

void Hangman::pauseGame()
{
    sf::Sprite pauseSprite;
    sf::Texture pauseTexture;
    pauseTexture.loadFromFile("background.png");
    pauseSprite.setTexture(pauseTexture);
    sf::Text keyText;
    keyText.setFont(font);
    keyText.setString("Press esc to resume...");
    keyText.setCharacterSize(50);
    keyText.setPosition(450, 830);
    keyText.setFillColor(sf::Color::White);
    sf::Text pauseText;
    pauseText.setFont(font);
    pauseText.setString("Game Paused");
    pauseText.setCharacterSize(100);
    pauseText.setPosition(420, 390);
    pauseText.setFillColor(sf::Color::White);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
                return;
            }

            else if (event.key.code == sf::Keyboard::Escape)
            {
                return;
            }
        }

        window.clear();
        window.draw(pauseSprite);
        window.draw(pauseText);
        window.draw(keyText);
        window.display();
    }
}
void Hangman::startGame()
{
    welcomeScreen();
    displayCategories();
    HangmanFigures figures;
    char guessedWord[17] = { 0 }; // Stores the guessed word progress
    int incorrectGuesses = -1; // Counter for incorrect guesses
    char incorrectChars[10];
    const int maxIncorrectGuesses = 7; // Max allowed incorrect guesses
    char input; // Stores user input
    bool wordGuessed = false, incorrectCharFound = true;
    char* wordToGuess = getWord();
    int wordLength = getLengthOfSelectedWord();

    for (int i = 0; i < wordLength; ++i) {
        guessedWord[i] = '_';
    }
    guessedWord[wordLength] = '\0';

    sf::Texture dashesTexture;
    sf::Sprite dashesSprite;
    sf::Sprite hangmanSprite;
    dashesTexture.loadFromFile("dashes.png");
    dashesSprite.setTexture(dashesTexture);
    dashesSprite.setTextureRect(sf::IntRect(0, 0, 153, 16));

    const int maxWordLength = 10; // Assume a maximum word length
    sf::Sprite dashArray[maxWordLength]; // Array to store dash sprites
    sf::Text letterArray[maxWordLength]; // Array to store guessed letters
    char letterChars[maxWordLength][2]; // Character arrays for letters (1 letter + null terminator)
    float startX = (wordLength <= 5) ? 350 : 100; // Adjust this as needed
    float startY = 800; // Adjust this as needed

    // Initialize dashes and guessed letter positions
    for (int i = 0; i < wordLength; i++) {
        dashArray[i] = dashesSprite; // Assign the dash sprite
        dashArray[i].setPosition(startX, startY); // Set position

        // Initialize letters
        letterArray[i].setFont(font);
        letterArray[i].setCharacterSize(50);
        letterArray[i].setFillColor(sf::Color::White);
        letterArray[i].setPosition(startX + 60, startY - 60); // Slightly above the dash

        // Initialize letterChars with underscores
        letterChars[i][0] = '_';
        letterChars[i][1] = '\0'; // Null-terminate for safety
        letterArray[i].setString(letterChars[i]); // Set the initial underscore

        startX += 200; // Adjust spacing between dashes
    }

    while (window.isOpen()) {
        // Handle events
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            else if (event.key.code == sf::Keyboard::Space)
            {
                pauseGame();
            }
            else if (event.type == sf::Event::TextEntered) {
                sound.playActionMusic();
                char enteredChar = static_cast<char>(event.text.unicode);
                if (enteredChar >= 'a' && enteredChar <= 'z') {
                    input = enteredChar;
                }
                else if (enteredChar >= 'A' && enteredChar <= 'Z') {
                    input = enteredChar + ('a' - 'A'); // Convert to lowercase
                }
                else {
                    continue; // Ignore non-alphabetic input
                }

                bool found = false;
                for (int i = 0; i < wordLength; ++i) {
                    if (wordToGuess[i] == input) {
                        guessedWord[i] = input; // Reveal the letter
                        letterChars[i][0] = input; // Update the character array
                        letterArray[i].setString(letterChars[i]); // Update corresponding text
                        found = true;
                    }
                }

                if (!found) {
                    incorrectCharFound = true; // Reset for the current input
                    for (int i = 0; i <= incorrectGuesses; i++) { // Loop through existing incorrect chars
                        if (incorrectChars[i] == input) {
                            incorrectCharFound = false; // Char already guessed
                            break;
                        }
                    }
                    if (incorrectCharFound && incorrectGuesses < maxIncorrectGuesses) {
                        // Add the new incorrect character if not already present
                        incorrectChars[++incorrectGuesses] = input;
                    }
                    hangmanSprite = figures.chooseFigure(incorrectGuesses); // Update figure
                }


                wordGuessed = true;
                for (int i = 0; i < wordLength; ++i) {
                    if (guessedWord[i] == '_') {
                        wordGuessed = false;
                        break;
                    }
                }
                if (wordGuessed) {
                    winGame();
                    return; // Exit after winning
                }
                if (incorrectGuesses == maxIncorrectGuesses)
                {
                    endGame();
                    return;
                }

            }
        }

        // Clear, draw, and display
        window.clear();
        window.draw(hangmanBackgroundSprite);

        // Draw dashes and letters
        for (int i = 0; i < wordLength; i++) {
            window.draw(dashArray[i]);
            window.draw(letterArray[i]);
        }
        window.draw(hangmanSprite);
        window.display(); // Only one call to window.display()
    }
}

int main()
{
    Hangman hangman;
    srand(time(0));
    hangman.window.setPosition(sf::Vector2i(550, 200));
    hangman.startGame();
    while (hangman.window.isOpen()) {
        hangman.window.clear();
        hangman.window.draw(hangman.hangmanBackgroundSprite);
        hangman.window.display();
    }

}
