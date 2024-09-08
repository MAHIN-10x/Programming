#include<iostream>
using namespace std;

int fun(int n) {
    if(n == 1) {
        return 1;
    } else {
        return 1 + fun(n - 1);
    }
}

int main()
{
    
    cout<<fun(3)<<endl;

    return 0;
}