#include "user.ih"

string User::name() const
{
	return pw_entry -> pw_name;
}
