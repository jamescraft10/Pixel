//#include "Pixel/V1/Pixel.hpp"
#include <iostream>

int main() {
    std::cout<<"\033[38;2;26;99;217m\033[48;2;55;181;33mHello Colorful World!";
    std::cout<<"\033[38;2;0;0;0m\033[48;2;0;0;0m";

    // \033[38;2;<r>;<g>;<b>m // RGB text color
    // \033[48;2;<r>;<g>;<b>m // RGB background color
    // \033[39m\\033[49m // RESET
    // \\033[<L>;<C>H or \\033[<L>;<C>f

    /*
        #!/usr/bin/env python3

        for i in range(30, 37 + 1):
            print("\033[%dm%d\t\t\033[%dm%d" % (i, i, i + 60, i + 60))

        print("\033[39m\\033[49m                 - Reset color")
        print("\\033[2K                          - Clear Line")
        print("\\033[<L>;<C>H or \\033[<L>;<C>f  - Put the cursor at line L and column C.")
        print("\\033[<N>A                        - Move the cursor up N lines")
        print("\\033[<N>B                        - Move the cursor down N lines")
        print("\\033[<N>C                        - Move the cursor forward N columns")
        print("\\033[<N>D                        - Move the cursor backward N columns\n")
        print("\\033[2J                          - Clear the screen, move to (0,0)")
        print("\\033[K                           - Erase to end of line")
        print("\\033[s                           - Save cursor position")
        print("\\033[u                           - Restore cursor position\n")
        print("\\033[4m                          - Underline on")
        print("\\033[24m                         - Underline off\n")
        print("\\033[1m                          - Bold on")
        print("\\033[21m                         - Bold off")
    */

    return 0;
}