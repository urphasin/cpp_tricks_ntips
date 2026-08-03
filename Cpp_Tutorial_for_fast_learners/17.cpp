#include <iostream>
#include <memory>
#include <string>
#include <stdexcept>

using namespace std;

template<typename E>
class Array {
public:
  Array(int n) : sz(n) {
    data = new E[sz];
  }
  ~Array() {
    delete[] data;
  }

  int size() const { return sz; }

  void fill(const E& value) {
    for (int i = 0; i < sz; i++) {
      data[i] = value;
    }
  }

  // overload functions
  E& operator[](const int i) {
    if (i < 0 || i >= sz) {
      throw out_of_range("Index out of range");
    }
    return data[i];
  }

private:
  E* data;
  int sz;
};

int main() {
  try {
    Array<int>numbers(5);

    for (int i = 0; i < numbers.size(); i++) {
      numbers[i] = i * 4 + 1;
    }

    for (int i = 0; i < numbers.size(); i++) {
      cout << numbers[i] << ", ";
    }
    cout << endl;

  }
  catch (const exception& re) {
    cout << re.what() << "\n";
  }

  return 0;
}