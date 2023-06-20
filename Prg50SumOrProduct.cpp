#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x = 0;
    int c = 0;
    while(x<n){
        x++;
        c+=x;
    }
    cout<< c<< endl;
}
