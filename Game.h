#pragma once
#ifndef GAME_H
#define GAME_H
#include <iostream>
#include "Sounds.h"
using namespace std;

class Game {
protected:
	SoundSystem sound;
	virtual void startGame() = 0;
	virtual void endGame() = 0;
}; 
#endif