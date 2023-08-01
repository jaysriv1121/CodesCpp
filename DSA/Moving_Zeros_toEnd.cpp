// 2 Pointer approach
#include<bits/stdc++.h>
using namespace std;

void Move_Zeros(int arr[], int n)
{
    int j = -1;
    // finding the first zero element in the array
    for(int i = 0 ; i<n; i++ ){
        if(arr[i] == 0){
            j = i;
            break;

        }
    }
    //swapping the i and j values by keeping the j value at '0'
    for(int i = j+1; i<n; i++){
        if(arr[i]!=0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main()
{
    int n = 7;
    int arr[] = {0,2,0,4,0,7,9};
    Move_Zeros(arr,n);
    for(int i=0; i<n; i++){
        cout << arr[i]<< " ";
    }
}
