#ifndef INCLUDED_CPU_
#define INCLUDED_CPU_

//To access member functions the class must be defined
#include "memory.h"

//Defined here because its the only class using it
enum NREGISTERS
{
	NREGISTERS = 5
};

struct Operand
{
	OperandType type;
	int value;
};

class CPU
{
	Memory d_memory;
	int d_registers [NREGISTERS];
    public:
        CPU();
        CPU(Memory memory);
        void start();
    private:
    	bool error();
};
        
#endif
