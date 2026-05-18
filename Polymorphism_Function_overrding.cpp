#include <iostream>
using namespace std;

class Animal{
   public :
       void sound(){
        cout << "Animal sound"<< endl;
       }
};

class Dog : public Animal{
public :
    void sound(){
     cout<< "Dog Bark"<< endl;
     //Dog derived class make changes of parent class
     // function sound() - function overriding .
    }
};

int main(){
  Dog d;
  d.sound();
  return 0;
}
