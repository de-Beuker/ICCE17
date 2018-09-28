#include "memory.ih"

void Memory::store(size_t const address, int const &value)
{
	d_memory[address] = value;
}
