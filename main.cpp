//Standard
#include <iostream>
#include <fstream>
#include <string>

//Imports:
#include "IO.h"
#include "IO.cpp"
#include "Logger.h"
#include "Logger.cpp"

using namespace std;

//Objects:
IO io;
Logger logger;

int main() {

    logger.init(); //Shows welcome message on program start.

    while (true) {
        
        string rawCommand = logger.input();
        istringstream stm(rawCommand);

        string command;
        string arg1;
        int i = 0;

        //Parses raw input into a command and argument:
        while (i <= 1) {
            if (i == 0) {
                stm >> command;
            }
            if (i == 1) {
                stm >> arg1;
            }

            i++;
        }

        logger.parse(command, arg1);
    }
}
