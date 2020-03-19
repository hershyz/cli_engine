#include "Logger.h"
#include <iostream>
#include <string>
#include <locale>
#include "Properties.h"
#include "Properties.cpp"

using namespace std;

Properties properties;

//Constructor:
Logger::Logger() {

}

//Print (private):
void print(string text) {
    cout << text << endl;
}

//Init:
void Logger::init() {
    cout << "localsrc - " + properties.version << endl;
}

//Help:
void Logger::help() {
    print("help: Shows all available commands and arguments");
}

//Input:
string Logger::input() {
    cout << properties.prefix;
    string returnX;
    cin >> returnX;
    return returnX;
}

//Parse:
void Logger::parse(string command, string arg) {

    //Help command:
    if (command == "help" || command == "HELP") {
        help();
    }
}
