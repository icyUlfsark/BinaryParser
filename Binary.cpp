#include "Binary.h"
#include <string.h>
#include <stdio.h>
#include <iostream>

Binary::Binary(void){}
Binary::~Binary(void){}

void Binary::parseElf(std::string bFileName){

    
    this->bInput.open( bFileName, std::ios::binary ); 

    this->execHeader.parseExecHeader(bInput);
}

void Binary::printAll(){
    std::cout << "ELF Header:" << std::endl;    
    this->execHeader.print();
}
