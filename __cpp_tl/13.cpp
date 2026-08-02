#include <iostream>

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

  A<double>* b = new A<double>(44.5);
  b->show();

  A<string>* c = new A<string>("James");
  c->show();

  delete b, c;

  return 0;
}