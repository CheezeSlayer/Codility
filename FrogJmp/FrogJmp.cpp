#include "FrogJmp.h"

int FrogJmp( int X, int Y, int D)
{
  int a = Y-X;
  int b = a/D;
  if ( a%D != 0 )
  {
    b++;
  }
  return b;
}
