#include<iostream>
using namespace std;

int main(){
    char op;
    float num1, num2;
    
    //it allows user to enter operator
    // that is +,-,*,/
    cin>>op;
    
    //it allows user to enter the operands
    cin >> num1 >> num2 ;
    
    //switch statement begins
    switch (op){
        //if user enter +
        case '+':
        cout<<num1+num2;
        break;
        
        //if user enter -
        case '-':
        cout<<num1-num2;
        break;
        
        //if user enter *
        case '*':
        cout<<num1*num2;
        break;
        
        // if user enter /
        case '/':
        cout<<num1/num2;
        break;
        
        //if the operator is other than +,-,*,/
        //error message will display
        default:
        cout<<"error! operator is not correct";
    }
    //switch statement ends
    
    return 0;
}