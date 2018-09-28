#include "user.ih"

User::User(size_t userId)
//:
{
	pw_entry = getpwuid(userId);
	d_constructed = true;
}
