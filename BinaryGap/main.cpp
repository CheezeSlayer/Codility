#include <iostream>
#include "BinGap.h"

using namespace std;

int main()
{
  int a = 9;
  int b = 529;
  int c = 20;

  cout << a << " has a longest binary gap of: " << BinGap(a) << endl;
  cout << b << " has a longest binary gap of: " << BinGap(b) << endl;
  cout << c << " has a longest binary gap of: " << BinGap(c) << endl;

  return 0;
}
