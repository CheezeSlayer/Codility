#include <vector>
#include "PermCheck.h"

using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int size = A.size();
    int highest = A[0];
    int product = 1;
    int index = 0;
    int count = 0;

    for ( index = 0; index < size; index++ )
    {
        count++;
        product = product*A[index];
        if ( highest < A[index] )
        {
            highest = A[index];
        }
    }

    if ( count != highest )
    {
        return 0;
    }


    int trueProduct = 1;
    for ( index = 1; index <= highest; index++ )
    {
        trueProduct = trueProduct * index;
    }

    if ( trueProduct == product )
    {
        return 1;
    }

    return 0;
}
