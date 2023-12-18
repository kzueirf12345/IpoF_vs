#pragma once

#include "Cell.h"

class Crystal
{
public:
    Crystal() = default;
    Crystal(const Cell& cell, long long x_size, long long y_size, long long z_size, double pgu_size);
    Crystal(const Cell& cell, long long size, double pgu_size)
    : Crystal(cell, size, size, size, pgu_size) {}

    [[nodiscard]] const Cell& ElementaryCell() const {return cell;}
    [[nodiscard]] Cell& ElementaryCell() {return cell;}
    [[nodiscard]] long long XSize() const noexcept {return x_size;}
    [[nodiscard]] long long YSize() const noexcept {return y_size;}
    [[nodiscard]] long long ZSize() const noexcept {return z_size;}
    [[nodiscard]] const std::vector <Atom>& ModelAtomsVec() const noexcept {return model;}
    [[nodiscard]] std::vector <Atom>& ModelAtomsVec() noexcept {return model;}
    [[nodiscard]] const std::vector <Coordinate*>& PguCoordinatesVec() const noexcept {return pgu;}
    [[nodiscard]] std::vector <Coordinate*>& PguCoordinatesVec() noexcept {return pgu;}
    [[nodiscard]] const std::vector <Coordinate>& AllCoordinatesVec() const noexcept {return all;}
    [[nodiscard]] std::vector <Coordinate>& AllCoordinatesVec() noexcept {return all;}

    void GradientIteration();
    double Energy() const noexcept;
private:
    long long x_size, y_size, z_size;
    Cell cell;

    std::vector <Atom> model;
    std::vector <Coordinate*> pgu;
    double pgu_size;
    std::vector <Coordinate> all;

    double time = 0;

    void PguTranslate(Coordinate coor);
};