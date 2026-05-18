/*
 Polymorphism : Using the same function in different form.
 2 types:
 1. Compile Time
     a. Function Overloading (same function has different parameters)
     b. Operator Overloading (same operation used in different form)
 2. Run Time
     a. Function Overriding (child class changes parent class methods.)
*/

#include <iostream>
using namespace std;

class A {
   public:
       int sum(int a, int b){
        return a+b;
       }
       int sum(int a, int b, int c){
       return a+b+c;
       }
};

int main(){
 A a;
 cout << a.sum(2,3) <<endl;
 cout << a.sum(2,3,4) << endl;
 return 0;
}
