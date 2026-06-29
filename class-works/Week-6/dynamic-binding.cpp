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
    virtual void show(){
        cout<<"human"<<endl;
    }
    virtual ~race(){
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
    ~african(){
        cout<<"african class destructor"<<endl;
    }
};
int main(){
    race *r=new race;
    r->show();
    delete r;
    r=new asian;
    r->show();
    delete r;
    r=new african;
    r->show();
    delete r;
    return 0;

}
