#include "enums.h"
#include "memory.h"
#include "cpu.h"
#include "tokenizer.h"

#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	Tokenizer tokenizer;

	OpCode opcode;
	opcode = tokenizer.opcode();
	Operand operand = tokenizer.token();
	cout << opcode << "\n"
	<< operand.type << "\n"
	<< operand.value << "\n";

	Memory memory;
	CPU cpu(memory);
	cpu.start();
	return 0;
}
