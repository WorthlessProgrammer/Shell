#ifndef CMD_H
#define CMD_H

#if 1
#include <iostream>
#include <sys/types.h>
#include <dirent.h>
#endif //COMMON_HEADERS


namespace cmd {

void ls(const char *dir_path);

} // namespace cmd

#endif //CMD_H