#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int i = 1;
    int var = n;
    while(i<=n){
        int j = 1;
        while(j<=((n-i)+1)){
            cout << var;
            j++;
        }
        cout << endl;
        var--;
        i++;
    }
}
