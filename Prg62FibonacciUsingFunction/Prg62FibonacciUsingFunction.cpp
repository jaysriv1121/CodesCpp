// major flaw- nth digit is also being printed at the end of the output.
#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    int i = 1;
    int count;
    int c = 0;
    int x = 1;
    while( i<n){  // for loop can also be used.
       // cout << c<< endl; // 0 //1 //1  //2 //3
        count  = x+c; //1  //2  //3  //5 // 8
        c = x;
        x = count; //1 //1 // 2 //3 //5
        i++;
    }
    cout << c<< endl;
   // return 0;
}
int main(){
    fibonacci(10);
   // int n = 10;
   // cout << fibonacci(n);
    //return 0;
   // cin >> n;
   // int output = fibonacci(n);
   // cout << output<< endl;
   // return 0;
}
