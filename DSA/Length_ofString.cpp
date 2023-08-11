#include<bits/stdc++.h>
using namespace std;
int lengthOfString(char arr[])
{
        int counter = 0;
        for(int i=0; arr[i] !='\0'; i++){
                counter++;
        }
        cout <<counter<< endl;
}
int main()
{
    char arr[10];
    cout << "Enter name"<< endl;
    cin >> arr;
    lengthOfString(arr);
}
