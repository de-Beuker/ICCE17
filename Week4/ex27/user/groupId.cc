#include "user.ih"

size_t User::groupId() const
{
	return pw_entry -> pw_gid;
}
