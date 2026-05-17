/*
  Inheritance: One class acquire properties/functions from
  another class.
  It helps code reuse and avoid duplication.
  allows a new class (derived class) to inherit attributes
  and behaviors from an existing class (base class).
*/

#include<iostream>
using namespace std;

class Animal{
public:
    void eat(){
    cout << "Eat" <<endl;
    }
};

class Dog : public Animal{
   public:
       void bark(){
       cout << "Bark" << endl;
       }
};

int main (){
   Dog x;
   x.eat(); // inherit from base class Animal;
   x.bark(); //child method
   return 0;
}
