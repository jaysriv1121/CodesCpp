#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x;
    int y;
    while(n!=0){
        x = n%10;
        y = (y*10) + x;
        n = n/10;
    }
    cout << y<< endl;
}
