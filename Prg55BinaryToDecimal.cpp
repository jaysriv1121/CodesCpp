#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x;
    int y = 0;
    int count = 1;
    while(n!=0){
        x = n%10;
        y = (x* count) + y;
        n /= 10;
        count *= 2;
    }
    cout << y << endl;
}
