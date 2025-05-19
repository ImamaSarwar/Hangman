#pragma once
#ifndef HANGMANFIGURES_H
#define HANGMANFIGURES_H
#include <iostream>
#include "hangman.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
class HangmanFigures {
	int tries;
public:
	sf::Texture hangmanTexture;
	sf::Sprite hangmanSprite;

	sf::Sprite chooseFigure(int tryNum) {
		sf::Sprite sprite; // Create a local sprite to return
		switch (tryNum)
		{
		case 0:
			hangmanTexture.loadFromFile("2.png");
			sprite.setTexture(hangmanTexture);
			sprite.setTextureRect(sf::IntRect(0, 0, 209, 258));
			sprite.setPosition(600, 370);
			break;
		case 1:
			hangmanTexture.loadFromFile("3.png");
			sprite.setTexture(hangmanTexture);
			sprite.setTextureRect(sf::IntRect(0, 0, 209, 258));
			sprite.setPosition(600, 370);
			break;
		case 2:
			hangmanTexture.loadFromFile("4.png");
			sprite.setTexture(hangmanTexture);
			sprite.setTextureRect(sf::IntRect(0, 0, 207, 256));
			sprite.setPosition(600, 370);
			break;
		case 3:
			hangmanTexture.loadFromFile("5.png");
			sprite.setTexture(hangmanTexture);
			sprite.setTextureRect(sf::IntRect(0, 0, 207, 258));
			sprite.setPosition(600, 370);
			break;
		case 4:
			hangmanTexture.loadFromFile("6.png");
			sprite.setTexture(hangmanTexture);
			sprite.setTextureRect(sf::IntRect(0, 0, 207, 258));
			sprite.setPosition(600, 370);
			break;
		case 5:
			hangmanTexture.loadFromFile("7.png");
			sprite.setTexture(hangmanTexture);
			sprite.setTextureRect(sf::IntRect(0, 0, 209, 258));
			sprite.setPosition(600, 370);
			break;
		case 6:
			hangmanTexture.loadFromFile("8.png");
			sprite.setTexture(hangmanTexture);
			sprite.setTextureRect(sf::IntRect(0, 0, 350, 350));
			sprite.setPosition(490, 280);
			break;
		}
		return sprite; // Return the sprite
	}

};
#endif