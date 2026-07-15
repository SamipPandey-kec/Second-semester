//create a template funtion with default datatype integer and create a non template variable int size . this function should display integer or character upto int size 

#include<iostream>
using namespace std;

template <typename T = int>
void Printe(int a){

    for (int i=1;i<=a;i++){
    cout<<i<<" ";
    }

    cout<<endl;
    
    for (int i=1;i<=a;i++){
    cout<<char(i+'A')<<" ";

    }

}

int main(){
    Printe<int>(5);
    Printe<char>(5);
    return 0;
}