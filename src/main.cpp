#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>

using namespace std;

#include "RenderWindow.hpp"

int main(int argc, char *argv[]) {
    if (SDL_Init(SDL_INIT_VIDEO) > 0) {
        cout << "SDL_Init FAIL: " << SDL_GetError() << endl;
    }
    if (!(IMG_Init(IMG_INIT_PNG))) {
        cout << "IMG_Init FAIL: " << SDL_GetError() << endl;
    }

    RenderWindow window("GAME v1.0", 1280, 720);

    bool gameRunning = true;
    SDL_Event event;
    while (gameRunning) {
        while(SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                gameRunning = false;
            }
        }
    }

    SDL_Quit();
    return 0;
}
