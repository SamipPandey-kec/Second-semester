//wap to store the data of student in a file and read the data from the file . 
//Program should have a calss name student with data members name, roll number and marks.
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class student{
    char name[20];
    int rollno;
    float marks;
    public:
    void getdata(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter roll number: ";
        cin>>rollno;
        cout<<"Enter marks: ";
        cin>>marks;
    }
    void displaydata(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<rollno<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
    ~student(){
        cout<<"Destructor called"<<endl;
    }
    student(){
        cout<<"Constructor called"<<endl;
    }
    student(char *n, int r, float m){
        strcpy(name, n);
        rollno = r;
        marks = m;
    }
    void writeToFile(){
        ofstream fout;
        fout.open("student.txt", ios::app);
        fout.write((char*)this, sizeof(*this));
        fout.close();
    }
    void readFromFile(){
        ifstream fin;
        fin.open("student.txt");
        while(fin.read((char*)this, sizeof(*this))){
            displaydata();
        }
        fin.close();
    }

};
int main(){
    student s;
    s.getdata();
    s.writeToFile();
    cout<<"Data written to file"<<endl;
    cout<<"Reading data from file"<<endl;
    s.readFromFile();
    return 0;
}
