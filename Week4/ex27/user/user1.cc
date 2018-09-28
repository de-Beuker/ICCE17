#include "user.ih"

User::User()
//:
{
	pw_entry = getpwuid(501);
	d_constructed = true;
}
