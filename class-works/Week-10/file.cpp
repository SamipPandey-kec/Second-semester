#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("file.txt");
    fout<<"Hello World";
    fout.close();
    ifstream fin;
    fin.open("file.txt");
    char ch;
    while(fin)
    {
        fin.get(ch);
        cout<<ch;
    }
    fin.close();
}