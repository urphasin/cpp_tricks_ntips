#include "include/bin.hpp"

int main() {
  Bin b({5, 6, 4, 3});
  b.addTrash(14);
  b.addTrash({5, 1, 1, 4, 6});
  b.printInfo();
  std::cout << b << std::endl;
}