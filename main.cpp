#include <iostream>
#include <string>

#include "Pixel.hpp"

int main() {
    Pixel::Text("Hello, World!", 30, 30, GREEN);
    Pixel::Pixel(GREEN, 15, 15); // Draw The Pixel
    Pixel::Pixel(BLUE, 15, 16);

    return 0;
}