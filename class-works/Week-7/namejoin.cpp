// lets say there are two classes . in which first class represent fname and second represent lname . use dynamic constructor to concatenate the name and display it 

#include<iostream>
#include<cstring>
using namespace std;

class lname;
class fname;

void operator+(const fname &f, const lname &l);

class fname {
    char * first;

    public:
        fname(const char * f) {
            first = new char[strlen(f) + 1];
            strcpy(first, f);
        }
        ~fname() {
            delete[] first;
        }
        friend void operator+(const fname &f, const lname &l);
};

class lname {
    char * last;

    public:
        lname(const char * l) {
            last = new char[strlen(l) + 1];
            strcpy(last, l);
        }
        ~lname() {
            delete[] last;
        }
        friend void operator+(const fname &f, const lname &l);
};

void operator+(const fname &f, const lname &l) {
    char * fullName = new char[strlen(f.first) + strlen(l.last) + 2]; 
    strcpy(fullName, f.first);
    strcat(fullName, " ");
    strcat(fullName, l.last);
    
    cout << "Full Name is: " << fullName << endl;
    
    delete[] fullName;
}

int main() {
    char f[20], l[20];
    cout << "Enter first name: ";
    cin >> f;
    cout << "Enter last name: ";
    cin >> l;

    fname first(f);
    lname last(l);

    first + last; 

    return 0;
}