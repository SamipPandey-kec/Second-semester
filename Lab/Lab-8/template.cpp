#include<iostream>
using namespace std;

template<class T>//T is generic/template datatype

T square(T num){//num generic variable
    return num*num;//template function
}
template <class t1, class t2>
t1 add(t1 num1, t2 num2){
    return num1+num2;
}

int main(){
    cout<<square<int>(3)<<endl;
    cout<<square<float>(4.4)<<endl;;
    cout<<square<char>('a')<<endl;
    cout<<add<int,int>(2,3)<<endl;
    cout<<add<int,float>(2,2.5)<<endl;
    cout<<add<char,int>('a',1)<<endl;

    return 0;
}