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

    // member functions
    void printInfo() {
      using std::cout; // Works perfectly here (inside function scope)
      cout << "Printing bin details...\n";
    }

    // operator overloaded member function
    short operator++();
    friend std::ostream& operator<<(
      std::ostream& out, const Bin& bin
    );
};