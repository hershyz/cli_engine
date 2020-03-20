#include <iostream>
#include <bits/stdc++.h>
#include "Engine.h"
#include "Help.h"
#include "Help.cpp"
using namespace std;

Help help; //Creates help object.

//Constructor:
Engine::Engine() {

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