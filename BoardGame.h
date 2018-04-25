#ifndef BOARDGAME_H_INCLUDED
#define BOARDGAME_H_INCLUDED

#include "SDL_Plotter.h"
#include "PlayerShip.h"

using namespace std;

const int ROWS = 10;
    const int COLS = 5;
    const int STARTING_X = 9;
    const int STARTING_Y = 2;
    const char PLAYER_ICON = '^';
    const char ENEMY_ICON = '@';
    const int ENEMY_ROW = 1;

void drawScoreBoard(SDL_Plotter& ScoreBoard, int x, int y);



#endif // BOARDGAME_H_INCLUDED
