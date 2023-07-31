#include<bits/stdc++.h>
using namespace std;

int Remove_Duplicates(int arr[], int n)
{
        int i=0;
       for(int j =i+1; j<n; j++){
       if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
       }
    }
    cout<< i+1 << endl;
}

int main()
{
    int n =7;
    int arr[] = {1,1,2,2,2,3,3};
    Remove_Duplicates(arr, n);
}

