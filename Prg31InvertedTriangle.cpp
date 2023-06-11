#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int i = 0;
    while(i<=n){
        int star = 1;
        while(star<=(n-i)){
            cout << "*";
            star++;
        }
        cout << endl;
        i++;
    }
}
