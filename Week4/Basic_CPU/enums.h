#ifndef ENUMS_H_
#define ENUMS_H_

enum RAM
{
	SIZE = 20
};

enum OpCode
{
	ERR,
	MOV,
	ADD,
	SUB,
	MUL,
	DIV,
	NEG,
	DSP,
	STOP
};

enum OperandType
{
	SYNTAX,
	VALUE,
	REGISTER,
	MEMORY
};

#endif
