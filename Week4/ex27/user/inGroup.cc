#include "user.ih"

bool User::inGroup(size_t gid) const
{
	return (pw_entry -> pw_gid == gid ? true : false);
}
