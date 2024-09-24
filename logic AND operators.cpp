#include<iostream>
using namespace std;

int main(){
  int num;
  cout<<" enter a number:";
  cin>> num;
  if( num>= 10 && num<=20){
    cout<<" the number "<< num <<" is between 10 and 20.\n";
  
  }else{
    cout<<" the number "<< num << " is not between 10 and 20.\n";
  }
  return 0;
}