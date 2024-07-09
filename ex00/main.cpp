#include "Car.hpp"
#include "SportsCar.hpp"
#include <iostream>
// #include <memory> // Dynamic Memory management library

int main()
{
    std::unique_ptr<Car> cc(new Car);
    std::cout << std::endl;

    std::unique_ptr<SportsCar> sc(new SportsCar);
    std::cout << std::endl;

    cc->setMake(2000);
    cc->setModel("BMW");
    cc->setYear(1990);

    std::cout << std::endl;
    sc->setMake(2024);
    sc->setModel("Audi");
    sc->setYear(2018);
    sc->setTopSpeed(200);

    std::cout << "\n==== [Car] Call drive function. ====\n";
    cc->drive();

    std::cout << "\n==== [SportsCar] Call drive function. ====\n";
    sc->drive();

    std::cout << "\n==== [Car] Creataaed a unique pointer called 'new_cc' "
              << "that can poin to the Car class.====\n";
    std::unique_ptr<Car> new_cc;

    std::cout << "\n==== [Car] moved cc's unique ptr to new_cc. ====\n";
    new_cc = std::move(cc);

    // unique_ptr stores one pointer only.
    // We can assign a different object by removing
    // the current object from the pointer.
    std::cout << "\n==== [Car] print new_cc's drive() function. ====\n";
    new_cc->drive();

    // Do not have to delete since we used unique_ptr.
    std::cout << "\n==== [ENDING] ====\n";
    return 0;
}