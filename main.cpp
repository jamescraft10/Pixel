#include "Pixel/V1/Pixel.hpp"

int main(int argc, char *argv[]) {
    Pixel::ClearScrean();
    Pixel::SetCords(10, 10);
    Pixel::TurnOnBold();
    Pixel::TurnOnUnderline();
    Pixel::BackgroundColor(255,255,255);
    Pixel::TextColor(0,0,0);
    Pixel::Print("Hello, World!\n");
    Pixel::ResetColor();
    Pixel::TurnOffFormatting();
    Pixel::SetCords(11, 15);
    Pixel::BackgroundColor(0,0,0);
    Pixel::TextColor(255,255,255);
    Pixel::Print("Goodbye, World!");
    Pixel::ResetColor();
    return 0;
}