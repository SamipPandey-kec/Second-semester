//create a class name shape, create a class name draw which from that calss derive three class name circle , rectangle and triangle and square
//each should have a function name show which should display circle drawn rectangle drawn and show on 
//1. now implement the concept of virrtual function to call the function of derived calss using basee class pointer and implement the concept of virtual destructor
#include<iostream>
using namespace std;

class Draw;
class Circle;
class Rectangle;
class Triangle;
class Square;
class Shape{

    public:
    Shape(){}
    virtual void show(){
        cout<<"shape";
    }
    virtual ~Shape(){}
};
class Draw:public Shape{
    public:
    Draw(){}
    virtual void show(){
        cout<<"Drawing";
    }
    virtual ~Draw(){};
    
};
class Circle:public Draw{
    public:
     Circle(){};
    void show(){
        cout<<"Circle drawn";
    }
    ~Circle(){}
   
};
class Rectangle:public Draw{
    void show(){
        cout<<"Rectangle drawn";
    }
};
class Square:public Draw{
    void show(){
        cout<<"Square drawn";
    }
};
class Triangle:public Draw{
    void show(){
        cout<<"Triangle drawn";
    }
};
int main(){
    Shape *s =new Shape;
    s->show();
    delete s;
    s= new Draw;
    s->show();
    delete s;
    // Draw *s=new Draw;
    // s->show();
    // delete s;
    s=new Circle;
    s->show();
    delete s;

    return 0;

}