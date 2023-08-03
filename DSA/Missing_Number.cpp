#include<bits/stdc++.h>
using namespace std;

int Missing_Number(int arr[], int n)
{
    int sum = (n*(n+1))/2;
    int s2;

    for(int i=0; i<n; i++){
        s2 = s2 + arr[i];
    }
    int missing_num = sum - s2;
    cout << missing_num<< endl;
}
int main()
{
    int n = 6;
    int arr[] = {1,2,3,4,6};
    Missing_Number(arr,n);
}
