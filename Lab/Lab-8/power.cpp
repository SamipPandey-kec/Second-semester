//Defining template function with non template type arguments

//create a template function that should compute power of any on the data type given by the user
#include <iostream>
#include <cmath> 

using namespace std;

template <class T, int x>
T power(T t1) {
    return static_cast<T>(pow(t1, x));
}

int main() {
    cout << power<int, 3>(2) << endl; 
    cout << power<double, 2>(2.5) << endl; 

    return 0;
}
