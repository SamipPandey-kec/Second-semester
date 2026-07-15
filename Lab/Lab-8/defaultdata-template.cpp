#include<iostream>
using namespace std;

template<class T>//T is generic/template datatype

T square(T num){//num generic variable
    return num*num;//template function
}
template <class t1=int, class t2=float>//with default datatype
t2 add(t1 num1=10, t2 num2=15){
    return num1+num2;
}

int main(){
    cout<<square<int>(3)<<endl;
    cout<<square<float>(4.4)<<endl;;
    cout<<square<char>('a')<<endl;
    cout<<add<int,int>(6,3)<<endl;
    cout<<add<int,float>(2,2.5)<<endl;
    cout<<add<char,int>('a',1)<<endl;
    cout<<add(2,65)<<endl;
    cout<<add()<<endl;

    return 0;
}