#include<iostream>
using namespace std;

class rectangle;
class circle;
class triangle;

class shape{
    public:
    virtual void draw(){
        cout<<"Drawing shapes"<<endl;
    }
};
class rectangle:public shape{
    public:
    void draw(){
        cout<<"Drawing rectangle"<<endl;
    }
};
class triangle:public shape{
    public:
    void draw(){
        cout<<"Drawing triangle"<<endl;
    }
};
class circle: public shape{
    public:
    void draw(){
        cout<<"Drawing circle"<<endl;
    }
}
;
int main(){
    shape *s[3];
    shape a;
    a.draw();
    for(int i=0;i<3;i++){
        switch(i){
            case 0:
                s[i]=new rectangle();
                s[i]->draw();
            break;
            case 1:      
                s[i]=new triangle();
                s[i]->draw();
            break;
            case 2:
                s[i]=new circle();
                s[i]->draw();
            break;
        }
  
        delete s[i];
    }
        
    return 0;
}