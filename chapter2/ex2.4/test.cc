#include <iostream>
#include <stdlib.h>
#include <time.h>  

#include "min.hh"
#include "max.hh"

using namespace std;

int getRandomInt(){
  return rand() % 10 + 1;

}

void min (int a, int b){
  cout << "Not using library function" << endl;
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
  cout << "Using integers " << a << " and " << b << " we get a maximum: ";
  if (typeid(a)!=typeid(b))  {
    double x=a,y=b;
    cout<< myLib::min(x,y)<<endl;
  } else cout << myLib::min(a,b) << endl;
  cout << "Using doubles " << c << " and " << d << " there exists a maximum of: ";
  if (typeid(c)!=typeid(d))  {
    double x=c,y=d;
    cout<< myLib::min(x,y)<<endl;
  } else cout << myLib::min(c,d) << endl;

  cout << "Here the maximum of the array e of lenth " << f << " is: " << myLib::min(e,f) << endl;
  cout<<endl;
  cout<<endl;
  cout<<endl;




  cout << "Using integers " << a << " and " << b << " we get a maximum: ";
  if (typeid(a)!=typeid(b))  {
    double x=a,y=b;
    cout<< myLib::max(x,y)<<endl;
  } else cout << myLib::max(a,b) << endl;
  cout << "Using doubles " << c << " and " << d << " there exists a maximum of: ";
  if (typeid(c)!=typeid(d))  {
    double x=c,y=d;
    cout<< myLib::max(x,y)<<endl;
  } else cout << myLib::max(c,d) << endl;

  cout << "Here the maximum of the array e of lenth " << f << " is: " << myLib::max(e,f) << endl;
  cout<<endl;
  cout<<endl;
  cout<<endl;



  cout << "Calling the other min function on" << a << " and " << b << " we get: ";
  min(a,b);

  cout<<endl;
  cout<<endl;
  cout<<endl;


  cout << "if we try getting the min of two different types e.g. " << a <<" and "<< d << " we get: ";
  if (typeid(a)!=typeid(d))  {
    double x=a,y=d;
    cout<< myLib::min(x,y)<<endl;
  } else cout << "vinces function doesn't work..." << endl;
  return 0;

}
