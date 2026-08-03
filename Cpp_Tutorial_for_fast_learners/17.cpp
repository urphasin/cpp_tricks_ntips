#include <iostream>
#include <memory>
#include <string>
#include <stdexcept>

using namespace std;

template<typename E>
class Array {
public:
  Array(int n) : size(n) {
    data = new E[sz];
  }
  ~Array() {
    delete data;
  }

  int size() const { return sz; }
  
  // overload functions
  void operator[]() {}

private:
  E* data;
  int sz;
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