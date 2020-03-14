#include "ELFTypes.h"
#include "ELFIdentification.h"
#include <fstream>
#include <iostream> 
#include <stdio.h>

ELFIdentification::ELFIdentification(){
    this->ei_magic = new ELF64_Byte[EI_MAGIC_SIZE];
    this->ei_pad= new ELF64_Byte[EI_PAD_SIZE];
}

ELFIdentification::~ELFIdentification(){
    delete[] ei_magic;
    delete[] ei_pad;
}

void ELFIdentification::parseEIdent(std::ifstream& bInput){

    bInput.read( (char *)ei_magic, EI_MAGIC_SIZE );
    bInput >> ei_class;
    bInput >> ei_data;
    bInput >> ei_version;
    bInput >> ei_osabi;
    bInput >> ei_abiversion;
    bInput.read( (char *)ei_pad, EI_PAD_SIZE );
}

ELF64_Byte* ELFIdentification::getEIMagic(){
    return this->ei_magic;
}

ELF64_Byte ELFIdentification::getEIClass(){
    return this->ei_class;
};

ELF64_Byte ELFIdentification::getEIData(){
    return this->ei_data;
}

ELF64_Byte ELFIdentification::getEIVersion(){
    return this->ei_version;
}

ELF64_Byte ELFIdentification::getEIOSABI(){
    return this->ei_osabi;
}

ELF64_Byte ELFIdentification::getEIABIVersion(){
    return this->ei_abiversion;
}

ELF64_Byte* ELFIdentification::getEIPad(){
    return this->ei_pad;    
}

void ELFIdentification::print(){
    std::cout << "    Magic: " << std::hex;
    
    for(int i = 0; i < EI_MAGIC_SIZE; ++i){
        std::cout << static_cast<unsigned int>(ei_magic[i]) << " ";
    }       

    std::cout << static_cast<unsigned int>(ei_class) << " ";
    std::cout << static_cast<unsigned int>(ei_data)<< " ";
    std::cout << static_cast<unsigned int>(ei_version) << " ";
    std::cout << static_cast<unsigned int>(ei_osabi) << " ";
    std::cout << static_cast<unsigned int>(ei_abiversion) << " ";

    for(int i = 0; i < EI_PAD_SIZE; ++i){
        std::cout << static_cast<unsigned int>(ei_pad[i]) << " ";
    } 

    std::cout << std::endl;
}

