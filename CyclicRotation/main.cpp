#include <stdio.h>
#include <iostream>
#include <vector>
#include "cycRot.h"

using namespace std;

void printVec(vector<int> &A)
{
  int size = A.size();
  int index = 0;
  for ( index = 0; index < size; index++ )
  {
    cout << A[index] << " ";
  }
  cout << endl;
}

int main() {

  vector<int> vec1 = {1, 2, 3, 4, 8};
  vector<int> vec2 = {3, 8, 9, 7, 6};
  vector<int> vec3 = {1000};

  cout << "vec1: ";
  printVec(vec1);
  cout << "vec1 rotate 3 times: ";
  vec1 = cycRot(vec1,3);
  printVec(vec1);

  cout << endl;

  cout << "vec2: ";
  printVec(vec2);
  cout << "vec2 rotate 10 times: ";
  vec2 = cycRot(vec2,10);
  printVec(vec2);

  cout << endl;

  cout << "vec3: ";
  printVec(vec3);
  cout << "vec3 rotate 8 times: ";
  vec3 = cycRot(vec3,8);
  printVec(vec3);
}
