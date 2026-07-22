#include<iostream>
#include<map>
#include<string>
#include<iterator>
using namespace std;

int main(){
    map<string,int> name;
    name["ram0"]=10;
    name["ram1"]=40;
    name["ram2"]=20;
    name["ram3"]=30;
    map<string,int>::iterator x;
    for(x=name.begin();x!=name.end();x++){
        cout<<(*x).first<<" :"<<(*x).second<<endl;
    }
    cout<<endl;
    name.erase("ram0");
    for(auto y: name){
        cout<<y.first<<" :"<<y.second<<endl;
    }
    cout<<endl;
    name.insert({"ram4",50});
        for(auto y: name){
        cout<<y.first<<" :"<<y.second<<endl;
    }


    return 0;

}