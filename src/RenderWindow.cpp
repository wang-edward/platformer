#include <iostream>
#include "RenderWindow.hpp"
#include "SDL_render.h"

RenderWindow:: RenderWindow(const char *title, int w, int h) {
    window_ = SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, w, h, SDL_WINDOW_SHOWN);

    if (window_ == nullptr) {
        std::cout << "SDL_CreateWindow() failed: " << SDL_GetError() << std::endl;
    }

    renderer_ = SDL_CreateRenderer(window_, -1, SDL_RENDERER_ACCELERATED);
}

RenderWindow:: ~RenderWindow() {
    SDL_DestroyWindow(window_);
}
