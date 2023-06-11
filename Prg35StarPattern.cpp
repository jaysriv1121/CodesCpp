#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=(n-i)){
            cout << " ";
            j++;
        }
        int var = 1;
        char k = '*';
        while(var<= i){
            cout << k;
            var++;
        }
        int s = i-1;
        while(s>=1){
            cout << k;
            s--;
        }
        cout << endl;
        i++;
    }
}
