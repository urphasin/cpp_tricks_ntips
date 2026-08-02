#include <iostream>
#include <stdexcept>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class DivisionByZero : public runtime_error {
public:
  DivisionByZero() : runtime_error("divide by zero") {}
};

double divide(double number, double by) {
  if (by == 0) {
    throw DivisionByZero();
  }

  return number / by;
}

int main() {
  try {
    cout << divide(5, 0) << endl;
  } catch(DivisionByZero& d) {
    cerr << d.what() << endl;
  }
}