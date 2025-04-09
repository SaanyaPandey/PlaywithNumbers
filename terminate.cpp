#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter numbers (negative number to stop):" << endl;

    while (true) {
        cin >> num;

        if (num < 0) {
            cout << "Negative number entered. Program terminated." << endl;
            break;
        }

        cout << "You entered: " << num << endl;
    }

    return 0;
}
