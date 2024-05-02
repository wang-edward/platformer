#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Entity {
private:
    double x_, y_;
    SDL_Rect curr_frame_;
    SDL_Texture *tex_;

public:
    Entity(double x, double y, SDL_Texture *tex);    
    float get_x() const;
    float get_y() const;
    SDL_Texture * get_tex() const;
    SDL_Rect get_curr_frame() const;
};
