#include "max.hh"

namespace myLib{
  int max(int a, int b){
    if (a>b){
        return a;
    } else {
        return b;
    }
  }

  double max(double a, double b){
    if (a>b){
        return a;
    } else {
        return b;
    }
  }

  int max(int a[], int b){
    int max=a[0];
    for (int i=0;i<b-1;i++){
      if (a[i]>max){
	max=a[i];
      }
    }
    return max;
  }
}

