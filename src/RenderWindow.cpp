#include <iostream>
#include <string>
#include "RenderWindow.hpp"
#include "SDL_render.h"

RenderWindow:: RenderWindow(const char *title, int w, int h) {
    window_ = SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, w, h, SDL_WINDOW_SHOWN);

    if (window_ == nullptr) {
        throw std::runtime_error{"SDL_CreateWindow() failed: " + std::string(SDL_GetError())};
    }

    renderer_ = SDL_CreateRenderer(window_, -1, SDL_RENDERER_ACCELERATED);
}

SDL_Texture *RenderWindow:: load_texture(const char *file_path) {
    SDL_Texture *texture = nullptr;
    texture = IMG_LoadTexture(renderer_, file_path);
    if (texture == nullptr) {
        throw std::runtime_error{"IMG_LoadTexture() failed: " + std::string(SDL_GetError())};
    }

    return texture;
}

void RenderWindow:: clear() {
    SDL_RenderClear(renderer_);
}

void RenderWindow:: render(SDL_Texture *tex) {
    SDL_RenderCopy(renderer_, tex, nullptr, nullptr);
}

void RenderWindow:: display() {
    SDL_RenderPresent(renderer_);
}

RenderWindow:: ~RenderWindow() {
    SDL_DestroyWindow(window_);
}
