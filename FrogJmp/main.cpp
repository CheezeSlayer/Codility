#include <iostream>
#include "FrogJmp.h"

using namespace std;

int main()
{
  cout << "X = 5, Y = 23, D = 3" << endl;
  cout << "Expected Answer: 6" << endl;
  cout << "Calculated Answer: " << FrogJmp(5,23,3) << endl << endl;

  cout << "X = 2, Y = 13, D = 4" << endl;
  cout << "Expected Answer: 3" << endl;
  cout << "Calculated Answer: " << FrogJmp(2,13,4) << endl << endl;

  cout << "X = 10, Y = 85, D=30" << endl;
  cout << "Expected Answer: 3" << endl;
  cout << "Calculated Answer: " << FrogJmp(10,85,30) << endl << endl;
}
