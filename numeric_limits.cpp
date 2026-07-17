#include <iostream>
#include <limits>

int main() {
  using std::cout;
  using std::endl;
  using std::numeric_limits;

  /* short */
  cout << "short : " << numeric_limits<short>::min() << " to " << numeric_limits<short>::max() << endl;

  // int
  cout << "int : " << numeric_limits<int>::min() << " to " << numeric_limits<int>::max() << endl;

  // double
  cout << "double : " << numeric_limits<double>::lowest() << " to " << numeric_limits<double>::max() << endl;
}

/*
run command:
g++ numeric_limits.cpp -o ans && ./ans && rm -rf ./ans
*/