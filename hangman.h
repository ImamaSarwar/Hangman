#pragma once
#ifndef HANGMAN_H
#define HANGMAN_H
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Category.h"
#include "Game.h"
using namespace std;
class Hangman : public Game
{
    char word[30];
    Category category;
    int selectIndex = rand() % 50;
    int length = 0;
public:
    sf::RenderWindow window;
    sf::Texture hangmanBackgroundTexture;
    sf::Sprite hangmanBackgroundSprite;
    sf::Font font;
    Hangman() : window(sf::VideoMode(1500, 960), "HANGMAN", sf::Style::Close | sf::Style::Titlebar)
    {

        hangmanBackgroundTexture.loadFromFile("background.png");
        hangmanBackgroundSprite.setTexture(hangmanBackgroundTexture);
        font.loadFromFile("Fonts/virgo.ttf");
        if (!font.loadFromFile("Fonts/virgo.ttf"))
        {
            cout << "Failed to load font!" << endl;
        }
    }
    void displayCategories();
    void setCategory(char input);
    int getLengthOfSelectedWord();
    void endGame() override;
    void winGame();
    void pauseGame();
    void startGame() override;
    void welcomeScreen();
    char* getWord();

};
#endif