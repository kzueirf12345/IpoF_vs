#include "headers/Crystal.h"

Crystal::Crystal(const Cell &cell, long long x_size, long long y_size,
                 long long z_size, double pgu_size)
    : cell(cell),
      x_size(x_size),
      y_size(y_size),
      z_size(z_size),
      pgu_size(pgu_size) {
    CreateModel();
    UpdateModelVerle();
}

void Crystal::CreateModel() {
    all.reserve(50 * x_size * y_size * z_size * cell.CoordinatesVec().size());
    for (long long x = 0; x < x_size; ++x) {
        for (long long y = 0; y < y_size; ++y) {
            for (long long z = 0; z < z_size; ++z) {
                for (const auto &coor : cell.CoordinatesVec()) {
                    Coordinate temp_coor(coor.x + x * cell.XSize(),
                                         coor.y + y * cell.YSize(),
                                         coor.z + z * cell.ZSize());
                    all.emplace_back(std::move(temp_coor));
                    model.emplace_back(Atom(&all.back()));
                    PguTranslate(all.back());
                }
            }
        }
    }
}
void Crystal::PguTranslate(Coordinate coor) {
    const double x_limit = XSize() * cell.XSize();
    const double y_limit = YSize() * cell.YSize();
    const double z_limit = ZSize() * cell.ZSize();
    // x
    Coordinate temp_coor(coor);
    if (coor.x <= pgu_size) {
        temp_coor = std::move(Coordinate(coor.x + x_limit, coor.y, coor.z));
        all.emplace_back(temp_coor);
        pgu.emplace_back(&all.back());
        // y
        if (coor.y <= pgu_size) {
            temp_coor = std::move(
                Coordinate(coor.x + x_limit, coor.y + y_limit, coor.z));
            all.emplace_back(temp_coor);
            pgu.emplace_back(&all.back());
            // z
            if (coor.z <= pgu_size) {
                temp_coor = std::move(Coordinate(
                    coor.x + x_limit, coor.y + y_limit, coor.z + z_limit));
                all.emplace_back(temp_coor);
                pgu.emplace_back(&all.back());
            }
            if (z_limit - pgu_size <= coor.z) {
                temp_coor = std::move(Coordinate(
                    coor.x + x_limit, coor.y + y_limit, coor.z - z_limit));
                all.emplace_back(temp_coor);
                pgu.emplace_back(&all.back());
            }
        }
        if (y_limit - pgu_size <= coor.y) {
            temp_coor = std::move(
                Coordinate(coor.x + x_limit, coor.y - y_limit, coor.z));
            all.emplace_back(temp_coor);
            pgu.emplace_back(&all.back());
            // z
            if (coor.z <= pgu_size) {
                temp_coor = std::move(Coordinate(
                    coor.x + x_limit, coor.y - y_limit, coor.z + z_limit));
                all.emplace_back(temp_coor);
                pgu.emplace_back(&all.back());
            }
            if (z_limit - pgu_size <= coor.z) {
                temp_coor = std::move(Coordinate(
                    coor.x + x_limit, coor.y - y_limit, coor.z - z_limit));
                all.emplace_back(temp_coor);
                pgu.emplace_back(&all.back());
            }
        }

        temp_coor = std::move(Coordinate(coor.x + x_limit, coor.y, coor.z));

        // z
        if (coor.z <= pgu_size) {
            temp_coor = std::move(
                Coordinate(coor.x + x_limit, coor.y, coor.z + z_limit));
            all.emplace_back(temp_coor);
            pgu.emplace_back(&all.back());
        }
        if (z_limit - pgu_size <= coor.z) {
            temp_coor = std::move(
                Coordinate(coor.x + x_limit, coor.y, coor.z - z_limit));
            all.emplace_back(temp_coor);
            pgu.emplace_back(&all.back());
        }
    }
    if (x_limit - pgu_size <= coor.x) {
        temp_coor = std::move(Coordinate(coor.x - x_limit, coor.y, coor.z));
        all.emplace_back(temp_coor);
        pgu.emplace_back(&all.back());

        // y
        if (coor.y <= pgu_size) {
            temp_coor = std::move(
                Coordinate(coor.x - x_limit, coor.y + y_limit, coor.z));
            all.emplace_back(temp_coor);
            pgu.emplace_back(&all.back());

            // z
            if (coor.z <= pgu_size) {
                temp_coor = std::move(Coordinate(
                    coor.x - x_limit, coor.y + y_limit, coor.z + z_limit));
                all.emplace_back(temp_coor);
                pgu.emplace_back(&all.back());
            }
            if (z_limit - pgu_size <= coor.z) {
                temp_coor = std::move(Coordinate(
                    coor.x - x_limit, coor.y + y_limit, coor.z - z_limit));
                all.emplace_back(temp_coor);
                pgu.emplace_back(&all.back());
            }
        }
        if (y_limit - pgu_size <= coor.y) {
            temp_coor = std::move(
                Coordinate(coor.x - x_limit, coor.y - y_limit, coor.z));
            all.emplace_back(temp_coor);
            pgu.emplace_back(&all.back());

            // z
            if (coor.z <= pgu_size) {
                temp_coor = std::move(Coordinate(
                    coor.x - x_limit, coor.y - y_limit, coor.z + z_limit));
                all.emplace_back(temp_coor);
                pgu.emplace_back(&all.back());
            }
            if (z_limit - pgu_size <= coor.z) {
                temp_coor = std::move(Coordinate(
                    coor.x - x_limit, coor.y - y_limit, coor.z - z_limit));
                all.emplace_back(temp_coor);
                pgu.emplace_back(&all.back());
            }
        }

        temp_coor = std::move(Coordinate(coor.x - x_limit, coor.y, coor.z));

        // z
        if (coor.z <= pgu_size) {
            temp_coor = std::move(
                Coordinate(coor.x - x_limit, coor.y, coor.z + z_limit));
            all.emplace_back(temp_coor);
            pgu.emplace_back(&all.back());
        }
        if (z_limit - pgu_size <= coor.z) {
            temp_coor = std::move(
                Coordinate(coor.x - x_limit, coor.y, coor.z - z_limit));
            all.emplace_back(temp_coor);
            pgu.emplace_back(&all.back());
        }
    }

    // y
    if (coor.y <= pgu_size) {
        temp_coor = std::move(Coordinate(coor.x, coor.y + y_limit, coor.z));
        all.emplace_back(temp_coor);
        pgu.emplace_back(&all.back());
        // z
        if (coor.z <= pgu_size) {
            temp_coor = std::move(
                Coordinate(coor.x, coor.y + y_limit, coor.z + z_limit));
            all.emplace_back(temp_coor);
            pgu.emplace_back(&all.back());
        }
        if (z_limit - pgu_size <= coor.z) {
            temp_coor = std::move(
                Coordinate(coor.x, coor.y + y_limit, coor.z - z_limit));
            all.emplace_back(temp_coor);
            pgu.emplace_back(&all.back());
        }
    }
    if (y_limit - pgu_size <= coor.y) {
        temp_coor = std::move(Coordinate(coor.x, coor.y - y_limit, coor.z));
        all.emplace_back(temp_coor);
        pgu.emplace_back(&all.back());
        // z
        if (coor.z <= pgu_size) {
            temp_coor = std::move(
                Coordinate(coor.x, coor.y - y_limit, coor.z + z_limit));
            all.emplace_back(temp_coor);
            pgu.emplace_back(&all.back());
        }
        if (z_limit - pgu_size <= coor.z) {
            temp_coor = std::move(
                Coordinate(coor.x, coor.y - y_limit, coor.z - z_limit));
            all.emplace_back(temp_coor);
            pgu.emplace_back(&all.back());
        }
    }

    // z
    if (coor.z <= pgu_size) {
        temp_coor = std::move(Coordinate(coor.x, coor.y, coor.z + z_limit));
        all.emplace_back(temp_coor);
        pgu.emplace_back(&all.back());
    }
    if (z_limit - pgu_size <= coor.z) {
        temp_coor = std::move(Coordinate(coor.x, coor.y, coor.z - z_limit));
        all.emplace_back(temp_coor);
        pgu.emplace_back(&all.back());
    }
}

