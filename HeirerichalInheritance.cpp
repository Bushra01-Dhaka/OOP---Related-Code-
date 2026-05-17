/*
 Hierarchical Inheritance: multiple derived class
 inherits from a base class and creates
 a tree like structure.
*/

#include<iostream>
using namespace  std;

class Shape{
  protected:
      int width;
      int height;
  public:
    int setvalue(int w, int h){
     width = w;
     height = h;
    }
};

class Rectangle : public Shape{
 public :
     int getArea(){
     return width * height;
     }
};

class Triangle : public Shape{
 public:
     int getArea(){
      return (width * height)/2;
     }
};

int main(){
 Rectangle rec;
 Triangle tri;

 rec.setvalue(2,5);
 tri.setvalue(2,5);

 cout << "Rectangle Area: " << rec.getArea() <<endl;
 cout << "Triangle Area: " << tri.getArea() << endl;

 return 0;
}
