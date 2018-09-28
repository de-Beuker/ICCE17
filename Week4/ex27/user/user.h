#ifndef INCLUDED_USER_
#define INCLUDED_USER_

#include <string>

class User
{
	struct passwd* pw_entry;
    //this is true if the constructor has worked correctly:
	bool d_constructed = false; 

    public:
        User();
        size_t 		groupId() const;
        std::string homeDir() const;
    	bool 		inGroup(size_t gid) const;
    	std::string name() const;
    	std::string realName() const;
    	std::string shell() const;
    	size_t 		userId() const;
    	bool 		valid() const;


    private:
};
        
#endif
