/*******************************
 * Author:       Platonov A.A. *
 * Group:        ПИ-231        *
 * Variant:      14            *
 * Date:         20.09.2023    *
 * Project name: Fart Isotherm *
 *******************************/

#include <iostream>
#include <iomanip>
#include <math.h>

#define A 1.786

int main() {
  std::cout << std::fixed << std::setprecision(3);
  
  double volume[10] = {0.1, 0.2, 0.3, 0.4, 0.5, 1, 1.5, 2, 2.5, 3};
  
  for (int i = 0; i < 10; i++) {
    std::cout << "V = " << volume[i] << " P1 = " << A / volume[i] << " P2 = " << A / pow(volume[i], 1.2) << '\n';
  }
  
  return 0;
}