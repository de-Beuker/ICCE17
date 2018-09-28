// #include "tokenizer.ih"

// Operand Tokenizer::token()
// {
// 	Operand operand;
// 	string input;
// 	cin >> input;

// 	if (input.find_first_not_of("0123456789") == std::string::npos)
// 	{
// 		operand.type = VALUE;
// 		operand.value = input;
// 		return operand;
// 	}


// 	if (input[0] == '@')
// 	{
// 		size_t pos;
// 		if (input[1] == '-')
// 			pos = 2;
// 		else
// 			pos = 1;
// 		if (input.find_first_not_of("0123456789", pos) == std::string::npos)
// 		{
// 			operand.type = MEMORY;
// 			operand.value = input.substr(input.length() - 1);
// 			return operand;
// 		}
		
// 	}

// 	if (isalpha(input[0]) && input.length() == 1)
// 	{
// 		operand.type = REGISTER;
// 		operand.value = input;
// 		return operand;
// 	}


// 	operand.type = SYNTAX;
// 	return operand;

// }
