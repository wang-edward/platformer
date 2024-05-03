#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "Math.hpp"

class Entity {
private:
    Vector2f pos_;
    SDL_Rect curr_frame_;
    SDL_Texture *tex_;

public:
    Entity(Vector2f pos, SDL_Texture *tex);    
    Vector2f get_pos() const;
    SDL_Texture * get_tex() const;
    SDL_Rect get_curr_frame() const;
};
