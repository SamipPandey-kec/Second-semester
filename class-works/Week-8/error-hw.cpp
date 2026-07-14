// create a function name divide that divides two number and prints the result 
// write a proper error handling mechanism
// 1. if divide by 0
// 2. if wrong data input type

#include <iostream>

using namespace std;

class error{
    public:
    string msg;
    error(string a):msg(a){}
};

void divide(double a, double b) {
    try {
        if (b == 0.0) throw error("Error: Divide by zero.");
        cout << "Result: " << a / b << "\n";
    } 
    catch (const error& e) {
        cout << e.msg << "\n";
    }
}

int main() {
    double num1, num2;

    if (!(cin >> num1) || !(cin >> num2)) {
        cout << "Error: Invalid input type.\n";
        return 1;
    }

    divide(num1, num2);
    return 0;
}