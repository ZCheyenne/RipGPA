/*
* Author: David Park, Isaias Lozano, Cheyenne Zhang, Chengyu Hong
* Assignment Title:  Galaga
* Assignment Description: This program mimics the game Galaga.
* Due Date: 4/25/2018
* Date Created: 3/25/2018
* Date Last Modified: 4/25/2018
 */

#ifndef BACKGROUND_H_INCLUDED
#define BACKGROUND_H_INCLUDED

#include "SDL_Plotter.h"
#include <iostream>
using namespace std;

class Background{

private:

public:
    void drawWindow(SDL_Plotter& Screen,int x,int y);
    void drawBorder(SDL_Plotter& Screen);
    void drawStar(SDL_Plotter& Screen,int x,int y,int r,int g,int b);

};


#endif // BACKGROUND_H_INCLUDED
