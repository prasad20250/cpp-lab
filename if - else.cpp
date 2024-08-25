#include<iostream>
using namespace std;

int main(){
  int age;//declare an integer variable to store the age
  //prompt the user for their age
  
  cout<<"enter your age:";
  cin>>age; //read the user from user input
  
  //conditional logic using 'if - else'
  if(age>=18){
    cout<<"you are an adult."<<endl; // message if age is 18 or older
    
  }else{
    cout<<"you are not an adult."<<endl; // message if age is less than 18
  }
  return 0; // return 0 to indicate successful execution
}

