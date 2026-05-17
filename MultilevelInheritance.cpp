/*
  Multilevel Inheritance: Derived class inherits
  from another derived class, create a chain of
  inheritance.
*/

#include<iostream>
using namespace std;

class Vehical{
  public:
      void move(){
      cout << "Car Moving..."<< endl;
      }
};

class Fourwheeler : public Vehical{
  public:
      void hasFourWheel () {
      cout << "It has 4 wheels..." << endl;
      }
};

class Car : public Fourwheeler {
  public:
      void dynamicDrive(){
       cout<< "Drive Smoothly...." <<endl;
      }
};

int main() {
 Car x;
 x.move(); // grandparent method
 x.hasFourWheel();//parent method
 x.dynamicDrive(); //child method
 return 0;
}
