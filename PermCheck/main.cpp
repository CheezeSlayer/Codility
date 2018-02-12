#include <iostream>
#include <vector>
#include "PermCheck.h"

using namespace std;

void printVec(vector<int> &A )
{
  int size = A.size();
  int index = 0;
  for ( index = 0; index < size; index++ )
  {
    cout << A[index] << " ";
  }
}

int main() {
  vector<int> vec1 = {4, 1, 3, 2};
  vector<int> vec2 = {4, 2, 2};
  vector<int> vec3 = {3};
  vector<int> vec4 = {1};

  cout << "vec1: ";
  printVec(vec1);
  cout << endl;
  cout << "Permutation: " << solution(vec1) << endl << endl;

  cout << "vec2: ";
  printVec(vec2);
  cout << endl;
  cout << "Permutation: " << solution(vec2) << endl << endl;

  cout << "vec3: ";
  printVec(vec3);
  cout << endl;
  cout << "Permutation: " << solution(vec3) << endl << endl;

  cout << "vec4: ";
  printVec(vec4);
  cout << endl;
  cout << "Permutation: " << solution(vec4) << endl << endl;
}
