#include<iostream>
using namespace std;

class Person{
   private:
       int age;

   public:
    int inputAge(int a){
       age = a;
    }

    void printAge(){
       cout << "The Person age is :" << age <<endl;
    }
};

int main(){
   Person p1;
   p1.inputAge(25); //Here this function is accessible since it's specifier is publlic
   p1.printAge();
   cout << p1.age = 25 <<endl; //Here this is not accessible since it's specifier is private

   return 0;
}
