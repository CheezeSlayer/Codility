#include <vector>
#include "oddOcc.h"

int oddOcc( int A[], int N )
{
  vector<int> vec(A, A + N*4/sizeof(*A));
  int index = 0;
  int candidate = 0;
  int searchIndex = 0;
  int vecSize = vec.size();

  int numCount = 1;

  while ( vecSize > 1 && searchIndex < vecSize )
  {
    candidate = vec[index];
    
    if ( candidate == vec[searchIndex] && index != searchIndex )
    {
      vec.erase(vec.begin() + searchIndex);
      index = 0;
      vecSize = vec.size();
      searchIndex--;
      numCount++;
    }

    searchIndex++;

    if ( searchIndex >= vecSize )
    {
      if ( numCount % 2 != 0 )
      {
        return candidate;
      }
      searchIndex = 0;
      vec.erase(vec.begin());
      vecSize = vec.size();
      index = 0;
      numCount = 1;
    }
  }
  return vec[0];
}
