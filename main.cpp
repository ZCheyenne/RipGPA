/*
* Author: David Park, Isaias Lozano, Cheyenne Zhang, Chengyu Hong
* Assignment Title:  Galaga
* Assignment Description: This program mimics the game Galaga.
* Due Date: 4/25/2018
* Date Created: 3/25/2018
* Date Last Modified: 4/25/2018
 */

/*
 * Data Abstraction:
 * 		Variable, key, is used to store the key stroke
 * 		Variable, dir, is used to store the direction of the ship
 * Input:
 * 		The user inputs arrow keys and the spacebar to move the ship and
 *          shoot bullets
 * Process:
 * 		The discriminant is calculated, to check if roots will be real
 * 			If the discriminant is negative, "NO REAL ROOTS" is printed to the screen
 * 		The roots are calculated,if they exist
 * Output:
 * 		A spaceship is outputted to the screen using the SDL_Plotter
 * Assumptions:
 * 		It is assumed that the user only wants to move and shoot
*/

#include <iostream>
#include <cmath>
#include <ctime>
#include "PlayerShip.h"
#include "Background.h"
#include "Bullet.h"
#include "SDL_Plotter.h"
using namespace std;

int main(int argc, char* args[])
{
    SDL_Plotter Screen(1000,1000);
    Bullet b;
    Background g;
    char key;
    int dir;
    int x=450,y=800;
    bool shoot = false;



    while(!Screen.getQuit())
    {
        g.drawWindow(Screen,0,0);
        g.drawBorder(Screen);
        g.drawStar(Screen,102,170,90,90,255);
        g.drawStar(Screen,777,343,0,182,182);
        g.drawStar(Screen,434,737,39,200,205);
        g.drawStar(Screen,628,430,293,200,0);
        g.drawStar(Screen,600,432,177,222,18);
        g.drawStar(Screen,500,222,198,38,199);
        g.drawStar(Screen,380,300,210,45,200);
        g.drawStar(Screen,288,400,190,209,99);
        g.drawStar(Screen,678,678,19,190,19);
        g.drawStar(Screen,389,389,78,218,78);
        g.drawStar(Screen,569,380,225,40,67);
        g.drawStar(Screen,833,300,93,29,100);
        g.drawStar(Screen,730,300,179,0,83);
        g.drawStar(Screen,300,203,40,190,43);
        g.drawStar(Screen,486,396,48,145,0);
        g.drawStar(Screen,379,700,93,59,193);
        g.drawStar(Screen,753,286,193,220,5);
        g.drawStar(Screen,370,628,201,44,169);
        drawShip(Screen,x,y);
        if(shoot == true)
        {
            b.drawBullet(Screen,x + 20,y-20);
        }

        Screen.update();
        Screen.Sleep(4);
        shoot = false;
        eraseShip(Screen,x,y);
        moveShip(x,y,dir);
        b.eraseBullet(Screen,x,y);
        b.moveBullet(Screen,x,y);

        if(Screen.kbhit()){
            key = Screen.getKey();
            switch(key){
                case RIGHT_ARROW: dir = RIGHT;
                                  break;
                case LEFT_ARROW:  dir = LEFT;
                                  break;
                case UP_ARROW:    dir = UP;
                                  break;
                case DOWN_ARROW:  dir = DOWN;
                                  break;
                case ' ':         shoot = true;
                                  break;
             }
        }


    }
    return 0;
}

