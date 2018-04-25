#include "Background.h"
#include "SDL_Plotter.h"
using namespace std;

void Background::drawWindow(SDL_Plotter& Screen,int x,int y){
    for(int dx = 0; dx < 1000; dx++){
        for(int dy = 0; dy < 1000; dy++){
            Screen.plotPixel(dx+x,dy+y,0,0,0);
        }
    }
    return;
}
void Background::drawBorder(SDL_Plotter& Screen){
        for(int dx = 0; dx < 40; dx++){
            for(int dy = 0; dy < 850; dy++){
                Screen.plotPixel(40+dx, 80+dy,0,0,255);
            }
        }
        for(int dx = 0; dx < 850; dx++){
            for(int dy = 0; dy < 40; dy++){
                Screen.plotPixel(40+dx, 40+dy,255,0,0);
            }
        }
        for(int dx = 0; dx < 40; dx++){
            for(int dy = 0; dy < 850; dy++){
                Screen.plotPixel(890+dx, 40+dy,0,255,0);
            }
        }
        for(int dx = 0; dx < 850; dx++){
            for(int dy = 0; dy < 40; dy++){
                Screen.plotPixel(80+dx, 890+dy,255,99,71);
            }
        }
    return;
}
void Background::drawStar(SDL_Plotter& Screen,int x,int y,int r,int g,int b){
    for(int dx = 0; dx < 2; dx++){
        for(int dy = 0; dy < 2; dy++){
            Screen.plotPixel(dx+x,dy+y,r,g,b);
        }
    }
    return;
}
