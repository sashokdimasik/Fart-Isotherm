/**********************************************
 * Author:       Platonov A.A.                *
 * Group:        ПИ-231                       *
 * Variant:      14                           *
 * Date:         27.09.2023                   *
 * Project name: Fart Isotherm                *
 * OnlineGDB: https://onlinegdb.com/YT1Q73t3W *
 **********************************************/

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
  double volume[10] = {0.1, 0.2, 0.3, 0.4, 0.5, 1, 1.5, 2, 2.5, 3};
  double work;

  cout << "Enter work: ";
  cin >> work;
  
  cout << fixed << setprecision(3);
  
  for (int i = 0; i < 10; i++) {
    cout << "V = " << volume[i]
         << " P1 = " << work / volume[i]
         << " P2 = " << work / pow(volume[i], 1.2) << '\n';
  }
  
  return 0;
}
