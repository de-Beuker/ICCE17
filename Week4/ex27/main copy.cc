#include "user.h"
#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
	User Steffen(501);
	Steffen.groupId();
	Steffen.homeDir();
	Steffen.name();
	Steffen.realName();
	Steffen.shell();
	Steffen.userId();
	Steffen.valid();
}
