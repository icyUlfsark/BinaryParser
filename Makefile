
main: main.cpp Binary.cpp Binary.h ExecutableHeader.h ExecutableHeader.cpp ELFIdentification.h ELFIdentification.cpp ELFTypes.h ELFConstants.h
	g++ -o BinaryParser main.cpp Binary.cpp ExecutableHeader.cpp ELFIdentification.cpp
