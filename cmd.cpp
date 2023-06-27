#include "cmd.h"

void cmd::ls(const char *dir_path)
{
    DIR *cwd;
    if (dir_path == nullptr) cwd = opendir(".");
    else cwd = opendir(dir_path);

    if (cwd == nullptr) {
        std::cerr << "ERROR: Could not open directory \n";
        return;
    }

    struct dirent *entry = nullptr;
    entry = readdir(cwd);
    while (entry) {
        if (entry->d_name[0] != '.')
            std::cout << entry->d_name << "\n";
        entry = readdir(cwd);
    }

    closedir(cwd);
}
