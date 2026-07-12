#include <iostream>
using namespace std;

void divide(float x, float y){
     if (y == 0) {
            throw y; 
        }
        cout << "result is : " << x / y << endl; 
}

int main() {
    float x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    try {
        divide(x,y);
       
    }

    catch(float x){
        cout<<"CAnnot diviede by zero"<<endl;
    }


    catch(...){
        cout<<"cannnot divide by zero"<<endl;
    }


    return 0;
}