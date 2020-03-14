#ifndef ELFIDENTIFICATION_H
#define ELFIDENTIFICATION_H

#include "ELFConstants.h"
#include "ELFTypes.h"
#include <fstream>

class ELFIdentification {

    private:
        ELF64_Byte* ei_magic;
        ELF64_Byte ei_class;
        ELF64_Byte ei_data;
        ELF64_Byte ei_version;
        ELF64_Byte ei_osabi;
        ELF64_Byte ei_abiversion;
        ELF64_Byte* ei_pad;


    public:
        ELFIdentification();
        ~ELFIdentification();

        void parseEIdent(std::ifstream& bFileName);

        ELF64_Byte* getEIMagic();
        ELF64_Byte getEIClass();
        ELF64_Byte getEIData();
        ELF64_Byte getEIVersion();
        ELF64_Byte getEIOSABI();
        ELF64_Byte getEIABIVersion();
        ELF64_Byte* getEIPad();

        void print();
};

#endif
