#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string.h>

#define BLACK 0x00
#define BLUE 0x10
#define GREEN 0x20
#define AQUA 0x30
#define RED 0x40
#define PURPLE 0x50
#define YELLOW 0x60
#define WHITE 0x70
#define GRAY 0x80
#define LIGHT_BLUE 0x90
#define LIGHT_GREEN 0xA0
#define LIGHT_AQUA 0xB0
#define LIGHT_RED 0xC0
#define LIGHT_PURPLE 0xD0
#define LIGHT_YELLOW 0xE0
#define BRIGHT_WHITE 0xF0

namespace Pixel {
    void Time(int Time) {
        Sleep(Time);
    }

    void Clear() {
        system("cls");
    }

    void Pixel(int hexCode, int x, int y) {
        HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD coord;
        coord.X = x;
        coord.Y = y;
        SetConsoleCursorPosition(hc, coord);

        SetConsoleTextAttribute(hc, hexCode);
        std::cout << ' ';
        SetConsoleTextAttribute(hc, 0x07);
    }
    
    void Text(std::string Value, int x, int y) {
        HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);

        SetConsoleTextAttribute(hc, 0x07);
        for(int i = 0; i <= Value.length(); ++i) {
            int currentX = x + i;

            COORD coord;
            coord.X = currentX;
            coord.Y = y;

            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
            std::cout << Value[i];
        }
        SetConsoleTextAttribute(hc, 0x07);
    }

    void Init(int Time = 150) {
        Pixel::Time(Time);
        Pixel::Clear();
    }
}