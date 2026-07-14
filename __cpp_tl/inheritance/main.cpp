#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>
#include "include/playlist.hpp"
using namespace std;

double f(double x)
{
  double ans = 5*cos(x) - x - 1;
  return ans;
  // cout << "f(" << x << ") = " << ans << ",\t";
}
double m1(double x)
{
  double ans = -5*sin(x) - 1;
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
    double xn = 1.13;
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
  cout << "f is : " << f(3) << endl;
  NewtonMethod();
}