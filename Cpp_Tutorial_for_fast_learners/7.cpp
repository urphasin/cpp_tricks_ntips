#include <iostream>
#include <stdexcept>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

double divide(double number, double by) {
  if (by == 0) {
    throw runtime_error("divide by zero");
  }

  return number / by;
}

int main() {
  double m, n;

  cout << "Enter a double number: ";
  cin >> m;
  cout << "Enter an other double number to divide " << m << " by: ";
  cin >> n;
  try {
    cout << m << " / " << n << ": " << divide(m, n) << endl;
    cout << "DONE!\n";
  }
  catch (runtime_error& ex) {
    cerr << "Exception occurred: " << ex.what();
  }

  return 0;
}