#include <iostream>
#include "Engine.h"
#include "Engine.cpp"
using namespace std;

Engine engine; //Creates engine object.

int main(int argc, char* argv[]) {

    //If no arguments are entered:
    if (argc == 1) {
        cout << "No commands entered, type 'help' for help." << endl;
        return 0;
    }

    //At least one other argument is entered, sends to engine:
    engine.parse(argv);
}