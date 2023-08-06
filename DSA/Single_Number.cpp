#include<bits/stdc++.h>
using namespace std;

int Singlenum(int arr[], int n)
{
    int xorr =0;
    for(int i=0; i<n ; i++)
    {
        xorr = xorr ^ arr[i];
    }
    cout << xorr << endl;
}
int main()
{
    int n=5;
    int arr[] = {4,1,2,1,2};
    Singlenum(arr,n);
}
