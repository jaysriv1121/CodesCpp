#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x = 0;
    int c = 1;
    while(x<n){
        x++;
        c = c*x;
    }
    cout << c<< endl;
}
