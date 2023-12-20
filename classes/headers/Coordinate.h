#pragma once
#include <climits>
#include <cmath>
#include <functional>
#include <iomanip>
#include <iostream>

struct Coordinate {
    double x, y, z;

    Coordinate() noexcept : x(0.0), y(0.), z(0.) {}
    Coordinate(double x, double y, double z) noexcept : x(x), y(y), z(z) {}

    bool operator==(const Coordinate &other) const noexcept {
        return this->x == other.x && this->y == other.y && this->z == other.z;
    }
    bool operator!=(const Coordinate &other) const noexcept {
        return this->x != other.x || this->y != other.y || this->z != other.z;
    }

    Coordinate operator+(const Coordinate &other) const noexcept {
        return Coordinate(this->x + other.x, this->y + other.y,
                          this->z + other.z);
    }
    Coordinate operator-(const Coordinate &other) const noexcept {
        return Coordinate(this->x - other.x, this->y - other.y,
                          this->z - other.z);
    }
    Coordinate operator*(const Coordinate &other) const noexcept {
        return Coordinate(this->x * other.x, this->y * other.y,
                          this->z * other.z);
    }
    Coordinate operator/(const Coordinate &other) const noexcept {
        return Coordinate(this->x / other.x, this->y / other.y,
                          this->z / other.z);
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

    Coordinate &operator+=(const Coordinate &other) noexcept {
        this->x += other.x;
        this->y += other.y;
        this->z += other.z;
        return *this;
    }

    friend std::ostream &operator<<(std::ostream &out, const Coordinate &vec);
};

double Distance(const Coordinate &first, const Coordinate &second) noexcept;