#include<bits/stdc++.h>
using namespace std;

bool Palidrome(int i, int n, char arr[])
{
    if(i>=n/2)  {
        cout << "Palindrome"<< endl;
        return true;
    }
    if(arr[i]!=arr[n-i-1]){
        cout<< "Not a Palindrome"<< endl;
        return false;
    }
    return Palidrome(i+1, n, arr);
}
int main()
{
    int n = 4;
    char arr[] = {"SAAS DAAS"};
    Palidrome(0,n, arr);
}
