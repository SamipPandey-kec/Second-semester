#include<iostream>
#include<string>
using namespace std;
template<class T>
class base{
    protected:
    T data;
    public:
    base(){}
    base(T a):data(a){}
    void show(){
        cout<<"data :"<<data<<endl;
    }
};
class der1:public base<int>{//overriding base class datatype(because we are derving non template calss from template class)
    public:
    der1(){}
    der1(int a):base<int>(a){}
};
int main(){
    // base<char> x('a');
    // x.show();

    int x=10;
    der1 obj(x);
    obj.show();

    return 0;
}
