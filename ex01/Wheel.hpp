#pragma once
#ifndef __WHEEL_HPP__
#define __WHEEL_HPP__
#include "Part.hpp"

class Wheel : public Part
{
  private:
    std::string name;
    std::string model;
    std::size_t year;

  public:
    Wheel();
    Wheel(const Wheel &obj);
    ~Wheel();

    Wheel &operator=(const Wheel &obj);
    void print() override
    {
        std::cout << "Wheel part\n";
    }
    void sound() override
    {
        std::cout << "Whirr!\n";
    }
    void setName(std::string newName);
    void setModel(std::string newName);
    void setYear(std::size_t newName);
    void printInfo();
};

#endif
