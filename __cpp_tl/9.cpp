#include <memory>
#include <iostream>
#include <string>

using namespace std;

class Girl {
private:
  string sex;
  string name;
  int age;
  double height;

public:
  // Default constructor
  Girl()
    : sex("Female"), name("Unknown"), age(0), height(0.0) {
  }

  // Parameterized constructor
  Girl(string s, string n, int a, double h)
    : sex(s), name(n), age(a), height(h) {
  }

  // Destructor
  ~Girl() {
    cout << "Girl Destructor Called.\n";
  }

  void introduce() const {
    cout << "Hi! I am a girl.\n";
    cout << "Name: " << name << '\n';
    cout << "Sex: " << sex << '\n';
    cout << "Age: " << age << '\n';
    cout << "Height: " << height << '\n';
  }
};

int main() {

  unique_ptr<Girl> girls[2] = { make_unique<Girl>("Female", "Alice", 20, 5.6), make_unique<Girl>("Female", "Jacky", 19, 5.8) };
  
  Girl g1;
  Girl g2("Female", "Alice", 20, 5.6);
  return 0;
}