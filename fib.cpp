#include <iostream>
using namespace std;

// Function to print Fibonacci series up to n terms
void printFibonacci(int n) {
    int a = 0, b = 1, next;

    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int terms;
    cout << "Enter number of terms: ";
    cin >> terms;

    cout << "Fibonacci Series: ";
    printFibonacci(terms);

    return 0;
}
