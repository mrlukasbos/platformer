#include "Vector2.h"
#include <cmath>


double Vector2::dot(const Vector2 &other) const {
    return this->_x*other._x + this->_y*other._y;
}

double Vector2::dist(const Vector2 &other) const {
    return sqrt(dist2(other));
}

double Vector2::dist2(const Vector2 &other) const {
    return (*this - other).length2();
}

Vector2 Vector2::scale(double scalar) const {
    return {_x*scalar, _y*scalar};
}

Vector2 Vector2::normalize() const {
    if (this->length() == 0.0)
        return {0.0, 0.0};

    double d = 1.0/length();
    return {_x*d, _y*d};
}

double Vector2::length() const {
    return sqrt(this->length2());
}

double Vector2::length2() const {
    return (_x*_x + _y*_y);
}

double Vector2::angle() const {
    return atan2(_y, _x);
}

Vector2 Vector2::lerp(const Vector2 &other, double factor) const {
    return this->scale(factor) + other.scale(1 - factor);
}

Vector2 Vector2::rotate(double radians) const {
    double c = cos(radians);
    double s = sin(radians);
    return Vector2(_x*c - _y*s, _x*s + _y*c);
}

Vector2 Vector2::project(const Vector2 &lineA, const Vector2 &lineB) const {
    Vector2 ab = lineB - lineA;
    Vector2 ap = *this - lineA;
    double t = ap.dot(ab)/ab.dot(ab);
    if (t < 0) {
        return lineA;
    }
    else if (t > 1) {
        return lineB;
    }
    return lineA + ab.scale(t);
}

Vector2 Vector2::project2(const Vector2 &ab) const {
    return ab.scale(
        this->dot(ab)/ab.dot(ab));
}

bool Vector2::isNotNaN() const {
    /**
     * NaN is defined as not being equal to itself
     */
    return _x == _x && _y == _y;
}

Vector2 Vector2::stretchToLength(double desiredLength) const {
    if (length() == 0.0) {
        return {desiredLength, 0};
    }
    double frac = desiredLength/length();
    return {_x*frac, _y*frac};
}

double Vector2::cross(const Vector2 &other) const {
    return this->_x*other._y - this->_y*other._x;
}

bool Vector2::operator==(const Vector2 &other) const {
    return fabs(this->_x - other._x) < VECTOR_PRECISION && fabs(this->_y - other._y) < VECTOR_PRECISION;
}

bool Vector2::operator!=(const Vector2 &other) const {
    return ! (*this == other);
}

bool Vector2::operator<(const Vector2 &other) const {
    return this->length() < other.length();
}

// TODO report this to cppcheck
Vector2 Vector2::operator+=(const Vector2 &other) {
    return {this->_x += other._x, this->_y += other._y};
}

Vector2 Vector2::operator+=(const double &scalar) {
    return {_x += scalar, _y += scalar};
}

Vector2 Vector2::operator-=(const Vector2 &other) {
    return {this->_x -= other._x, this->_y -= other._y};
}

Vector2 Vector2::operator-=(const double &scalar) {
    return {_x -= scalar, _y -= scalar};
}

Vector2 Vector2::operator*=(const Vector2 &other) {
    return {this->_x *= other._x, this->_y *= other._y};
}

Vector2 Vector2::operator*=(const double &scalar) {
    return {_x *= scalar, _y *= scalar};
}

Vector2 Vector2::operator/=(const Vector2 &other) {
    return {this->_x /= other._x, this->_y /= other._y};
}

Vector2 Vector2::operator/=(const double &scalar) {
    return {_x /= scalar, _y /= scalar};
}

Vector2 Vector2::operator+(const Vector2 &other) const {
    return {_x + other._x, _y + other._y};
}

Vector2 Vector2::operator+(const double &scalar) const {
    return {_x + scalar, _y + scalar};
}

Vector2 Vector2::operator-(const Vector2 &other) const {
    return {this->_x - other._x, this->_y - other._y};
}

Vector2 Vector2::operator-(const double &scalar) const {
    return {_x - scalar, _y - scalar};
}

Vector2 Vector2::operator*(const Vector2 &other) const {
    return {this->_x*other._x, this->_y*other._y};
}

Vector2 Vector2::operator*(const double &scalar) const {
    return {_x*scalar, _y*scalar};
}

Vector2 Vector2::operator/(const Vector2 &other) const {
    return {this->_x/other._x, this->_y/other._y};
}

Vector2 Vector2::operator/(const double &scalar) const {
    return {_x/scalar, _y/scalar};
}

std::ostream &Vector2::write(std::ostream &os) const {
    return os << "{ x = " << _x << ", y = " << _y << " }";
}

void Vector2::setY(double y) {
    this->_y=y;
}

void Vector2::setX(double x) {
    this->_x = x;
}

double Vector2::x() {
    return _x;
}

double Vector2::y() {
    return _y;
}

std::ostream &operator<<(std::ostream &os, Vector2 const &vec) {
    return vec.write(os);
}


