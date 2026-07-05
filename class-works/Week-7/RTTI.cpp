#include<iostream>
using namespace std;

class Employee{
    string name;
    public:
    Employee(string name=" "):name(name){}
    virtual ~Employee(){}


};

class Manager:public Employee{
    int id;
    public:
    Manager(string name=" ",int id=0):Employee(name),id(id){}
    ~Manager(){}

};
int main(){
    Employee* e1 = new Manager("John", 101); 
    Manager* m = dynamic_cast<Manager*>(e1);
    if(m!=nullptr){
        cout<<"Dynamic cast successful"<<endl;
    }
    else{
        cout<<"Dynamic cast failed"<<endl;
    }
    return 0;
}