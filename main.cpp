#include <iostream>
#include "helper_functions.h"

using namespace std;

// ===============
// implementations before porting to student.hpp
void ascendingSortArray(int a[], int nSize)
{
      for (int i = 0; i < nSize - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < nSize; j++) {
                  if (a[j] < a[minIndex]) {
                        minIndex = j;
                  }
            }
            swap (a[i], a[minIndex]);

            cout << "After iteration " << i + 1 << ": ";
            for (int k = 0; k < nSize; k++) {
                  cout << a[k] << " ";
            }
            cout << endl;
      }
      // TODO: implement sorting algorithm per requirements from assignment
}

// ===============
// implementations before porting to student.hpp
void descendingSortArray(int a[], int nSize)
{
      for (int i = 0; i < nSize - 1; i++) {
            for (int j = 0; j < nSize - i - 1; j++) {
                  if (a[j] < a[j + 1]) {
                        swap (a[j], a[j + 1]);
                  }
            }
            cout << "After iteration " << i + 1 << ": ";
            for (int k = 0; k < nSize; k++) {
                  cout << a[k] << " ";
            }
            cout << endl;

      }
      
      // TODO: implement sorting algorithm per requirements from assignment
}


int main() {
      int arrAsc[]= {65,25,13,22,11};
      int nSizeAsc = sizeof(arrAsc) / sizeof(arrAsc[0]);
      cout << "Ascending Sort: " << endl;
      ascendingSortArray (arrAsc, nSizeAsc);
      ascendingSortArray (arrAsc, nSizeAsc);

      cout << endl;

      int arrDesc[] = {11,22,13,25,65};
      int nSizeDesc = sizeof(arrDesc) / sizeof(arrDesc[0]);
      cout << "Descending Sort: " << endl;
      descendingSortArray (arrDesc, nSizeDesc);


    // test your ascendingSortArray and decendingSortArray here before porting to student.hpp
    
    return 0;
}