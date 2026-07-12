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
    catch (float ex) {
       
        cout << "Cannot divide by 0" << endl;
    }

    return 0;
}