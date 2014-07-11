#include <iostream>
#include <stdlib.h>
#include <time.h>  


using namespace std;

int getRandomInt(){
  return rand() % 10 + 1;

}

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

int main() {
  srand (time(NULL));
  cout<<"running at "<<time(NULL)<<endl;
  double pi=3.142;
  int a=getRandomInt(), b=getRandomInt();
  double c=pi*a, d=pi*b;
  int e[5]={getRandomInt(),getRandomInt(),getRandomInt(),getRandomInt(),getRandomInt()};
  int f=sizeof(e)/sizeof(*e);
  cout<<"a is "<<a<<endl;
  cout<<"b is "<<b<<endl;
  cout<<"c is "<<c<<" ... yes that's just a times pi"<<endl;
  cout<<"d is "<<d<<endl;
  cout<<"e is an array:";
  for (int i=0;i<f;i++)  cout<<" "<<e[i];
  cout<<" of length "<<f<<endl;
  cout<<endl;
  cout<<endl;
  cout<<endl;
  cout << "Using integers " << a << " and " << b << " we get a minimum: ";
  if (typeid(a)!=typeid(b))  {
    double x=a,y=b;
    cout<< min(x,y)<<endl;
  } else cout << min(a,b) << endl;
  cout << "Using doubles " << c << " and " << d << " there exists a minimum of: ";
  if (typeid(c)!=typeid(d))  {
    double x=c,y=d;
    cout<< min(x,y)<<endl;
  } else cout << min(c,d) << endl;

  cout << "Here the minimum of the array e of lenth " << f << " is: " << min(e,f) << endl;
  cout<<endl;
  cout<<endl;
  cout<<endl;

  cout << "if we try getting the min of two different types e.g. " << a <<" and "<< d << " we get: ";
  if (typeid(a)!=typeid(d))  {
    double x=a,y=d;
    cout<< min(x,y)<<endl;
  } else cout << "vinces function doesn't work..." << endl;


}
