#include "Entity.hpp"

Entity:: Entity(double x, double y, SDL_Texture *tex):
    x_{x}, y_{y}, tex_{tex} {
    curr_frame_.x = 0;
    curr_frame_.y = 0;
    curr_frame_.w = 32;
    curr_frame_.h = 32;
}

float Entity:: get_x() const {
    return x_;
}

float Entity:: get_y() const {
    return y_;
}

SDL_Texture *Entity:: get_tex() const {
    return tex_;
}

SDL_Rect Entity:: get_curr_frame() const {
    return curr_frame_;
}
