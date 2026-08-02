#include <iostream>
#include <memory>

using namespace std;

template <typename T>
class A {
public:
  A(T a) : m(a) {}
  void show() {
    cout << "My A-number is: " << m << endl;
  }
  ~A() {}
private:
  T m;
};

int main() {
  A a(56); // inferred like function templates
  a.show();

  
  A<string>* b = new A<string>("James");
  b->show();

  delete b;
  
  unique_ptr<A<double>> c = make_unique<A<double>>(44.5);
  c->show();

  return 0;
}