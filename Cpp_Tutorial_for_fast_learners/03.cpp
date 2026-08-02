#include <iostream>
using namespace std;

class Animal {
public:
  virtual void fly() {
    cout << "Animal Flying\n";
  }
};

class Bird {
public:
  virtual void fly() {
    cout << "Bird Flying\n";
  }
};

class Duck : public Animal, public Bird {
public:
  void fly() {
    cout << "Duck Flying\n";
  }
};

int main() {
  Duck d;

  d.fly();
  d.fly();
}

// g++ 0.cpp -o ans && ./ans && rm -rf ./ans 
