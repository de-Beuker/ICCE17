#include "memory.ih"

void Memory::store(size_t address, int value) const
{
	d_memory[address] = value;
}
