#pragma once
#include <iostream>
#include <climits>
#include <functional>
#include <iomanip>
#include <cmath>

struct Coordinate
{
    double x, y, z;

    Coordinate () noexcept
        : x(0.0), y(0.), z(0.) {}
    Coordinate(double x, double y, double z) noexcept
        : x(x), y(y), z(z) {}

    bool operator==(const Coordinate &other)const noexcept {
        return std::abs(this->x - other.x) <= __DBL_EPSILON__ && std::abs(this->y - other.y) <= __DBL_EPSILON__ && std::abs(this->z - other.z) <= __DBL_EPSILON__;
    }
    bool operator!=(const Coordinate &other)const noexcept {
        return std::abs(this->x - other.x) > __DBL_EPSILON__ && std::abs(this->y - other.y) > __DBL_EPSILON__ && std::abs(this->z - other.z) > __DBL_EPSILON__;
    }

    Coordinate operator+(const Coordinate &other) const noexcept {
        return Coordinate(this->x + other.x, this->y + other.y, this->z + other.z);
    }
    Coordinate operator-(const Coordinate &other) const noexcept {
        return Coordinate(this->x - other.x, this->y - other.y, this->z - other.z);
    }
    Coordinate operator*(const Coordinate &other) const noexcept {
        return Coordinate(this->x * other.x, this->y * other.y, this->z * other.z);
    }
    Coordinate operator/(const Coordinate &other) const noexcept {
        return Coordinate(this->x / other.x, this->y / other.y, this->z / other.z);
    }
    
    Coordinate operator+(double other) const noexcept {
        return Coordinate(this->x + other, this->y + other, this->z + other);
    }
    Coordinate operator-(double other) const noexcept {
        return Coordinate(this->x - other, this->y - other, this->z - other);
    }
    Coordinate operator*(double other) const noexcept {
        return Coordinate(this->x * other, this->y * other, this->z * other);
    }
    Coordinate operator/(double other) const noexcept {
        return Coordinate(this->x / other, this->y / other, this->z / other);
    }

    Coordinate& operator+=(const Coordinate& other) noexcept
    {
        this->x += other.x;
        this->y += other.y;
        this->z += other.z;
        return *this;
    }

    friend std::ostream &operator<<(std::ostream &out, const Coordinate &vec);
};

double Distance(const Coordinate &first, const Coordinate &second) noexcept;