void Crystal::UpdateModelVerle() {
    std::array<std::jthread, 8> tasks = {
        std::jthread(&Crystal::UpdateModelVerleTh, this, 1),
        std::jthread(&Crystal::UpdateModelVerleTh, this, 2),
        std::jthread(&Crystal::UpdateModelVerleTh, this, 3),
        std::jthread(&Crystal::UpdateModelVerleTh, this, 4),
        std::jthread(&Crystal::UpdateModelVerleTh, this, 5),
        std::jthread(&Crystal::UpdateModelVerleTh, this, 6),
        std::jthread(&Crystal::UpdateModelVerleTh, this, 7),
        std::jthread(&Crystal::UpdateModelVerleTh, this, 8)};
}
void Crystal::UpdateModelVerleTh(long long num) {
    const size_t sz = this->model.size() / 8;
    const size_t start = sz * (num - 1),
                 end = (num == 8 ? this->model.size() : num * sz);
    for (size_t i = start; i < end; ++i) {
        this->model[i].Verle().clear();
        FillVerle(this->model[i]);
    }
}
void Crystal::FillVerle(Atom &atom) {
    const Coordinate coor = atom.Coor();
    for (size_t i = 0; i < all.size(); ++i) {
        if (Distance(coor, all[i]) < R_VERLE && coor != all[i]) {
            atom.Verle().emplace_back(&all[i]);
        }
    }
}

/////////////////////////////////////////////////////////
//// Gradient
/////////////////////////////////////////////////////////

void Crystal::GradientIteration() {
    std::vector<Atom> cur_model(this->model);
    long long freq = 997;  // simple number
    for (size_t i = 0; i < ITERATIONS_CNT; ++i) {
        std::vector<Atom> prev_model(std::move(cur_model));
        cur_model = this->model;
        for (size_t j = 0; j < cur_model.size(); ++j) {
            const Atom cur_position(cur_model[j]);
            const Atom prev_position(prev_model[j]);

            const Coordinate acceleration = cur_position.SumOfFlows() / MASS;
            this->model[j].Coor() = cur_position.Coor() * 2. -
                                    prev_position.Coor() +
                                    acceleration * TAU * TAU;
        }

        // update verle
        if (i % freq == 0) {
            UpdateModelVerle();
        }
        time += TAU;
    }
}

double Crystal::Energy() noexcept {
    return 0.5 * D *
           AtomSumOfPotential(model[x_size * y_size * z_size *
                                    cell.CoordinatesVec().size() / 2]);
}

double Crystal::AtomSumOfPotential(const Atom &atom) noexcept {
    double sum = 0;
    for (const Coordinate &other_atom : this->all) {
        sum += Potential(Distance(atom.Coor(), other_atom));
    }
    return sum;
}