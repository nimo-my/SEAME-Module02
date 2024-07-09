#pragma once
#ifndef __CAR_CPP__
#define __CAR_CPP__

#include "Brake.hpp"
#include "Engine.hpp"
#include "Part.hpp"
#include "Transmission.hpp"
#include "Wheel.hpp"

#include <iostream>
#include <string>

class Car
{
  private:
    Engine *engine_;
    Wheel *wheels_;
    Brake *brakes_;
    Transmission *transmission_;

  public:
    Car()
    {
        engine_ = new Engine();
        wheels_ = new Wheel[4];
        brakes_ = new Brake[4];
        transmission_ = new Transmission();
    }

    void printParts()
    {
        std::cout << "\n== (1) [Engine]'s print() function.==\n";
        engine_->print();

        std::cout << "\n== (2) print() function of [Wheels] & [Breakes]. ==\n";
        for (int i = 0; i < 4; ++i)
        {
            wheels_[i].print();
            brakes_[i].print();
        }

        std::cout << "\n== (3) print() function of [Transmission]. ==\n";
        transmission_->print();

        std::cout << "\n== (4) print info of [Engine] & [Wheels] & [Brakes]. ==\n";
        printInfo();

        std::cout << "\n== (5) END OF printParts() function. ==\n";
    }

    void printInfo()
    {
        engine_->printInfo();
        for (int i = 0; i < 4; ++i)
        {
            wheels_->printInfo();
            brakes_->printInfo();
        }
    }

    ~Car()
    {
        delete engine_;
        delete[] wheels_;
        delete[] brakes_;
        delete transmission_;
    }
};

#endif
