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
    Bin();
    Bin(vector<short> trash);

    // member functions
    void addTrash(short trash);
    void addTrash(vector<short> trash);
    void printInfo();

    // operator overloaded member function
    short operator++();
    friend std::ostream& operator<<(
      std::ostream& out, const Bin& bin
    );
};