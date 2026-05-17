#include <iostream>
using namespace std;

class Animal {
   protected:
       void eat(){
         cout << "Eat" << endl;
    }

};

class Dog : public Animal {

};

int main (){
   Dog d1;
   d1.eat();
   return 0;
}
