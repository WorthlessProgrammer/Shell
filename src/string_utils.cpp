#include "string_utils.h"

int string_utils::split(std::string const& str, std::vector<std::string>& result, char delim)
{
    if (str.length() == 0 || str.empty()) { return -1;}

    int token_count = 0;
    std::string temp;

    assert(sizeof(str[0]) == sizeof(char));

    for (size_t i = 0; i < str.length(); i++) {

        char c = str[i];
        if (c != delim && c != '\0' 
            && c != EOF && c != '\n' 
            && i != str.length()-1) {
            temp += c;
        } else {
            if (i == str.length()-1) temp += c;
            result.push_back(temp);
            temp.clear();
            token_count += 1;
        }
    }

    return token_count;
}
