#include <iostream>
#include <cmath>  // for sqrt()
using namespace std;

// Function to calculate square root
double findSquareRoot(double num) {
    return sqrt(num);
}

int main() {
    double number;

    cout << "Enter a number: ";
    cin >> number;

    if (number < 0) {
        cout << "Square root of a negative number is not real." << endl;
    } else {
        double result = findSquareRoot(number);
        cout << "Square root of " << number << " is: " << result << endl;
    }

    return 0;
}
