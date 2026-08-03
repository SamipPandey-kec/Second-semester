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
    der1(T a,T b):base<T>(a),data2(b){}
    void show(){
        base<T>::show();
        cout<<"data 2 :"<<data2<<endl;
    }
};
int main(){
    // base<char> x('a');
    // x.show();

    int x=10;
    der1<char> obj1('a','b');
    obj1.show();
    der1<string> obj2("ram","samip");
    obj2.show();

    return 0;
}
