#include "Help.h"
#include <iostream>
using namespace std;

Help::Help() {

}

void print(string message) {
    cout << "- " + message << endl;
}

void Help::help() {
    print("help: Shows all available commands and arguments.");
}