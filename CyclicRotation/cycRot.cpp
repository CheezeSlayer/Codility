#include <vector>
#include "cycRot.h"

vector<int> cycRot(vector<int> &A, int K)
{
  int index1 = 0;
  int index2 = 0;
  int size = A.size();
  vector<int> shift(size);

    for ( index1 = 0; index1 < size; index1++ )
    {
      index2 = index1 + K;
      while ( index2 >= size )
      {
        index2 = index2 - size;
      }
      shift[index2] = A[index1];
    }

  return shift;
}
