#include <iostream>

using namespace std;

int reverseInteger(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    int reversedNumber = reverseInteger(number);
    cout << "Reversed number: " << reversedNumber << endl;

    return 0;
}