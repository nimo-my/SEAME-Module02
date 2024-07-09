#pragma once
#ifndef __TRANSMISSION_HPP__
#define __TRANSMISSION_HPP__
#include "Part.hpp"

class Transmission : public Part
{
  private:
    /* data */
  public:
    Transmission(/* args */);
    Transmission(const Transmission &obj);
    ~Transmission();

    Transmission &operator=(const Transmission &obj);
    void print() override
    {
        std::cout << "Transmission part\n";
    }
    void sound() override
    {
        std::cout << "(Car going somewhere..)\n";
    }
};

#endif
