#ifndef VECTOR2_H
#define VECTOR2_H

#include <iostream>

class Vector2 {
 private:
  constexpr static double VECTOR_PRECISION=0.00001;
  double _x;
  double _y;
 public:
  [[nodiscard]] double x();

  [[nodiscard]] double y();

  /**
   * \brief The zero vector.
   */
  constexpr Vector2()
      : _x{0.0}, _y{0.0} { }

  constexpr Vector2(const Vector2 &copy)
      : _x{copy._x}, _y{copy._y} { };

  constexpr Vector2(const double x, const double y)
      : _x{x}, _y{y} { }

  /**
   * \brief Calculate the dot product of this vector with another. (this . other)
   */
  [[nodiscard]] double dot(const Vector2 &other) const;

  /**
   * \brief Calculate the distance between this vector and another.
   */
  [[nodiscard]] double dist(const Vector2 &other) const;

  /**
   * \brief Calculate the square of the distance between this vector and another.
   * In cases where you only need to know how a number of distances relate to each other
   * (for example, which vector is closest to a specific other one), this method is
   * preferred to Vector2::dist, since you don't need the expensive sqrt operation.
   */
  [[nodiscard]] double dist2(const Vector2 &other) const;

  /**
   * \brief Scales this vector by a scalar.
   */
  [[nodiscard]] Vector2 scale(double scalar) const;

  /**
   * \brief Normalizes this vector such that it will have a length of 1. The angle of the
   * vector is preserved. In other words, this method maps the vector onto the unit circle.
   */
  [[nodiscard]] Vector2 normalize() const;

  /**
   * \brief Calculate the length of this vector.
   */
  [[nodiscard]] double length() const;

  /**
   * \brief Calculate the length squared of this vector.
   */
  [[nodiscard]] double length2() const;

  /**
   * \brief Calculate the angle of this vector, viewed from {0, 0}.
   * This uses the atan2 function, which has the following results:
   *     - The positive x-axis has angle 0
   *     - Vectors with a positive y value have a negative angle
   *     - Vectors with a negative or zero y value have a positive angle
   *     - The angle of the zero vector is undefined.
   */

  [[nodiscard]] double angle() const;

  /**
   * \brief Performs linear interpolation/extrapolation.
   * 	   - If factor == 0, the result is a copy of this vector
   * 	   - If factor == 1, the result is a copy of other
   * 	   - For any other factor, the result is the vector at
   * 	     (factor*100)% along the way between this vector and the other.
   * For example, {0, 0}.lerp({1, -2}, 0.5) == {0.5, -1}
   */
  [[nodiscard]] Vector2 lerp(const Vector2 &other, double factor) const;

  /**
   * \brief Rotates this vector around the origin.
   */
  [[nodiscard]] Vector2 rotate(double radials) const;

  /**
   * \brief Projects this vector onto a line segment defined by two other vectors.
   * The result is the point on the line segment (line_a, line_b) which is closest to
   * this vector.
   */
  [[nodiscard]] Vector2 project(const Vector2 &line_a, const Vector2 &line_b) const;

  /**
   * \brief Projects this vector onto another vector.
   * The result is a vector.
   */
  [[nodiscard]] Vector2 project2(const Vector2 &ab) const;

  /**
   * \brief Checks whether both components of this vector are real (non-NaN) values.
   */
  [[nodiscard]] bool isNotNaN() const;

  /*
   * \brief calculates the cross product
   */
  [[nodiscard]] double cross(const Vector2 &other) const;

  /**
   * Does the exact same as project... (?)
   */
  [[nodiscard]] Vector2 closestPointOnVector(const Vector2 &startPoint, const Vector2 &point) const;

  /**
   * \brief Creates a vector with the same angle as this one, but with the specified length.
   */
  [[nodiscard]] Vector2 stretchToLength(double length) const;

  /**
   * \brief Checks for equality.
   */
  bool operator==(const Vector2 &other) const;

  /**
   * \brief Checks for inequality.
   */
  bool operator!=(const Vector2 &other) const;

  /**
   * \brief Compares the length of this vector and another. The only real purpose for
   * this operator is to allow vectors to be used as map keys.
   */
  bool operator<(const Vector2 &other) const;

  Vector2 operator+=(const Vector2 &other);

  Vector2 operator-=(const Vector2 &other);

  Vector2 operator*=(const Vector2 &other);

  /**
   * Explicitly asserts other to prevent division by 0
   */
  Vector2 operator/=(const Vector2 &other);

  Vector2 operator+=(const double &scalar);

  Vector2 operator-=(const double &scalar);

  Vector2 operator*=(const double &scalar);

  Vector2 operator/=(const double &scalar);

  /**
   * \brief Adds another vector to this one, component-wise
   */
  Vector2 operator+(const Vector2 &other) const;

  /**
   * \brief Adds a scalar to both components of this vector.
   */
  Vector2 operator+(const double &scalar) const;

  /**
   * \brief Subtracts another vector from this one, component-wise
   */
  Vector2 operator-(const Vector2 &other) const;

  /**
   * \brief Subtracts a scalar from both components of this vector.
   */
  Vector2 operator-(const double &scalar) const;

  /**
   * \brief Multiplies another vector with this one, component-wise
   */
  Vector2 operator*(const Vector2 &other) const;

  /**
   * \brief Scales this method by a scalar.
   * This operator behaves identically to the Vector2::scale(double) method.
   */
  Vector2 operator*(const double &scalar) const;

  /**
   * \brief Divides this vector by another, component-wise.
   */
  Vector2 operator/(const Vector2 &other) const;

  /**
   * \brief Scales this method by the inverse of a scalar.
   */
  Vector2 operator/(const double &other) const;

  /**
   * \brief Writes a textual representation of this vector to the given output stream.
   */
  std::ostream &write(std::ostream &os) const;

  void setY(double y);

  void setX(double x);
};

/**
 * \brief Writes a vector to an output stream.
 */
std::ostream &operator<<(std::ostream &os, Vector2 const &vec);

#endif //PLATFORMER_SRC_VECTOR2_H_
