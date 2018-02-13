#include <vector>
#include "FrogRiverOne.h"

using namespace std;

int solution(int X, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)

    if ( X > A.size() )
    {
        return -1;
    }

    int size = A.size();
    int index = 0;
    int sum = 0;

    vector<int> vecPos(X+1);
    for ( index = 0; index < X+1; index++ )
    {
        vecPos[index] = -1;
        sum = sum + (X-index);
    }

    index = 0;
    int position = 0;
    int highest = vecPos[index];
    while ( index < size )
    {
        position = A[index];
        if ( vecPos[position] == -1 )
        {
            vecPos[position] = index;
            if ( highest < vecPos[position] )
            {
                highest = vecPos[position];
            }
        }
        index++;
    }

    for ( index = 1; index < X+1; index++ )
    {
        if ( vecPos[index] == -1 )
        {
            return -1;
        }
    }

    return highest;
}
