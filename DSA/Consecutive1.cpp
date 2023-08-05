#include<bits/stdc++.h>
using namespace std;

int Consecutive1(int arr[], int n)
{
        int max = 0;
        int counter = 0;
        for(int i =0; i<n; i++){
            if(arr[i]!=1){
                counter = 0;
                continue;
            }
            counter++;
            if(counter >= max){
                max = counter;
            }
        }
        cout<< max<< endl;
}

int main()
{
    int n=10;
    int arr[] = {1,1,1,1,0,1,1,1,0,1};
    Consecutive1(arr, n);
}
