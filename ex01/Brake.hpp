#pragma once
#ifndef __BRAKE_HPP__
#define __BRAKE_HPP__
#include "Part.hpp"

class Brake : public Part
{
  private:
    std::string name;
    std::string model;
    std::size_t year;

  public:
    Brake(/* args */);
    Brake(const Brake &obj);
    ~Brake();

    Brake &operator=(const Brake &obj);
    void print() override
    {
        std::cout << "Brake part\n";
    }
    void sound() override
    {
        std::cout << "Qweeeekkkk!\n";
    }

    void setName(std::string newName);
    void setModel(std::string newName);
    void setYear(std::size_t newName);
    void printInfo();
};

#endif
