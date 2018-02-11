#include "tapeE.h"
#include <cmath>
#include <iostream>

using namespace std;

int tapeE(int A[], int N)
{
  int index = 0;
  int totSum = 0;
  for ( index = 0; index < N; index++ )
  {
    totSum = totSum + A[index];
  }

  index = 1;
  int lSum = 0;
  int newDiff = 0;
  int diff = 0;
  bool firstDiff = true;
  while ( index < N )
  {
    lSum = lSum + A[index-1];
    newDiff = abs(totSum - 2*lSum);
    if ( firstDiff == true )
    {
      firstDiff = false;
      diff = newDiff;
    }
    else if ( diff > newDiff )
    {
      diff = newDiff;
    }
    index++;
  }

  return diff;
}
