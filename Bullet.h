/*
* Author: David Park, Isaias Lozano, Cheyenne Zhang, Chengyu Hong
* Assignment Title:  Galaga
* Assignment Description: This program mimics the game Galaga.
* Due Date: 4/25/2018
* Date Created: 3/25/2018
* Date Last Modified: 4/25/2018
 */

#ifndef BULLET_H_INCLUDED
#define BULLET_H_INCLUDED

#include "PlayerShip.h"
#include "SDL_Plotter.h"
using namespace std;



class Bullet{
    private:
      //Point center;
      //int   radius;


    public:
      //void setCenter(const Point);
      //void setRadius(const int);

      //Point getCenter()const;
      //int   getRadius()const;

      void drawBullet(SDL_Plotter& Screen, int x,int y);
      void eraseBullet(SDL_Plotter& Screen,int x, int y);
      void moveBullet(SDL_Plotter& Screen,int x, int y);
      //bool collision(Circle c) const;

};



#endif // BULLET_H_INCLUDED
