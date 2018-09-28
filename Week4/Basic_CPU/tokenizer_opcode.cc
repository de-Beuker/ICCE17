#include "tokenizer.ih"

OpCode Tokenizer::opcode()
{
	string input;
	cin >> input;

	switch (input[2])
	{
		case 'v':
			return (input == "mov" ? MOV :
					input == "div" ? DIV : ERR);

		case 'd':
			return (input == "add" ? ADD : ERR);

		case 'b':
			return (input == "sub" ? SUB : ERR);

		case 'l':
			return (input == "mul" ? MUL : ERR);

		case 'g':
			return (input == "neg" ? NEG : ERR);

		case 'p':
			return (input == "dsp" ? DSP : ERR);

		case 'o':
			return (input == "top" ? STOP : ERR);

		default:
			return ERR;

	}
}
