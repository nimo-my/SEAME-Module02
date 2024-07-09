#include "Engine.hpp"

Engine::Engine() : name("engine"), model("Kubota"), year(2024)
{
    std::cout << "** [Engine] Class Constructor! **" << std::endl;
};

Engine::Engine(const Engine &obj)
{
    std::cout << "** [Engine] Class Copy constructor! **" << std::endl;
    *this = obj;
};

Engine::~Engine()
{
    std::cout << "** [Engine] Class Destructor! **" << std::endl;
};

Engine &Engine::operator=(const Engine &obj)
{
    std::cout << "** [Engine] Copy assignment operator! **" << std::endl;
    return (*this);
};

void Engine::setName(std::string newName)
{
    this->name = newName;
}

void Engine::setModel(std::string newModel)
{
    this->model = newModel;
}

void Engine::setYear(std::size_t newYear)
{
    this->year = newYear;
}

void Engine::printInfo()
{
    std::cout << " -- [Engine]'s info : name : [" << this->name << "], model : [" << this->model << "], year: ["
              << this->year << "] --\n";
}