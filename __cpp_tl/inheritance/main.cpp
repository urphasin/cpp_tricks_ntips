#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>
#include <sstream>
#include "include/playlist.hpp"

using namespace std;

double f(double x)
{
  double ans = pow(x, 3) - 3*x + 6;
  return ans;
  // cout << "f(" << x << ") = " << ans << ",\t";
}
double m1(double x)
{
  double ans = 3*pow(x, 2) - 3;
  return ans;
  // cout << "f'(" << x << ") = " << ans << ",\t";
}
double m2(double x)
{
    double ans = 3*pow(x, 4) - 8*pow(x, 3) + 8;
    return ans;
    // cout << "f''(" << x << ") = " << ans << ",\t";
}
void NewtonMethod()
{
    std::cout << 
    std::fixed <<
    std::setprecision(6);
    double xn = 1;
    for (int i = 0; i < 10; i++)
    {
        if (std::abs(m1(xn)) < 1e-12)
        {
            std::cout << "Derivative too small\n";
            return;
        }
        xn = xn - (f(xn) / m1(xn));
        cout << xn << ", ";
    }
    cout << std::setprecision(6) << endl;
}



int main() {

  int x = add(5, 7);
  std::cout << x << "\n";

  double ans = 0;
  for(int i = 0; i <= 5; i++) {
    ans += (pow(-1, i) * pow(2, i)); 
  }
  stringstream ss;
  ss << "ans is " << ans;

  std::cout << 
  fixed <<
  setprecision(10) <<
  ss.str() << 
  setprecision(6) <<
  endl;
  
}