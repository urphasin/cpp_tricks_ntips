#pragma once

struct Vector2D {
  private:
    double x, y;
  public:
    Vector2D(double, double);
    ~Vector2D() = default;

    void print();
    Vector2D operator+(const Vector2D&) const;
};