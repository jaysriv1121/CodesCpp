#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
   // int i = 0;
    int count;
    int c = 0;
    int x = 1;
    for(int i=0; i<n;i++){
        cout << c<< endl; // 0 //1 //1  //2 //3
        count  = x+c; //1  //2  //3  //5 // 8
        c = x;
        x = count; //1 //1 // 2 //3 //5
       // count = x; //1  //2  // 3 //5
    }
}
int main(){
    int n;
    cin >> n;
    int output = fibonacci(n);
    cout << output<< endl;
    return 0;
}
