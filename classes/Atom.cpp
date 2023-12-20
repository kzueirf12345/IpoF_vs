#include "headers/Atom.h"

Coordinate Atom::SumOfFlows() const noexcept {
   Coordinate sum;
   for (const Coordinate* other_atom : this->Verle()) {
      sum += (this->Coor() - *other_atom) *
             Flow(Distance(this->Coor(), *other_atom));
   }
   return std::move(sum);
}

double Atom::SumOfPotentials() const noexcept {
   double sum = 0;
   for (const Coordinate* other_atom : this->Verle()) {
      sum += Potential(Distance(this->Coor(), *other_atom));
   }
   return sum;
}

double Atom::Flow(double distance) const noexcept {
   return Forse(distance) / distance;
}

double Atom::Forse(double distance) const noexcept {
   return 2 * ALPHA * D *
          (exp(-2. * ALPHA * (distance - EQUAL_DIST) -
               exp(-ALPHA * (distance - EQUAL_DIST))));
}

double Atom::Potential(double distance) const noexcept {
   const double x = (1 - exp(-ALPHA * (distance - EQUAL_DIST)));
   return D * (1 - x) * (1 - x);
}