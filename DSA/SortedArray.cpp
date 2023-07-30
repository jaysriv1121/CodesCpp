#include<bits/stdc++.h>
using namespace std;

bool Sorted_Array(int arr[], int n)
{
    for(int i=1; i<n; i++){
        if(arr[i]>arr[i-1]){

        }
        else{
            return false;
        }
    }
    cout << "true"<< endl;
}

int main()
{
    int n =5;
    int arr[] = {6,2,3,4,5};
    Sorted_Array(arr, n);
}
