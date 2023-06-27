#include <iostream>
#include <string.h>

#include "cmd.h"

#define IN_BUFFER_SZ 1024
char buffer[IN_BUFFER_SZ] = {0}; 


int main()
{
    bool quit = 0;

    while (!quit) {
        std::cout << "> ";
        std::cin >> buffer;

        if (!strcmp("exit", buffer)) {
            quit = 1;
        } else if (!strcmp("ls", buffer)) {
            cmd::ls(nullptr);
        } else {
            std::cerr << "ERROR: Command not found: " << buffer << "\n";
        }
    }
    
    return 0; 
}
