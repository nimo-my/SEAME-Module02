#include "Wheel.hpp"

Wheel::Wheel() : name("wheel"), model("VOSSEN"), year(2023)
{
    std::cout << "** [Wheel] Class Constructor! **" << std::endl;
};

Wheel::Wheel(const Wheel &obj)
{
    std::cout << "** [Wheel] Class Copy constructor! **" << std::endl;
    *this = obj;
};

Wheel::~Wheel()
{
    std::cout << "** [Wheel] Class Destructor! **" << std::endl;
};

Wheel &Wheel::operator=(const Wheel &obj)
{
    std::cout << "** [Wheel] Copy assignment operator! **" << std::endl;
    return (*this);
};

void Wheel::setName(std::string newName)
{
    this->name = newName;
}

void Wheel::setModel(std::string newModel)
{
    this->model = newModel;
}

void Wheel::setYear(std::size_t newYear)
{
    this->year = newYear;
}

void Wheel::printInfo()
{
    std::cout << " -- [Wheel]'s info : name : [" << this->name << "], model : [" << this->model << "], year: ["
              << this->year << "] --\n";
}