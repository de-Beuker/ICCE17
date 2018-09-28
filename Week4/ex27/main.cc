#include "user.h"
#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
	User Steffen;
	cout
	<< Steffen.groupId() << "\n" 
	<< Steffen.homeDir() << "\n"
	<< Steffen.name() << "\n"
	<< Steffen.realName() << "\n"
	<< Steffen.shell() << "\n" 
	<< Steffen.userId() << "\n"
	<< Steffen.valid() << "\n";
}
