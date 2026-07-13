#include<iostream>
using namespace std;

class Stack {
private:
    int arr[4];
    int top;

public:
    Stack() {
        top = -1; 
    }

    void push(int a) {
       
        arr[++top] = a; 
    }

    int pop() {
        return arr[top--];
    }

    ~Stack() {}
};

int main() {
    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40); 


    cout << s1.pop();
    cout << s1.pop();
    cout << s1.pop();
    cout << s1.pop();

    return 0;
}