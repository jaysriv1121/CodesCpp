#include<bits/stdc++.h>
using namespace std;

int TwoSum(int arr[], int n, int target)
{
    for(int i =0; i<n; i++){
        for (int j =i+1; j<n; j++){
            if(arr[i]+arr[j] == target){
                cout << arr[i]<< " "<< arr[j]<< endl;
            }
        }
    }
}
int main()
{
    int n = 5;
    int arr[] = {2,6,5,8,11};
    int target = 14;
    TwoSum(arr,n, target);
}

