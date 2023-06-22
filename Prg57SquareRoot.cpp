#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x = 1;
    int y;
    while(n!=0){
        y = x*x;
        if(y>n){
            x--;
            cout<< x<< endl;
            return 0;
        }
        x++;
    }
    cout << "Enter Number greater than 0"<< endl;
}
