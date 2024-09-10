#include <iostream>

using namespace std;

int countDigits(int num) {
    int count = 0;

    // Handle the special case of 0
    if (num == 0) {
        return 1;
    }

    // Count digits using a while loop
    while (num != 0) {
        num /= 10;
        count++;
    }

    return count;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int digits = countDigits(num);
    cout << "Number of digits in " << num << " is: " << digits << endl;

    return 0;
}