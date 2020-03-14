#ifndef EXECUTABLEHEADER_H
#define EXECUTABLEHEADER_H

#include "ELFTypes.h"
#include "ELFIdentification.h"
#include <fstream>

class ExecutableHeader {

    private:
        
        ELFIdentification e_ident;
        ELF64_Half e_type;
        ELF64_Half e_machine;
        ELF64_Word e_version;
        ELF64_DWord e_entry;
        ELF64_DWord e_phoff;
        ELF64_DWord e_shoff;
        ELF64_Word e_flags;
        ELF64_Half e_ehsize;
        ELF64_Half e_phentsize;
        ELF64_Half e_phnum;
        ELF64_Half e_shentsize;
        ELF64_Half e_shnum;
        ELF64_Half e_shstrndx; 


    public:
        
        ExecutableHeader();
        ~ExecutableHeader();
        void parseExecHeader(std::ifstream& bInput);

        ELF64_Half getEType();
        ELF64_Half getEMachine();
        ELF64_Word getEVersion();
        ELF64_DWord getEEntry();
        ELF64_DWord getEPhoff();
        ELF64_DWord getEShoff();
        ELF64_Word getEFlags();
        ELF64_Half getEEhsize();
        ELF64_Half getEPhentsize();
        ELF64_Half getEPhnum();
        ELF64_Half getEShentsize();
        ELF64_Half getEShnum();
        ELF64_Half getEShstrndx(); 

        void print();

};

#endif
