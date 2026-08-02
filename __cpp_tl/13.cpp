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

  
  A<string>* d = new A<string>("James");
  d->show();
  
  /* object b, e creation is only possible since c++ 17. But the argument on the right
   must match the type on the left */
  A<const char*>* b = new A("James");
  b->show();

  A<long>* e = new A(2000L);
  e->show();

  delete b, d, e;
  
  unique_ptr<A<double>> c = make_unique<A<double>>(44.5);
  c->show();

  return 0;
}