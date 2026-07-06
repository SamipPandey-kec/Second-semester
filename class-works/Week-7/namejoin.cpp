// lets say there are two classes . in which first class represent fname and second represent lname . use dynamic constructor to concatenate the name and display it 

#include<iostream>
#include<cstring>
using namespace std;

class fname{
    char * first;

    public:
        fname(char * f){
            first = new char[strlen(f) + 1];
            strcpy(first, f);
        }
        ~fname(){
            delete[] first;
        }
};

class lname{
    char * last;

    public:
        lname(char * l){
            last = new char[strlen(l) + 1];
            strcpy(last, l);
        }
        ~lname(){
            delete[] last;
        }
};

int main(){
    char f[20], l[20];
    cout<<"Enter first name: ";
    cin>>f;
    cout<<"Enter last name: ";
    cin>>l;

    fname first(f);
    lname last(l);

    char * fullName = new char[strlen(f) + strlen(l) + 2]; 
    strcpy(fullName, f);
    strcat(fullName, " ");
    strcat(fullName, l);

    cout<<"Full Name: "<<fullName<<endl;

    delete[] fullName;

    return 0;
}