#include "user.ih"

string User::shell() const
{
	return pw_entry -> pw_shell;
}
