//crate a class name distance that represent distance in feet and inch. this class should be completely free of any error and shuld be able to handle any eerror saying that the value of inch cannot be greater than 11 and display the value of inch provided by user

#include<iostream>
using namespace std;

class dist{
    private:
    int feet;
    int inch;

    public:
    class Error{
             public:
        string ierror;

   
        Error(string msg){
            ierror=msg;
        }


    };

    dist(int f=0, int i=0){
        if(i>11){
            throw Error("Value of inch cannot be greater than 11");
        }
        this->feet=f;
        this->inch=i;
    }
    ~dist(){}

    dist add(dist);

    void showdata(){
        cout<<"distance is:"<<endl;
        cout<<feet<<" feet "<<inch<<" inch"<<endl;
    }


};

dist dist::add(dist d){
    dist temp;
    temp.feet=this->feet+d.feet;
    temp.inch=this->inch+d.inch;
    return temp;
}

int main(){
    dist d1,d2,d3;
    int f,i;
    try{
    cout<<"Enter the distance in feet and inch for distance 1 :";
    cin>>f>>i;
    d1=dist(f,i);
    cout<<"\nEnter the distance in feet and inch for distance 2 :";
    cin>>f>>i;
    d2=dist(f,i);
    d3=d1.add(d2);
    d3.showdata();
    }
    catch(dist::Error e){
         cout<<"Error :"<<e.ierror<<endl;
    }

    return 0;


}
