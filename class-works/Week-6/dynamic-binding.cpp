//run time binding
#include<iostream>
using namespace std;
class asian;
class african;
class race{
    public:
    race(){
        cout<<"base class constructor"<<endl;
        }
    void virtual show(){
        cout<<"human"<<endl;
    }
    ~race(){
        cout<<"base class destructor"<<endl;
    }
};
class asian:public race{
    public:
    asian(){
        cout<<"derived class constructor"<<endl;
    }
    void show(){
        cout<<"asian"<<endl;
    }
    ~asian(){
        cout<<"derived class destrucotr"<<endl;
    }
};
class african:public race{
    public:
    void show(){
        cout<<"african"<<endl;
    }
};
int main(){
    race *r=new race;
    r->show();
    r=new asian;
    r->show();
    r=new african;
    r->show();
    delete r;
    return 0;

}