#include<bits/stdc++.h>
using namespace std;

int Second_Smallest(int arr[], int n)
{
    int ssmallest= INT_MAX;
    int smallest = arr[0];
    for(int i =1; i<n; i++){
        if(arr[i]<smallest){
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] != smallest && arr[i]< ssmallest){
            ssmallest = arr[i];
        }
    }
    cout <<smallest<< endl;
    cout<<  ssmallest<< endl;
}

int main()
{
    int n =6;
    int arr[] = {10,34, 56, 21, 12, 98};
    Second_Smallest(arr, n);
}
