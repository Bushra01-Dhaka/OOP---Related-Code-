/*
Hybrid/Virtual Inheritance:
It is a combination of multiple Inheritance and
hierarchical inheritance.
Suppose, A is inherited by by Both B and C.
Derived class D inherits both B and C and that's way
D inherits class A two times and it makes ambiguities.
Two resolve this a key is used by both classes B and C that
inherits from class A.
The key word is:  virtual
*/

#include<iostream>
namespace using std;

class A {
  public:
      void show(){
        cout << "Hello from A" << endl;
      }
};

class B : public virtual A{
};

class C : public virtual A{
};

int main(){
 B b;
 b.show();
 return 0;
}


