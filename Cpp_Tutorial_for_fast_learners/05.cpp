#include <sstream>
#include <iostream>
// #include <type_traits> // c++20
// #include <random>
#include <cstring>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>
#include <array>
#include <vector>
// #include <tuple>
#include <stack>
#include <queue>
#include <deque>
// #include <list>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <map>
// #include <bit>
#include <bitset>
#include <limits>
#include <numeric>
#include <functional>
#include <utility>
#include <memory>
using namespace std;


// CONSTANTS
const double pi = M_PI;
const std::string endColor = "\x1b[0m";
const std::string yellow = "\x1b[1;93m";


class A {
  public:
    void call() {
      cout << "A call" << endl;
    }
};

class B {
  public:
    virtual void call() {
      cout << "B call" << endl;
    }
};

class C : public A, public B {
  
};



//##############################

// MAIN
int main() {
  // Write below this line
  C c;

  c.B::call();
  c.A::call();
  
  
  return 0;
}

// g++ 5.cpp -o ans && ./ans && rm -rf ./ans 


