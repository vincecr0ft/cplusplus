#include "min.hh"

namespace myLib{
  int min(int a, int b){
    if (a<b){
        return a;
    } else {
        return b;
    }
  }

  double min(double a, double b){
    if (a<b){
        return a;
    } else {
        return b;
    }
  }

  int min(int a[], int b){
    int min=a[0];
    for (int i=0;i<b-1;i++){
      if (a[i]<min){
	min=a[i];
      }
    }
    return min;
  }

}
