#include "Part.hpp"
#include <iostream>

class Engine : public Part
{
  private:
    std::string name;
    std::string model;
    std::size_t year;

  public:
    Engine(/* args */);
    Engine(const Engine &obj);
    ~Engine();

    Engine &operator=(const Engine &obj);
    void print() override
    {
        std::cout << "Engine part\n";
    }
    void sound() override
    {
        std::cout << "Bruuuuung-!\n";
    }
    void setName(std::string newName);
    void setModel(std::string newName);
    void setYear(std::size_t newName);
    void printInfo();
};