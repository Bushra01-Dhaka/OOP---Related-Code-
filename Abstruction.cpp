/*
  Abstraction: It reduce complexity by hiding unnecessary details
  and only shows necessary methods to user
*/

#include <iostream>
using namespace std;

class Car{
  public:
      void start(){
       cout<< "Car Start";
      }
};

int main(){
  Car x;
  x.start(); //user only need to know how it start , how car
  //works internally they don't need to know that
  return 0;
}
