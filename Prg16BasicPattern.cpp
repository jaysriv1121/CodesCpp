#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows" << endl;

    cin >> n;

    int i = 1;
    while(i <= n){
        int j =1;
        int var = 1;
        while(j <= n){
            cout << var;
            var = var + 1;
            j  = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
