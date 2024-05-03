#include "Math.hpp"
#include <iostream>

Vector2f:: Vector2f(): x{0}, y{0} {}
Vector2f:: Vector2f(float x, float y): x{x}, y{y} {}

void Vector2f:: print() {
    std::cout << x << ", " << y << std::endl;
}
