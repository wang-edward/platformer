#include "Entity.hpp"

Entity:: Entity(Vector2f pos, SDL_Texture *tex):
    pos_{pos}, tex_{tex} {
    curr_frame_.x = 0;
    curr_frame_.y = 0;
    curr_frame_.w = 32;
    curr_frame_.h = 32;
}

Vector2f Entity:: get_pos() const {
    return pos_;
}

SDL_Texture *Entity:: get_tex() const {
    return tex_;
}

SDL_Rect Entity:: get_curr_frame() const {
    return curr_frame_;
}
