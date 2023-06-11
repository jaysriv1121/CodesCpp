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
        while(var<=i){
            cout << var;
            var++;
            j++;
        }
        int k = i - 1;
        while(k>=1){
            cout << k;
            k--;
        }
        cout << endl;
        i++;
    }
}
