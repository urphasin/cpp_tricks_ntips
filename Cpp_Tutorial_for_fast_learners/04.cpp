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


class DistanceClass {
  private:
    int feet;
    int inches;

  public:
    DistanceClass() : feet(0), inches(0) {}
    DistanceClass(int f, int n) : 
                  feet(f), inches(n) {}
    void add(const DistanceClass& d) {
      inches += d.inches;
      feet   += d.feet;
    }                
    void show() {
      cout << feet << "' " << inches << "\"" << endl;
    }
};

//##############################

// MAIN
int main() {
  // Write below this line
  DistanceClass object1;
  DistanceClass object2{1, 2};

  DistanceClass clone1Type1 = object1;
  DistanceClass clone1Type2(object1);

  DistanceClass clone2Type1 = object2;
  DistanceClass clone2Type2(object2);
  

  //show
  object1.show();
  object2.show();

  clone1Type1.show();
  clone1Type2.show();

  clone2Type1.show();
  clone2Type2.show();
  
  return 0;
}

// g++ 4.cpp -o ans && ./ans && rm -rf ./ans 


