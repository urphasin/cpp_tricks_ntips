#include <iostream>
#include <memory>

using namespace std;

template<typename T>
void printType() {
    std::cout << __PRETTY_FUNCTION__ << "\n\n";
}

template <typename E, typename T>
class BC{
public:
    BC(E b, T c): b(b), c(c){}
    void print(){
        cout << "b: " << b << ", "
             << "c: " << c << endl;
    }
    ~BC(){}
private:
    E b;
    T c;
};

int main(){
  printType<BC<short, short>>();
  cout << typeid(BC<int, string>).name() << "\n\n";
  
  BC<int, double> bc(10, 89.05);
  bc.print();

  BC<string, short> *bcptr = new BC<string, short>("Washington", 10);
  bcptr->print();
  delete bcptr;

  auto p = make_unique<BC<int, long>>(10, 100L);
  p->print();

  return 0;
}