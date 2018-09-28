#include "memory.ih"

int Memory::load(size_t address) const
{
	if (address > RAM::SIZE)
		return 0;
	else
		return d_memory[address];
}
