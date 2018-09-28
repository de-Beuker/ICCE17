#include "user.ih"

string User::homeDir() const
{
	string directory = pw_entry -> pw_dir;
	return directory.append("/");
}
