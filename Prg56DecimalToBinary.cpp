#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
   //  int x;
     int rem = 0;
     int pv = 1;
     while(n!=0){
        rem = (n%2)*pv + rem;
        pv *= 10;
        n /= 2;
     }
     cout << rem<< endl;
}
