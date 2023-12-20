#include <fstream>
#include "Crystal.h"

int main() {
   clock_t start = clock();

   Cell cell_Cu(
       {Coordinate(0, 0, 0), Coordinate(EQUAL_DIST, 0, 0),
        Coordinate(0, EQUAL_DIST, 0), Coordinate(EQUAL_DIST, EQUAL_DIST, 0),
        Coordinate(0, 0, EQUAL_DIST), Coordinate(EQUAL_DIST, 0, EQUAL_DIST),
        Coordinate(0, EQUAL_DIST, EQUAL_DIST),
        Coordinate(EQUAL_DIST, EQUAL_DIST, EQUAL_DIST),
        Coordinate(EQUAL_DIST / 2, EQUAL_DIST / 2, 0),
        Coordinate(EQUAL_DIST / 2, 0, EQUAL_DIST / 2),
        Coordinate(0, EQUAL_DIST / 2, EQUAL_DIST / 2),
        Coordinate(EQUAL_DIST, EQUAL_DIST / 2, EQUAL_DIST / 2),
        Coordinate(EQUAL_DIST / 2, EQUAL_DIST, EQUAL_DIST / 2),
        Coordinate(EQUAL_DIST / 2, EQUAL_DIST / 2, EQUAL_DIST)},
       EQUAL_DIST);

   Crystal crystal(cell_Cu, CNT_CRYSTAL_CELL, PGU_THICKNESS);

   crystal.ModelAtomsVec()[crystal.ModelAtomsVec().size() / 2].Coor() +=
       Coordinate(EQUAL_DIST / 2, EQUAL_DIST / 2, EQUAL_DIST / 2);
   crystal.ModelAtomsVec()[crystal.ModelAtomsVec().size() / 2 + 1].Coor() +=
       Coordinate(-EQUAL_DIST / 2, -EQUAL_DIST / 2, -EQUAL_DIST / 2);

   double first_energy = crystal.Energy();
   crystal.GradientIteration();
   double last_energy = crystal.Energy();
   std::cout << "first energy - " << first_energy << "\n";
   std::cout << "last energy - " << last_energy << "\n";
   std::cout << "difference energy - " << last_energy - first_energy << "\n";

   std::ofstream fout_model("crystal.txt");
   for (auto it = crystal.ModelAtomsVec().cbegin();
        it != crystal.ModelAtomsVec().cend(); ++it) {
      const auto atom = it->Coor();
      fout_model << atom.x << "\n" << atom.y << "\n" << atom.z;
      if (it != --crystal.ModelAtomsVec().cend()) fout_model << "\n";
   }
   fout_model.close();
   std::ofstream fout_pgu("pgu.txt");
   for (auto it = crystal.PguCoordinatesVec().cbegin();
        it != crystal.PguCoordinatesVec().cend(); ++it) {
      const auto atom = *it;
      fout_pgu << atom->x << "\n" << atom->y << "\n" << atom->z;
      if (it != --crystal.PguCoordinatesVec().cend()) fout_pgu << "\n";
   }
   fout_pgu.close();

   clock_t end = clock();
   double seconds = (double)(end - start) / CLOCKS_PER_SEC;
   printf("The time: %f seconds\n", seconds);
   return 0;
}