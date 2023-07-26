#include<bits/stdc++.h>
using namespace std;

int Largest_Array(int arr[], int i, int n)
{
    int x = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>x){
            x = arr[i];
        }
    }
    cout << x<< endl;
}

int main()
{
    int n = 5;
    int arr[] = {1,7,4,5,3};
    Largest_Array(arr, 0, 5);
}
