#include<iostream>
using namespace std;
int factorial(int n){
    int x = 1;
    int i = 1;
    while(i<=n){
        x = x*i;
        i++;
    }
    return x;
}
int main(){
    int r;
    int n;
    cin >> n>>r;
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_r = factorial(n-r);
    int output = fact_n/(fact_r*fact_n_r);
    cout << output << endl;
}
