#include <string>
#include <iostream>

using namespace std;

class Human {
public:
  string name;
  int age;
  virtual ~Human() {
    cout << "Human destructor called\n";
  }
};

class Girl : public Human {
public:
  double height;
  ~Girl() {
    cout << "Girl destructor called\n";
  }
};


int main() {
  cout << sizeof(Human) << " bytes\n";
  cout << sizeof(Girl) << " bytes\n";

  cout << typeid("hello").name() << endl;

  Human* h = new Girl();
  delete h;

}

//g++ 11.cpp -o ans && ./ans && rm -rf ./ans 