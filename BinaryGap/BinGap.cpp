// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

#include <cmath>
#include "BinGap.h"

int BinGap(int N) {
    // write your code in C++14 (g++ 6.2.0)
    int exp = 0;
    const double base = 2;

    while ( pow(base, exp) < N )
    {
        if ( pow(base, exp) < N )
        {
            exp++;
            if ( pow(base, exp) > N )
            {
                exp--;
                break;
            }
        }
    }

    bool newOne = false;
    int num = N - pow(base, exp);

    int binarySize = exp + 1;
    int binary[binarySize];
    int binaryIndex = 0;
    binary[binaryIndex] = 1;

    int gapLength = 0;
    int gapLong = 0;

    while ( num > 0 )
    {
        exp--;
        binaryIndex++;
        if ( pow(base, exp) < num )
        {
            num = num - pow(base, exp);
            binary[binaryIndex] = 1;
            newOne = true;
        }
        else if ( pow(base, exp) > num )
        {
            binary[binaryIndex] = 0;
            gapLength++;
            newOne = false;
        }
        else if ( pow(base, exp) == num )
        {
            num = num - pow(base, exp);
            binary[binaryIndex] = 1;
            newOne = true;
        }

        if ( newOne == true )
        {
            if ( gapLength > gapLong )
            {
                gapLong = gapLength;
                gapLength = 0;
                newOne = false;
            }
            else if ( gapLength < gapLong )
            {
                gapLength = 0;
                newOne = false;
            }
            else if ( gapLength == gapLong )
            {
                gapLength = 0;
                newOne = false;
            }
        }
    }

    return gapLong;
}
