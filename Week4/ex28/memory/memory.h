#ifndef INCLUDED_MEMORY_
#define INCLUDED_MEMORY_

#include "enums.h"

class Memory
{
	int d_memory[RAM::SIZE];

    public:
        Memory();
        void store(size_t const address, int const value) const;
        int load(size_t const address) const;

    private:
};
        
#endif
