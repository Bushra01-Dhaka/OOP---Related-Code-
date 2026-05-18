
/*
  Destructor : is a special function,destructor is
  called when the object is destroyed.
  It used for -
  a. Remove spaces
  b. free resourses
*/

#include <iostream>
using namespace std;

class A{
 public:
     A(){
      cout<< "Constructor is called ...."<< endl;
     }
     
     ~A(){
       cout<< "Destructor is called..." << endl;
     }
};

int main(){
 A a; // constructor called since object is created
 return 0;
}
//destructor called after object is destroyed.

