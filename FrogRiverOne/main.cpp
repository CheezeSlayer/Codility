#include <iostream>
#include <vector>
#include "FrogRiverOne.h"

using namespace std;

void printVec(vector<int> &A)
{
  int index = 0;
  for ( index = 0; index < A.size(); index++ )
  {
    cout << "A[" << index << "]: " << A[index] << endl;
  }
}

int main() {
  vector<int> vec = {1, 3, 1, 2, 3, 5, 4, 7};
  printVec(vec);

  cout << endl << "Earliest jump to position 5: " << solution(5, vec);
  cout << endl << "Earliest jump to position 9: " << solution(9, vec);
  cout << endl << "Earliest jump to position 4: " << solution(4, vec);
  cout << endl << "Earliest jump to position 7: " << solution(7, vec);
  cout << endl;
}
