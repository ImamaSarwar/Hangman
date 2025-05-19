#pragma once
#ifndef CATEGORY_H
#define CATEGORY_H
#include <iostream>
using namespace std;

class Category {
    char food[50][30] = { "banana", "orange", "grape", "watermelon", "pineapple","blueberry", "cherry", "peach", "pear", "mango", "kiwi", "lemon", "lime","avocado", "grapefruit", "apricot", "plum", "pomegranate", "date", "olive","coconut", "carrot", "broccoli", "tomato", "potato", "cucumber", "lettuce","onion", "garlic", "pepper", "spinach", "corn", "peas", "beans", "pumpkin","zucchini", "mushroom", "asparagus", "kale", "cabbage", "rice","wheat", "barley", "rye", "oats", "quinoa", "millet", "sorghum","teff", "chia" };
    char animals[50][30] = { "dog", "cat", "horse", "cow", "pig", "sheep", "goat", "chicken", "duck", "goose", "turkey", "rabbit", "squirrel", "rat", "mouse", "deer", "fox", "wolf", "bear", "lion", "tiger", "leopard", "cheetah", "jaguar", "elephant", "giraffe", "zebra", "rhino", "hippopotamus", "crocodile", "snake", "lizard", "turtle", "frog", "toad", "fish", "shark", "whale", "dolphin", "octopus", "crab", "lobster", "butterfly", "bee", "ant", "spider", "worm", "bird", "monkey", "gorilla" };
    char space[50][30] = { "sun", "moon", "earth", "mars", "venus", "mercury", "jupiter", "saturn","uranus", "neptune", "pluto", "comet", "asteroid", "meteor", "nebula", "galaxy", "star", "planet", "dwarf", "satellite", "station", "rocket", "spaceship", "astronaut", "cosmonaut", "debris", "matter", "energy", "supernova", "neutron", "white", "pulsar", "quasar", "dwarf", "background", "bang", "giant", "flare", "corona", "wind", "black", "hole", "dark", "matter", "cosmic", "ray", "solar", "system", "universe","spacewalk" };
public:
    char getString(int selectedIndex, int selectedArray, int i) {
        switch (selectedArray)
        {
        case 0:
            return food[selectedIndex][i];
            break;
        case 1:
            return space[selectedIndex][i];
            break;
        case 2:
            return animals[selectedIndex][i];
            break;
        }

    }
};
#endif