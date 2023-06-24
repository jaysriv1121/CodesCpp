#include<iostrea>
using namespace std;
int fibonacci(int n){
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
}
