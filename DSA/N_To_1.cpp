#include<iostream>
using namespace std;
int N_1(int i, int n)
{
    if(i<=0) return 0;
    cout << i<< endl;
    i--;
    N_1(i,n);
}
int main()
{
    int n;
    cin >>n;
    N_1(n, n);
}
