// Vector.cpp
#include "my_vec.h"
#include <iostream>


Vector::Vector(double x, double y, double z) : x(x), y(y), z(z) {}

Vector::Vector() : x(0), y(0), z(0) {}

double Vector::GetX() const { return x; }
double Vector::GetY() const { return y; }
double Vector::GetZ() const { return z; }

void Vector::SetX(double val) { x = val; }
void Vector::SetY(double val) { y = val; }
void Vector::SetZ(double val) { z = val; }

Vector Vector::operator+(const Vector& rhs) const {
    return Vector(x + rhs.x, y + rhs.y, z + rhs.z);
}

Vector Vector::operator-(const Vector& rhs) const {
    return Vector(x - rhs.x, y - rhs.y, z - rhs.z);
}

Vector Vector::operator*(double scalar) const {
    return Vector(x * scalar, y * scalar, z * scalar);
}

double Vector::operator*(const Vector& rhs) const {
    return x * rhs.x + y * rhs.y + z * rhs.z;
}

std::ostream& operator<<(std::ostream& os, const Vector& v) {
    os << "(" << v.x << ", " << v.y << ", " << v.z << ")";
    return os;
}

int main() {
    Vector v1(1.0, 2.0, 3.0);
    Vector v2(4.0, 5.0, 6.0);

    std::cout << "v1: " << v1 << std::endl;
    std::cout << "v2: " << v2 << std::endl;

    // Other vector operations...
    return 0;
}