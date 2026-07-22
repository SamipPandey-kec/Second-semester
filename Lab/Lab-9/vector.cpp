#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main(){
    vector<int> array={10,20,30,40,50};
    vector<int>::iterator it;
    for(it=array.begin();it!=array.end();it++){//for(auto it: array)
        cout<<*it<<endl;
    }
    for(int i=60;i<100;i+=10){
    array.push_back(i);
    }
    for(it=array.begin();it!=array.end();it++){//for(auto it: array)
        cout<<*it<<endl;
    }
    return 0;
}