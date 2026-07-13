#include <iostream>
using namespace std;

class Stack {
private:
    int arr[4];
    int top;

public:
    class Error {
    public:
        string message;
        Error(string msg) { 
            message = msg; 
        }
    };

    Stack() {
        top = -1; 
    }

    void push(int a) {
        if (top >= 3) {
            throw Error("Stack is full!");
        }
        arr[++top] = a; 
    }

    int pop() {
        if (top == -1) {
            throw Error("Stack is empty!");
        }
        return arr[top--];
    }
};

int main() {
    Stack s1;

    try {
        s1.push(10);
        s1.push(20);
        s1.push(30);
        s1.push(40); 

   

        cout << s1.pop() << endl;
        cout << s1.pop() << endl;
        cout << s1.pop() << endl;
        cout << s1.pop() << endl;

      
    } 
    catch (Stack::Error e) {
        cout << "Error: " << e.message << endl;
    }

    return 0;
}