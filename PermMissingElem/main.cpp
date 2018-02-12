#include <iostream>
#include <vector>
#include "PermMissingElem.h"

using namespace std;

void printVec( vector<int> &A )
{
  int size = A.size();
  cout << "[ ";
  for ( int index = 0; index < size; index++ )
  {
    cout << A[index] << " ";
  }
  cout << "]";
};

int main() {

  vector<int> arr1 = {2, 3, 1, 5};
  vector<int> arr2 = {2, 3};
  vector<int> arr3 = {1, 2, 3, 4, 5};
  vector<int> arr4 = {2};
  vector<int> arr5 = {1};
  vector<int> arr6;

  cout << "arr1: ";
  printVec(arr1);
  cout << endl;
  cout << "Missing Element: " << solution(arr1) << endl << endl;

  cout << "arr2: ";
  printVec(arr2);
  cout << endl;
  cout << "Missing Element: " << solution(arr2) << endl << endl;

  cout << "arr3: ";
  printVec(arr3);
  cout << endl;
  cout << "Missing Element: " << solution(arr3) << endl << endl;

  cout << "arr4: ";
  printVec(arr4);
  cout << endl;
  cout << "Missing Element: " << solution(arr4) << endl << endl;

  cout << "arr5: ";
  printVec(arr5);
  cout << endl;
  cout << "Missing Element: " << solution(arr5) << endl << endl;

  cout << "arr6: ";
  printVec(arr6);
  cout << endl;
  cout << "Missing Element: " << solution(arr6) << endl << endl;

  return 0;

}
