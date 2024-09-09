#include<iostream>
using namespace std;

int fact(int n) {
    if(n == 1) {
        return 1;

    } else {
        return n * fact(n-1);
    }
}

int main()
{
    int n, r;

    cout<<"Input n and r: ";
    cin>>n>>r;

    int fact_n = fact(n);
    int fact_r = fact(r);
    int fact_nr = fact(n-r);
    int fact_nCr = fact_n/(fact_r * fact_nr);

    cout<< fact_nCr << endl;

    return 0;
}