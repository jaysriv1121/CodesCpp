#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x = 1;
    int y;
    int count = 1;
    while(count<=n){
        y = (3*x)+2;
        if(y%4!=0){
            cout << y << endl;
            count++;
        }
        x++;
    }
}
