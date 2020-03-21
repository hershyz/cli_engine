#include <iostream>
#include <bits/stdc++.h>
#include <filesystem>
#include <stdio.h>
#include <direct.h>
#include "Engine.h"
#include "Help.h"
#include "Help.cpp"
using namespace std;

Help help; //Creates help object.
string workingDirectory;

string current_working_directory() {
    char* cwd = _getcwd(0, 0);
    string working_directory(cwd);
    free(cwd);
    return working_directory;
}

//Constructor:
Engine::Engine() {
    workingDirectory = current_working_directory();
}

//Parse Command:
void Engine::parse(char* args[]) {

    string command = args[1];
    transform(command.begin(), command.end(), command.begin(), ::tolower); //Converts string to lowercase.

    //Help command:
    if (command == "help") {
        help.help();
    }
}
