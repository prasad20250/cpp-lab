#include<iostream>
using namespace std;

int main(){
    int number;
    // prompt user for input
    cout<<"enter an integer:";
    cin>>number;
    
    //check if the number is positive or negative
    if(number>=0){
        cout<<"the number"<<number<<"is positive.\n";
    }
    else{
        cout<<"the number"<<number<<"is negative.\n";
    }
    return 0;
}
        
    
    
