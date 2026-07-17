#pragma once

#include <string>
#include <vector>
#include <iostream>


class Bin {
  private:
    // This alias is safely scoped ONLY inside MyClass
    template <typename T> using vector = std::vector<T>;

    vector<short> numbers;
    short count;
  public:
    // constructor
    Bin(vector<short> trash1);

    // operator overloaded member function
    short operator++();
    friend std::ostream& operator<<(
      std::ostream& out, const Bin& bin
    );
};