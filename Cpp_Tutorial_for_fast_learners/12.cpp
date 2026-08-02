#include <iostream>
#include <stdexcept>

using namespace std;

template<typename T>
class Calculator {
public:
  T add(T a, T b) {
    return a + b;
  }

  T subtract(T a, T b) {
    return a - b;
  }

  T multiply(T a, T b) {
    return a * b;
  }

  T divide(T a, T b) {
    if (b == 0)
      throw runtime_error("Cannot divide by zero.");

    return a / b;
  }

  T modulo(T a, T b) {
    if (b == 0)
      throw runtime_error("Cannot modulo by zero.");

    return a % b;
  }
};

int main() {

  cout << typeid("hello").name() << "\n\n";

  try {
    Calculator<double> calcDouble;

    cout << calcDouble.add(4.5, 2.5) << '\n';
    cout << calcDouble.divide(10.0, 2.0) << '\n';

    cout << calcDouble.divide(5.0, 0.0) << '\n';
  }
  catch (const runtime_error& e) {
    cerr << e.what() << '\n';
  }

  try {
    Calculator<int> calcInt;

    cout << calcInt.add(8, 3) << '\n';
    cout << calcInt.divide(20, 4) << '\n';
    cout << calcInt.modulo(20, 6) << '\n';

    cout << calcInt.divide(10, 0) << '\n';
  }
  catch (const runtime_error& e) {
    cerr << e.what() << '\n';
  }

  return 0;
}