#include<iostream>
using namespace std;

template<class T>

T square(T num){
    return num*num;
}

int main(){
    cout<<square<int>(3)<<endl;
    cout<<square<float>(4.4)<<endl;;
    cout<<square<char>('a');

    return 0;
}