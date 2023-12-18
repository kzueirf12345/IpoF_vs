#pragma once

#include "Coordinate.h"
#include "Constants.h"

#include <functional>

struct Atom
{
public:
    Atom(Coordinate *coor) noexcept
        : coor(std::move(coor)) {}
    Atom(Coordinate *coor, std::vector<Coordinate *> verle) noexcept
        : coor(std::move(coor)), verle(std::move(verle)) {}
    Atom(Coordinate *coor, std::vector<Coordinate *> verle, std::vector<Coordinate*> big_verle) noexcept
        : coor(std::move(coor)), verle(std::move(verle)), big_verle(std::move(big_verle)) {}

    [[nodiscard]] const std::vector<Coordinate *> &Verle() const noexcept { return verle; }
    [[nodiscard]] std::vector<Coordinate *> &Verle() noexcept { return verle; }
    [[nodiscard]] const std::vector<Coordinate *> &BigVerle() const noexcept { return big_verle; }
    [[nodiscard]] std::vector<Coordinate *> &BigVerle() noexcept { return big_verle; }
    [[nodiscard]] Coordinate &Coor() noexcept { return *coor; }
    [[nodiscard]] const Coordinate &Coor() const noexcept { return *coor; }

    bool operator==(const Atom &other) const noexcept
    {
        return this->coor == other.coor;
    }
    bool operator!=(const Atom &other) const noexcept
    {
        return this->coor != other.coor;
    }

    Coordinate SumOfFlows() const noexcept;
    double SumOfPotentials() const noexcept;

private:
    Coordinate *coor;
    std::vector<Coordinate *> verle;
    std::vector<Coordinate *> big_verle;

    double Flow(double distance) const noexcept;
    double Forse(double distance) const noexcept;
    double Potential(double distance) const noexcept;
};