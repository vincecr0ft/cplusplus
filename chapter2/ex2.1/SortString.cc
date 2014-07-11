#include <iostream>
using namespace std ;

void order(const char*& a, const char*& b) ;
void sort(const char *arr[], int len) ;

int main() {

  // Array in random order
  const char* arr[10] = { "C++", "Fortran", "Pascal", "Algol", "Visual Basic", 
                          "Python", "Java", "Eiffel", "Assembler", "C" } ;

  // Sort array
  sort(arr,10) ;

  // Print sorted array 
  for (int i=0 ; i<10 ; i++) {
    cout << arr[i] << endl ;
  }

  return 0 ;
}

// Swap a and b if a<b
void order(const char*& a, const char*& b) {
  if (strcmp(a,b)<0) {
    const char* tmp = a ;
    a = b ;
    b = tmp ;
  }
}


// Bubble sort implementation
void sort(const char*  arr[], int n) {
  int i,j ;
  for (i=0; i<n-1; i++) {
    for (j=0; j<n-1-i; j++) {
      order(arr[j+1],arr[j]) ;
    }
  }
}
