#include "include/bin.hpp"

using std::ostream;
using std::cout; // Perfectly legal at the top of a .cpp file

short Bin::operator++() {
  return 0; 
}

ostream& operator<<(ostream& out, const Bin& bin) {

}