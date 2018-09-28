#include "cpu.ih"

void CPU::start()
{
	while (true) 
	{
		switch (Tokenizer::opcode())
		{
			case OpCode::ERR:
				CPU::error();
				break;

			case OpCode::MOV:
				CPU::mov();
				break;

			case OpCode::ADD:
				CPU::add();
				break;

			case OpCode::SUB:
				CPU::sub();
				break;

			case OpCode::MUL:
				CPU::mul();
				break;

			case OpCode::DIV:
				CPU::div();
				break;

			case OpCode::NEG:
				CPU::neg();
				break;

			case OpCode::DSP:
				CPU::dsp();
				break;

			case OpCode::STOP:
				return;			
		}
		Tokenizer::reset();
	}
}
