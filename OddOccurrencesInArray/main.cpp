#include <stdio.h>
#include <iostream>
#include <vector>
#include "oddOcc.h"

using namespace std;

void printArr ( int arr[], int N )
{
  int index = 0;
  for ( index = 0; index < N; index++ )
  {
    cout << arr[index] << " ";
  }
  cout << endl;
}

int main()
{
  int arr1[13] = {2, 3, 7, 7, 2, 10, 2, 2, 3, 4, 3, 4, 3};
  int arr2[7] = {1, 1, 2, 2, 3, 1, 3};
  int arr3[1] = {9};

  cout << "arr1: ";
  printArr(arr1, 13);
  cout << "arr1 odd occurring element: " << oddOcc(arr1, 13) << endl;

  cout << "arr2: ";
  printArr(arr2, 7);
  cout << "arr2 odd occurring element: " << oddOcc(arr2, 7) << endl;

  cout << "arr3: ";
  printArr(arr3, 1);
  cout << "arr3 odd occurring element: " << oddOcc(arr3, 1) << endl;
}
