//create a class template that compares and finds the maximum value of the array
#include <iostream>
using namespace std;

template <class T, int size>
class ArrayMax {
private:
    T arr[size];
    T maxvalue;

public:
    ArrayMax() {}
    void input() {
        cout << "Enter " << size << " elements: " << endl;
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }
    void findmax() {
        maxvalue = arr[0];
        for (int i = 1; i < size; i++) { 
            if (arr[i] > maxvalue) {
                maxvalue = arr[i];
            }
        }
    }
    void show() {
        cout << "The maximum value is: " << maxvalue << endl;
    }
    ~ArrayMax() {}
};

int main() {
    ArrayMax<int, 5> m1;
    m1.input();
    m1.findmax();
    m1.show();
    cout << endl;
    ArrayMax<double, 3> m2;
    m2.input();
    m2.findmax();
    m2.show();

    return 0;
}