#ifndef INCLUDED_TOKENIZER_
#define INCLUDED_TOKENIZER_

#include "cpu.h"

class Tokenizer
{
    public:
        Tokenizer();
        void reset();
        OpCode opcode();
        Operand token();
    private:
};
        
#endif


