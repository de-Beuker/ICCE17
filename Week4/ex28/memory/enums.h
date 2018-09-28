enum class RAM
{
	SIZE = 20
}

enum class OpCode
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
}

enum class OperandType
{
	SYNTAX,
	VALUE,
	REGISTER,
	MEMORY
}
