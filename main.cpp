#include "Pixel.hpp"

int main() {
    while(true) {
        Pixel::Time(100);
        Pixel::Clear();

        Pixel::Text("ABC", 1, 1);
        Pixel::Text("DEF", 1, 2);
        Pixel::Text("GHI", 1, 3);
        Pixel::Pixel(BLUE, 0, 0);
        Pixel::Pixel(BLUE, 1, 0);
        Pixel::Pixel(BLUE, 2, 0);
        Pixel::Pixel(BLUE, 3, 0);
        Pixel::Pixel(BLUE, 4, 0);
        Pixel::Pixel(BLUE, 4, 1);
        Pixel::Pixel(BLUE, 4, 2);
        Pixel::Pixel(BLUE, 4, 3);
        Pixel::Pixel(BLUE, 4, 4);
        Pixel::Pixel(BLUE, 3, 4);
        Pixel::Pixel(BLUE, 2, 4);
        Pixel::Pixel(BLUE, 1, 4);
        Pixel::Pixel(BLUE, 0, 4);
        Pixel::Pixel(BLUE, 0, 3);
        Pixel::Pixel(BLUE, 0, 2);
        Pixel::Pixel(BLUE, 0, 1);
    }

    return 0;
}