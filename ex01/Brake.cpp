#include "Brake.hpp"

Brake::Brake() : name("brake"), model("BOSCH"), year(2022)
{
    std::cout << "** [Brake] Class Constructor! **" << std::endl;
};

Brake::Brake(const Brake &obj)
{
    std::cout << "** [Brake] Class Copy constructor! **" << std::endl;
    *this = obj;
};

Brake::~Brake()
{
    std::cout << "** [Brake] Class Destructor! **" << std::endl;
};

Brake &Brake::operator=(const Brake &obj)
{
    std::cout << "** [Brake] Copy assignment operator! **" << std::endl;
    this->name = obj.name;
    this->model = obj.model;
    this->year = obj.year;
    return (*this);
};

void Brake::setName(std::string newName)
{
    this->name = newName;
}

void Brake::setModel(std::string newModel)
{
    this->model = newModel;
}

void Brake::setYear(std::size_t newYear)
{
    this->year = newYear;
}

void Brake::printInfo()
{
    std::cout << " -- [Brake]'s info : name : [" << this->name << "], model : [" << this->model << "], year: ["
              << this->year << "] --\n";
}