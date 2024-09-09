#include<iostream>

using namespace std;

int decimalToBinary(int n) {

    int pow = 1;
    int answer = 0;
    while(n > 0) {
        int rem = n % 2;
        n = n/2;
        answer += rem * pow;
        pow *= 10;
    }

    return answer;
}

int main()
{
    cout<<decimalToBinary(55)<<endl;
}