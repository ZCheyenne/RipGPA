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
