#include "include/bin.hpp"

using std::ostream;

// Perfectly legal at the top of a .cpp file
using std::cout; 

short Bin::operator++() {
  return 0; 
}

ostream& operator<<(ostream& out, const Bin& bin) {
  for (auto i : bin.numbers){
    out << i << ", ";
  }
  return out;
}