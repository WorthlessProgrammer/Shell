#include "cmd.h"

void cmd::ls(const char *dir_path)
{
    DIR *target_directory;
    target_directory = opendir(".");
    //if (dir_path == nullptr) target_directory = opendir(".");
    //else target_directory = opendir(dir_path);

    if (target_directory == nullptr) {
        std::cerr << "ERROR: Could not open directory \n";
        return;
    }

    struct dirent *entry = nullptr;
    entry = readdir(target_directory);
    while (entry) {
        if (entry->d_name[0] != '.')
            std::cout << entry->d_name << "\n";
        entry = readdir(target_directory);
    }

    closedir(target_directory);
}
