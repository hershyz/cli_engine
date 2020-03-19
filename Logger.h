#ifndef LOGGER_H
#define LOGGER_H

class Logger {
    public:
        Logger();
        void help();
        void init();
        string input();
        void parse(string command, string arg);
};

#endif
