#pragma once // prevents multiple definitions

#include <iostream> // print library
#include "helper_functions.h" // helper functions

using namespace std;

/* derive from helper_functions.cpp
#include <string> // string library
using namespace std; // use the standard namespace
*/

// Exercise 1: implement ascending selection sort algorithm for integer array
void ascendingSortArray(int a[], int nSize);

// ===============
// implementations

void ascendingSortArray(int a[], int nSize) 
{      for (int i = 0; i < nSize - 1; i++) {
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

// Exercise 2: implement descending bubble sort algorithm for integer array
void descendingSortArray(int a[], int nSize);

// ===============
// implementations

void descendingSortArray(int a[], int nSize)
{      for (int i = 0; i < nSize - 1; i++) {
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