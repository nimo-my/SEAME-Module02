#include "Transmission.hpp"

Transmission::Transmission() : departure("default departure"), arrival("default arrival")
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

void Transmission::setArrival(std::string newArrival)
{
    this->arrival = newArrival;
}

void Transmission::setDeparture(std::string newDeparture)
{
    this->departure = newDeparture;
}

void Transmission::printInfo()
{
    std::cout << "[(Transmission info)] Arrival :[" << this->arrival << "], Departure : [" << this->departure << "]"
              << std::endl;
}