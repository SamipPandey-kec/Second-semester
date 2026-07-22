#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main(){
    vector<int> array={10,30,20,100,50,40};
    vector<int>::iterator it;
    for(it=array.begin();it!=array.end();it++){//for(auto it: array)
        cout<<*it<<" ";
    }
    cout<<endl;
    for(int i=60;i<100;i+=10){
    array.push_back(i);
    }
    for(it=array.begin();it!=array.end();it++){//for(auto it: array)
        cout<<*it<<" ";
    }
    cout<<endl;
    //sorting vector
    sort(array.begin(),array.end());
    for(auto it: array){
        cout<<it<<" ";
    }
    cout<<endl;
    //reverse
    reverse(array.begin(),array.end());
    for(auto it: array){
        cout<<it<<" ";
    }
    cout<<endl;
    //search
    vector<int>::iterator x;
    x=find(array.begin(),array.end(),80);
    if(x!=array.end()){
        cout<<"Number is not found"<<endl;

    }else{
        cout<<"Number found";
    }
    return 0;
}