#include <iostream>
using namespace std;

int main(){
  string inputText;
  cout<<"please input some text for me to count"<<endl;
  getline(cin,inputText);
  cout<<"you entered, \""<<inputText<<"\""<<endl;

  
  int n_Upper=0; // Number of uppercase letters
  int n_Lower=0; // Number of lowercase letters
  int n_Number=0; // Number of digits
  int n_misc=0; // Number of other characters
  for(string::iterator it=inputText.begin(); it!=inputText.end();++it){
    int identifier = *it;
        if (identifier>64 && identifier<91){
            n_Upper++;
        } else if (identifier>96 && identifier<123){
            n_Lower++;
        } else if (identifier>47 && identifier<58){
            n_Number++;
        } else {
            n_misc++;
        }
    }

  cout << "Lets get the consituents of your text:"<<endl;
  cout << n_Upper << " Uppercase letter."<<endl;
  cout << n_Lower << " Lowercase letters."<<endl;
  cout << n_Number << " Numbers."<<endl;
  cout << n_misc << " misc"<<endl;



  return 0;
}
