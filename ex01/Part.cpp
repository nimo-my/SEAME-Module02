#include "Part.hpp"

Part::Part()
{
    std::cout << "** [Part] Class Constructor! **" << std::endl;
};

Part::Part(const Part &obj)
{
    std::cout << "** [Part] Class Copy constructor! **" << std::endl;
    *this = obj;
};

Part::~Part()
{
    std::cout << "** [Part] Class Destructor! **" << std::endl;
};

Part &Part::operator=(const Part &obj)
{
    std::cout << "** [Part] Copy assignment operator! **" << std::endl;
    return (*this);
};
