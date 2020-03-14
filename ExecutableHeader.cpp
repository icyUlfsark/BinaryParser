#include "ELFTypes.h"
#include "ExecutableHeader.h"
#include <fstream>

ExecutableHeader::ExecutableHeader(void){}
ExecutableHeader::~ExecutableHeader(void){}

void ExecutableHeader::parseExecHeader(std::ifstream& bInput){
    
    this->e_ident.parseEIdent(bInput);

    bInput >> e_type;
    bInput >> e_machine;
    bInput >> e_version;
    bInput >> e_entry;
    bInput >> e_phoff;
    bInput >> e_flags;
    bInput >> e_ehsize;
    bInput >> e_phentsize;
    bInput >> e_phnum;
    bInput >> e_shentsize;
    bInput >> e_shnum;
    bInput >> e_shstrndx;
}


ELF64_Half ExecutableHeader::getEType(){ 
    return this->e_type; 
}

ELF64_Half ExecutableHeader::getEMachine(){
    return this->e_machine;
}

ELF64_Word ExecutableHeader::getEVersion(){
    return this->e_version;
}

ELF64_DWord ExecutableHeader::getEEntry(){
    return this->e_entry;
}

ELF64_DWord ExecutableHeader::getEPhoff(){
    return this->e_phoff;
}

ELF64_DWord ExecutableHeader::getEShoff(){
    return this->e_shoff;
}

ELF64_Word ExecutableHeader::getEFlags(){
    return this-> e_flags;
}

ELF64_Half ExecutableHeader::getEEhsize(){
    return this->e_ehsize;
}

ELF64_Half ExecutableHeader::getEPhentsize(){
    return this->e_phentsize;
}

ELF64_Half ExecutableHeader::getEPhnum(){
    return this->e_phnum;
}

ELF64_Half ExecutableHeader::getEShentsize(){
    return this->e_shentsize;
}

ELF64_Half ExecutableHeader::getEShnum(){
    return this->e_shnum;
}

ELF64_Half ExecutableHeader::getEShstrndx(){
    return this->e_shstrndx;
}

void ExecutableHeader::print(){
    this->e_ident.print();
}
