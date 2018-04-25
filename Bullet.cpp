#include <iostream>
#include <cmath>
#include "Bullet.h"
#include "SDL_Plotter.h"
using namespace std;

void Bullet::drawBullet(SDL_Plotter& Screen,int x, int y)
{
    for(int dx = 0; dx < 10; dx++){
        for(int dy = 0; dy < 20; dy++){
            Screen.plotPixel(x + dx, y+dy,90,255,255);
        }
    }
    return;
}
void Bullet::eraseBullet(SDL_Plotter& Screen, int x, int y)
{
    for(int dx = 0; dx < 10; dx++){
        for(int dy = 0; dy < 20; dy++){
            Screen.plotPixel(x + dx, y+dy,0,0,0);
        }
    }
    return;
}

void Bullet::moveBullet(SDL_Plotter& Screen,int x, int y){

    while(y > 10)
    {
        y--;
        for(int dx = 0; dx < 10; dx++){
            for(int dy = 0; dy < 20; dy++){
                Screen.plotPixel(x + dx, y+dy,90,255,255);
            }
        }
        return;
    }
}

/*
void Bullet::setCenter(const Point p){
    center = p;
}

void Dots::setRadius(const int r){
    radius = r;
}


Point Dots::getCenter()const{
    return center;
}

int Dots::getRadius()const{
    return radius;
}



void Dots::drawBullet(SDL_Plotter& g) const{
    // x^2 + y ^2 = r^2
    int y;
    for(int x = -radius; x <= radius; x++){
        for(int y = -radius; y <= radius; y++){
            if(sqrt(x*x + y*y) <= radius){
                g.plotPixel(center.x + x,center.y + y, 255, 255,0);
                //g.update();
            }
        }
    }
}

void Dots::eraseBullet(SDL_Plotter& g){
    // x^2 + y ^2 = r^2
    int y;
    for(int x = -radius; x <= radius; x++){
        for(int y = -radius; y <= radius; y++){
            if(sqrt(x*x + y*y) <= radius){
                g.plotPixel(center.x + x,center.y + y, 255, 255,0);
                //g.update();
            }
        }
    }
}

bool Dots::collision(Circle c) const{
    bool flag = false;
    double dist;
    //top and bottom
    for(int x = upperLeft.x; x<= lowerRight.x && !flag; x++){
        if(Point(x, y).distance(c.getCenter()) <= c.getRadius() ||
                Point(x, lowerRight.y).distance(c.getCenter()) <= c.getRadius();
            )
            flag = true;
    }
    // left and right
    for(int x = upperLeft.x; x<= lowerRight.x && !flag; x++){
        flag = Point(upperLeft.x, y).distance(c.getCenter()) <= c.getRadius() ||
                Point(lowerRight.x, y).distance(c.getCenter()) <= c.getRadius();
    }
    return flag;
}*/
