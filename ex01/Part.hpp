#pragma once
#ifndef __PART_HPP__
#define __PART_HPP__
#include <iostream>
#include <string>

class Part
{
  private:
    /* data */

  public:
    Part();
    Part(const Part &obj);
    Part &operator=(const Part &obj);
    virtual ~Part();

    virtual void print() = 0; // Pure virtual function to be overridden by derived classes
    virtual void sound() = 0; // Pure virtual function to be overridden by derived classes
};

#endif
