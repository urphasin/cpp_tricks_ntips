#include "./include/vector2d.hpp"

int main() {
  
  Vector2D v1{5, 2};
  Vector2D v2{10, 15};

  Vector2D v3 = v1 + v2 + v1;
  v3.print();

  return 0;
}