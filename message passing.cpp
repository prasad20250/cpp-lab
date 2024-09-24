#include<iostream>
using namespace std;

class car {
  public:
  void displayspeed(int speed){
    cout<< " the car is moving at" << speed << "km/h." <<endl;
  }
};

int main(){
  car mycar;
  
  int currentspeed = 100;
  mycar.displayspeed(currentspeed);
  return 0;
}