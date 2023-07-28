#include<bits/stdc++.h>
using namespace std;

int Second_Largest(int arr[], int i, int n)
{
    int a = arr[0];
    int x = INT_MIN;
    for(int i=0; i<n; i++){  // 0  1  2  3  4
        if(arr[i]> x){
            a = x;  // Int_min  42  58  59
            x = arr[i];  // 42  58   59  78
        }
    }
    cout << a;
}

int main()
{
    int n =5;
    int arr[] = { 42,36, 58, 59, 78};
    Second_Largest(arr, 0, 5);
}
