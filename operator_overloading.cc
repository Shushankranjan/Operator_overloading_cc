#include <iostream>

class Vector {
private:
    int x, y;

public:
    Vector(int x = 0, int y = 0) : x(x), y(y) {}

    // Overloading the + operator
    Vector operator+(const Vector& other) const {
        return Vector(x + other.x, y + other.y);
    }

    // Overloading the - operator
    Vector operator-(const Vector& other) const {
        return Vector(x - other.x, y - other.y);
    }

    // Overloading the * operator for scalar multiplication
    Vector operator*(int scalar) const {
        return Vector(x * scalar, y * scalar);
    }

    // Overloading the << operator for output
    friend std::ostream& operator<<(std::ostream& os, const Vector& vec) {
        os << "(" << vec.x << ", " << vec.y << ")";
        return os;
    }
};

int main() {
    Vector v1(1, 2);
    Vector v2(3, 4);

    Vector sum = v1 + v2;
    Vector diff = v1 - v2;
    Vector scaled = v1 * 3;

    std::cout << "v1 + v2 = " << sum << std::endl;
    std::cout << "v1 - v2 = " << diff << std::endl;
    std::cout << "v1 * 3 = " << scaled << std::endl;

    return 0;
}
