#include<iostream>
using namespace std;

class Person {
     public:
     int age ;

     void callAge(){
       cout << "The Person age is: " << age << endl;
     }
};

int main(){
   Person p1;
   p1.age = 25;
   p1.callAge();

   return 0;
}


