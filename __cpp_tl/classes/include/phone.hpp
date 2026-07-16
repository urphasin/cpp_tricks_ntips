#ifndef PHONE_H
#define PHONE_H

#include <iostream>
#include <vector>
#include <string>

class Phone {
  private:
    std::string name;

  public:
    const std::string& accessName() const;
};

#endif