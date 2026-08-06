#include "19.h"

int main(){
  
  std::string arr[] = {"ma", "ma", "mia"};
  OwnArray<std::string, 3> ob(arr);
  ob.print();

  return 0;
  
}