#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "Entity.hpp"

class RenderWindow {
private:
    SDL_Window *window_;
    SDL_Renderer *renderer_;

public:
    RenderWindow(const char *title, int w, int h);

    SDL_Texture *load_texture(const char *file_path);

    void clear();
    void render(const Entity &entity);
    void display();

    ~RenderWindow();
};
