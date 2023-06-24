#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows" << endl;

    cin >> n;

    int i = 1;
    while(i <= n){
        int j =1;
        int var = n;
        while(j <= n){
            cout << var;
            var = var - 1;
            j++;
        }
        cout << endl;
        i++;
    }
}
