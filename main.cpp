#include "Pixel.hpp"

int main() {
    while(true) {
        Pixel::Time(100);
        Pixel::Clear();

        Pixel::Text("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 0, 0);
        Pixel::Pixel(BLACK, 0, 1);
        Pixel::Pixel(BLUE, 1, 1);
        Pixel::Pixel(GREEN, 2, 1);
        Pixel::Pixel(AQUA, 3, 1);
        Pixel::Pixel(RED, 4, 1);
        Pixel::Pixel(PURPLE, 5, 1);
        Pixel::Pixel(YELLOW, 6, 1);
        Pixel::Pixel(WHITE, 7, 1);
        Pixel::Pixel(GRAY, 8, 1);
        Pixel::Pixel(LIGHT_BLUE, 9, 1);
        Pixel::Pixel(LIGHT_GREEN, 10, 1);
        Pixel::Pixel(LIGHT_AQUA, 11, 1);
        Pixel::Pixel(LIGHT_RED, 12, 1);
        Pixel::Pixel(LIGHT_PURPLE, 13, 1);
        Pixel::Pixel(LIGHT_YELLOW, 14, 1);
        Pixel::Pixel(BRIGHT_WHITE, 15, 1);
        Pixel::Pixel(BLACK, 16, 1);
        Pixel::Pixel(BLUE, 17, 1);
        Pixel::Pixel(GREEN, 18, 1);
        Pixel::Pixel(AQUA, 19, 1);
        Pixel::Pixel(RED, 20, 1);
        Pixel::Pixel(PURPLE, 21, 1);
        Pixel::Pixel(YELLOW, 22, 1);
        Pixel::Pixel(WHITE, 23, 1);
        Pixel::Pixel(GRAY, 24, 1);
        Pixel::Pixel(LIGHT_BLUE, 25, 1);
    }

    return 0;
}