#include <iostream>
#include "tapeE.h"

using namespace std;

int main() {
  int arr1[5] = {3, 1, 2, 4, 3};
  int arr2[2] = {4, 2};
  int arr3[9] = {3, 2, 1, 3, 7, 5, 6, 8, 1};
  int arr4[4] = {1, 2, 3, 4};

  cout << "arr1 Tape Equilibrium: " << tapeE(arr1, 5) << endl;
  cout << "arr2 Tape Equilibrium: " << tapeE(arr2, 2) << endl;
  cout << "arr3 Tape Equilibrium: " << tapeE(arr3, 9) << endl;
  cout << "arr4 Tape Equilibrium: " << tapeE(arr4, 4) << endl;
}
