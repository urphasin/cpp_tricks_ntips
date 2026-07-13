#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>
#include "include/playlist.hpp"
using namespace std;

double f(double x)
{
  double ans = pow(x, 4) - 75;
  return ans;
  // cout << "f(" << x << ") = " << ans << ",\t";
}
double m1(double x)
{
  double ans = 4*pow(x, 3);
  return ans;
  // cout << "f'(" << x << ") = " << ans << ",\t";
}
double m2(double x)
{
    double ans = -2 * (cos(x) + pow(cos(x), 2) - pow(sin(x), 2));
    return ans;
    // cout << "f''(" << x << ") = " << ans << ",\t";
}
void NewtonMethod()
{
    std::cout << 
    std::fixed <<
    std::setprecision(21);
    double xn = 2.5;
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
  NewtonMethod();
}