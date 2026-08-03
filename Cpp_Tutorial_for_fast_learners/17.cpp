#include <iostream>
#include <memory>
#include <string>
#include <stdexcept>

using namespace std;

template<typename E>
class Array {
public:
  Array(int n) : size(n) {
    data = new E[size];
  }
  ~Array() {
    delete data;
  }

  // overload functions
  void operator[]() {}

private:
  E* data;
  int size;
};

int main() {
  try {
    Array<int>numbers(5);
    for (int i = 0; i < numbers.size(); i++) {

    }

  } catch (runtime_error& re) {
    cout << 
  }

}