#include <iostream>
#include <string>
#include <cstdlib>

namespace Pixel {
    void SetCords(int x, int y) {
        std::cout << "\033[" << x << ";" << y << "H";
    }

    void Print(std::string Value) {
        std::cout << Value;
    }

    void BackgroundColor(int R, int G, int B) {
        std::cout << "\033[48;2;" << R << ";" << G << ";" << B << "m";
    }

    void TextColor(int R, int G, int B) {
        std::cout << "\033[38;2;" << R << ";" << G << ";" << B << "m";
    }

    void ResetColor() {
        std::cout << "\033[0m";
    }

    void TurnOffFormatting() {
        std::cout << "\033[0m";
    }

    void TurnOnUnderline() {
        std::cout << "\033[4m";
    }

    void TurnOffUnderline() {
        std::cout << "\033[24m";
    }

    void TurnOnBold() {
        std::cout << "\033[1m";
    }

    void TurnOffBold() {
        std::cout << "\033[22m";
    }

    void ClearScrean() {
        std::system("clear");
    }
}