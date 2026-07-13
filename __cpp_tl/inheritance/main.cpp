#include <iostream>
#include <vector>
#include <string>
#include "include/playlist.hpp"
using namespace std;


void f(vector<double> d) {
    for (auto x : d) {
        double ans =  pow(x, 4) - 8*x*x + 1; 
        cout << "f(" << x << ") = " << ans << ",\t";
    }
    cout << endl;
}
void m1(vector<double> d) {
    for (auto x : d) {
        double ans = 4*pow(x, 3) - 16*x;
        cout << "f'(" << x << ") = " << ans << ",\t";
    }
    cout << endl;
}
void m2(vector<double> d) {
    for (auto x : d) {
        double ans = 12*x*x - 16;
        cout << "f''(" << x << ") = " << ans << ",\t";
    }
    cout << endl;
}

int main() {

  int x = add(5, 7);
  std::cout << x << "\n";
}