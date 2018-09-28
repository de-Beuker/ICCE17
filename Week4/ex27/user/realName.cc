#include "user.ih"

string User::realName() const
{
	return pw_entry -> pw_gecos;
}
