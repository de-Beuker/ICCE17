#include "user.ih"

size_t User::userId() const
{
	return pw_entry -> pw_uid;
}
