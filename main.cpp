/**********************************************
 * Author:       Platonov A.A.                *
 * Group:        ПИ-231                       *
 * Variant:      14                           *
 * Date:         27.09.2023                   *
 * Project name: Fart Isotherm                *
 * OnlineGDB: https://onlinegdb.com/cttlBlNqh *
 **********************************************/

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
  double volume = 0.1;
  double work;

  cout << "Enter work: ";
  cin >> work;
  
  cout << fixed << setprecision(3);
  
  while (volume < 0.5) {
    cout << "V = " << volume
         << " P1 = " << work / volume
         << " P2 = " << work / pow(volume, 1.2) << '\n';
    volume += 0.1;
  }
  
  do {
    cout << "V = " << volume
         << " P1 = " << work / volume
         << " P2 = " << work / pow(volume, 1.2) << '\n';
    volume += 0.5;
  } while (volume <= 3);
  
  return 0;
}

