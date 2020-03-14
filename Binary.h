#ifndef BINARY_H
#define BINRAY_H

#include <string.h>
#include <fstream>
#include "ExecutableHeader.h"

class Binary{

    private:
        ExecutableHeader execHeader;
        std::ifstream bInput; 

        void parseExecHeader();

    public:
        Binary();
        ~Binary();
        void parseElf(std::string bFileName);
        void printAll();

};
#endif
