/*
 Constructor: is a special function, when an object
 is create at that time the constructor is called.
*/

#include <iostream>
using namespace std;

class A{
   public:
       A(){
        cout<< "Constructor is called..." <<endl;
       }
};

int main(){
 A a; // Here as the object a is created it automatically
 //called the constructor A. constructor name must be same as
 //class name.
 return 0;
}
