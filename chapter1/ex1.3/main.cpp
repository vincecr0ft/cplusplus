#include <iostream>
#include <string.h>
using namespace std;

char* join(const char*, const char*) ;
char* joinb(const char*, const char*) ;

int main(){
  cout << join("alpha","bet") << endl ;
  cout << joinb("duck","soup") << endl ;
    return 0;
}

char *join(const char *name1, const char *name2) {
  char *joint=new char[strlen(name1)+strlen(name2)];
  char *space=new char[1];

  strcpy(joint,name1);
  strcat(joint,name2);

  return joint;
}

char *joinb(const char *name1, const char *name2) {
  char *joint = new char[strlen(name1) + strlen(name2) + 1];
  strcpy(joint,name1);
  strcat(joint," ");
  strcat(joint,name2);
  return joint;
	
}



