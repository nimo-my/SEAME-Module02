#include "Transmission.hpp"

Transmission::Transmission(/* args */)
{
    std::cout << "** [Transmission] Class Constructor! **" << std::endl;
};

Transmission::Transmission(const Transmission &obj)
{
    std::cout << "** [Transmission] Class Copy constructor! **" << std::endl;
    *this = obj;
};

Transmission::~Transmission()
{
    std::cout << "** [Transmission] Class Destructor! **" << std::endl;
};

Transmission &Transmission::operator=(const Transmission &obj)
{
    std::cout << "** [Transmission] Copy assignment operator! **" << std::endl;
    return (*this);
};
