#include "Pixel/V1/Pixel.hpp"

int main() {
    Pixel::ClearScrean();
    Pixel::TurnOnBold();
    Pixel::TurnOnUnderline();
    Pixel::BackgroundColor(255,255,255);
    Pixel::TextColor(0,0,0);
    Pixel::Print("Hello, World!\n");
    Pixel::ResetColor();
    Pixel::TurnOffFormatting();
    Pixel::BackgroundColor(0,0,0);
    Pixel::TextColor(255,255,255);
    Pixel::Print("Goodbye, World!");
    Pixel::ResetColor();
    return 0;
}