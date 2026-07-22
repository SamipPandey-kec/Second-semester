#include<iostream>
#include<string>
using namespace std;
template<class T>
class base{
    protected:
    T data1;
    public:
    base(){}
    base(T a):data1(a){}
    void show(){
        cout<<"data 1 :"<<data1<<endl;
    }
};

template<class T>

class der1:public base<int>{
    T data2;
    public:
    der1(){}
    der1(int a,T b):base<int>(a),data2(b){}
    void show(){
        base<int>::show();
        cout<<"data 2 :"<<data2<<endl;
    }
};
int main(){
    // base<char> x('a');
    // x.show();

    int x=10;
    der1 obj(x,'a');
    obj.show();

    return 0;
}
