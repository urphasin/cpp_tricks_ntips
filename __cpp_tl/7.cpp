#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

double divide(double number, double by){
  if(by == 0){
    throw by;
  }

  return number / by;
}

int main() {
  double m, n;

  cout << "Enter a double number: ";
  cin >> m;
  cout << "Enter another double number to divide " << m << " by: ";
  cin >> n;
  cout << m << " / "  << n << ": " << divide(m, n) << endl;
  cout << "DONE!\n";

  double y = divide(m, n);
  cout << y + 1 << endl;

  return 0;
}