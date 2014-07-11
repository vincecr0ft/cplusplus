#include <iostream>
using namespace std ;

void order(int& a, int& b) ;
void sort(int i[], int len) ;

int main() {

  // Array in random order
  int arr[10] = { 9, 8, 5, 2, 4, 3, 6, 1, 7, 0} ;

  // Sort array
  sort(arr,10) ;

  // Print sorted array 
  for (int i=0 ; i<10 ; i++) {
    cout << arr[i] << endl ;
  }

  return 0 ;
}

// Swap a and b if a<b
void order(int& a, int& b) {
  if (a<b) {
    int tmp = a ;
    a = b ;
    b = tmp ;
  }
}


// Bubble sort implementation
void sort(int arr[], int n) {
  int i,j ;
  for (i=0; i<n-1; i++) {
    for (j=0; j<n-1-i; j++) {
      order(arr[j+1],arr[j]) ;
    }
  }
}
