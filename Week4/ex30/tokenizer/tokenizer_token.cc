#include "tokenizer.ih"
#include <locale>
Operand Tokenizer::token()
{
	Operand operand;
	int integer;
	cin >> integer;
	if (!cin.fail())
	{
		operand.OperandType = VALUE;
		operand.value = integer;
		return operand;
	}

	char character = cin.get();
	if (character = "@")
	{
		operand.OperandType = MEMORY;
		cin >> integer;
		if (!cin.fail())
		{
			operand.value = integer;
			return operand;
		}
		else
		{
			operand.OperandType = SYNTAX;
			return operand;
		}
	}

	if (isalpha(character))
	{
		operand.OperandType = REGISTER;
		operand.value = character;
	}
}
