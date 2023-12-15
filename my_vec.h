// my_vec.h
#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

class Vector {
  private:
    double x, y, z;

  public:
    Vector(double x, double y, double z);
    Vector();

    double GetX() const;
    double GetY() const;
    double GetZ() const;

    void SetX(double val);
    void SetY(double val);
    void SetZ(double val);

    Vector operator+(const Vector& rhs) const;
    Vector operator-(const Vector& rhs) const;
    Vector operator*(double scalar) const;
    double operator*(const Vector& rhs) const;

    friend std::ostream& operator<<(std::ostream& os, const Vector& v);
};

#endif // VECTOR_H