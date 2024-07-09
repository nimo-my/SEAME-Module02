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

    Car(const Car &obj)
    {
        *this = obj;
    }

    ~Car()
    {
        delete engine_;
        delete[] wheels_;
        delete[] brakes_;
        delete transmission_;
    }

    Car &operator=(const Car &obj)
    {
        this->engine_ = obj.engine_;
        for (int i = 0; i < 4; ++i)
        {
            this->wheels_[i] = obj.wheels_[i];
            this->brakes_[i] = obj.brakes_[i];
        }
        this->transmission_ = obj.transmission_;
        return (*this);
    }

    void printParts()
    {
        std::cout << "\n== (1) [Engine]'s print() function.==\n";
        engine_->print();

        std::cout << "\n== (2) Print() function of [Wheels] & [Breakes]. ==\n";
        for (int i = 0; i < 4; ++i)
        {
            wheels_[i].print();
            brakes_[i].print();
        }

        std::cout << "\n== (3) Print() function of [Transmission]. ==\n";
        transmission_->print();

        std::cout << "\n== (4) PrintInfo() function of [Engine] & [Wheels] & [Brakes]. ==\n";
        printInfo();

        std::cout << "\n== (4) PrintInfo() function of [Transmission]. ==\n";
        transmission_->printInfo(); // initial(default value)
        transmission_->setArrival("Korea");
        transmission_->setDeparture("Germany");
        transmission_->printInfo(); // changed value

        std::cout << "\n== (6) END OF printParts() function. ==\n";
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
};

#endif
