#ifndef STRING_UTILS_H
#define STRING_UTILS_H

#include <string>
#include <vector>
#include <cassert>
#include <iostream>

namespace string_utils {

int split(std::string const& str, std::vector<std::string>& result, char delim);

}

#endif //STRING_UTILS_H
