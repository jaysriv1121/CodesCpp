#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if(n=0) return 1;
    int input[100];

    for(int i=0; i<n; i++){
        cin >> input[i];
    }
    // Sum of array

    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + input[i];
    }
    cout << sum << endl;
}
