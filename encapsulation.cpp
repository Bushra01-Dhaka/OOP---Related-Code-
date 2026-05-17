/*

Encapsulation: It binds data and function into unit(class)
and control access by using
private variable and public methods.

*/

#include <iostream>
using namespace std;

class Bank{

   private:
       int balance = 1000;

   public:
    int deposit(int amount){
       balance += amount;
    }
    void showAmount() {
     cout << "Total Amount: "<< balance <<endl;
    }
};

int main(){
 Bank x;
 x.deposit(200);
 x.showAmount();
 // x.balance = 1500; User can not access the private variable
 //balance but can access to the public method deposit and
 //after deposit also can view amount after deposit
 return 0;

}
