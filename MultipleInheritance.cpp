/*
  Multiple Inheritance: Derived class inherits from more than one
  base classes.
*/

#include<iostream>
using namespace std;

// Base Class 1
class Photo{
 public:
     void takePhoto(){
         cout << "Click Photo" <<endl;
     }
};

//Base Class 2

class Phone {
  public:
      void makeCall() {
        cout << "Make Call" << endl;
      }
};

// Derived Class

class SmartPhone : public Photo, public Phone{
   public:
       void browseInternet(){
        cout << "Browse Internet" <<endl;
       }
};

int main(){
     SmartPhone x;
     x.takePhoto(); // inherits from Base class 1
     x.makeCall(); //inherits from Base Class 2
     x.browseInternet(); //child method
     return 0;
}
