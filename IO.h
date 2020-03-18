#include <iostream>
using namespace std;
#ifndef IO_H
#define IO_H

class IO {
    public:
        IO();
        void createFile(string path);
        void createDirectory(char* path);
};

#endif