
#include "cmd.h"
#include "string_utils.h"

#define IN_BUFFER_SZ 1024


int main()
{
    bool quit = 0;
    std::string input;
    std::vector<std::string> tokens;
    

    while (!quit) {
        std::cout << "> " << std::flush;
        
        std::getline(std::cin, input);
        //tokenize with strtok, maybe stringview in the future?
        
        string_utils::split(input, tokens, ' ');

        if ("exit" == tokens[0]) {
            quit = 1;
        } else if ("ls" == tokens[0]) {
            cmd::ls(nullptr);
        } else {
            std::cerr << "ERROR: Command not found: " << tokens[0] << "\n";
        }

        tokens.clear();
    }
    
    return 0; 
}
