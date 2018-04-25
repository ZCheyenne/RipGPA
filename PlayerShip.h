/*
* Author: David Park, Isaias Lozano, Cheyenne Zhang, Chengyu Hong
* Assignment Title:  Galaga
* Assignment Description: This program mimics the game Galaga.
* Due Date: 4/25/2018
* Date Created: 3/25/2018
* Date Last Modified: 4/25/2018
 */

#ifndef PLAYERSHIP_H_INCLUDED
#define PLAYERSHIP_H_INCLUDED

#include "SDL_Plotter.h"
using namespace std;

const int RIGHT = 0;
const int DOWN  = 1;
const int LEFT  = 2;
const int UP    = 3;

void drawShip(SDL_Plotter& Screen, int x, int y);
void eraseShip(SDL_Plotter& Screen, int x, int y);
void moveShip(int& x, int& y, int dir);



#endif // PLAYERSHIP_H_INCLUDED
