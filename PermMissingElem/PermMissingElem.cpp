#include <vector>
#include "PermMissingElem.h"

int solution( vector<int> &A )
{
     if ( A.empty() )
     {
         return 1;
     }

     int size = A.size();
     int index = 0;
     int sum = 0;
     int highest = A[0];

     for ( index = 0; index < A.size(); index++ )
     {
         sum = sum + A[index];
         if ( highest < A[index] )
         {
             highest = A[index];
         }
     }

     vector<int> vec(size);
     int vecSum = 0;

     for ( index = 0; index < size; index++ )
     {
         vec[index] = index + 1;
         vecSum = vecSum + vec[index];
     }

     int a = sum - vecSum;

     if ( a == 0 )
     {
         return highest+1;
     }

     return highest - a;
}
