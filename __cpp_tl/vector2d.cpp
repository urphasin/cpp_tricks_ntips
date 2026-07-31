#include "./include/vector2d.hpp"
#include <iostream>

using namespace std;

Vector2D::Vector2D(double x, double y) : x(x), y(y) {}

void Vector2D::print() {
  cout << "x : " << x << " , " << "y : " << y << "\n";
}