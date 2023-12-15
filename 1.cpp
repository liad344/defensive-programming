#include <iostream>
class Vector {      
  private:             
    double x, y, z;

  public: 
    Vector(double x, double y, double z) : x(x), y(y), z(z) {}
    Vector() : x(0), y(0), z(0) {}

    double GetX() const {
        return x;
    }
    double GetY() const {
        return y;
    }
    double GetZ() const {
        return z;
    }

    void SetX(double val) {
        x = val;
    }
    void SetY(double val) {
        y = val;
    }
    void SetZ(double val) {
        z = val;
    }

    // Overload << operator as a friend function
    friend std::ostream& operator<<(std::ostream& os, const Vector& v) {
        os << "(" << v.x << ", " << v.y << ", " << v.z << ")";
        return os;
    }

     // Addition of two vectors
    Vector operator+(const Vector& rhs) const {
        return Vector(x + rhs.x, y + rhs.y, z + rhs.z);
    }

    // Subtraction of two vectors
    Vector operator-(const Vector& rhs) const {
        return Vector(x - rhs.x, y - rhs.y, z - rhs.z);
    }
        // Scalar Multiplication
    Vector operator*(double scalar) const {
        return Vector(x * scalar, y * scalar, z * scalar);
    }

    // Dot Product
    double operator*(const Vector& rhs) const {
        return x * rhs.x + y * rhs.y + z * rhs.z;
    }

};


int main() {
    Vector v1(1.0, 2.0, 3.0);
    Vector v2(4.0, 5.0, 6.0);

    std::cout << "Vector v1: " << v1 << std::endl;
    std::cout << "Vector v2: " << v2 << std::endl;

    Vector sum = v1 + v2;
    Vector diff = v1 - v2;
    Vector scaled = v1 * 2.0;
    double dotProduct = v1 * v2;

    std::cout << "Sum (v1 + v2): " << sum << std::endl;
    std::cout << "Difference (v1 - v2): " << diff << std::endl;
    std::cout << "Scalar Multiplication (v1 * 2.0): " << scaled << std::endl;
    std::cout << "Dot Product (v1 * v2): " << dotProduct << std::endl;

    return 0;
}