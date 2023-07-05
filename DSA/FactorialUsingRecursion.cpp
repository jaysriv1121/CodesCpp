#include<bits/stdc++.h>
using namespace std;
int factorial(int i, int n)
{
    if(n<1){
    cout << i << endl;
    return 1;
    }
    factorial(i*n,n-1);
}
int main()
{
    int n;
    factorial(1,8);
}
