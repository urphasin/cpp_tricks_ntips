#include "include/bin.hpp"

using std::ostream;

// Perfectly legal at the top of a .cpp file
using std::cout; 


// constructor
Bin::Bin() : numbers() {}
Bin::Bin(vector<short> trash) {
  numbers.insert(
    numbers.end(),
    trash.begin(), trash.end()
  );
}

// member functions
void Bin::addTrash(short trash) {
  numbers.emplace(
    numbers.begin(),
    trash
  );
}

void Bin::addTrash(vector<short> trash) {
  numbers.insert(
    numbers.begin(),
    trash.begin(),
    trash.end()
  );
}

void Bin::printInfo() {
  // Works perfectly here (inside function scope)
  using std::cout; 
  cout << "Printing bin details...\n";
}


// operator overload functions
short Bin::operator++() {
  return 0; 
}

ostream& operator<<(ostream& out, const Bin& bin) {
  for (auto i : bin.numbers){
    out << i << ", ";
  }
  return out;
}