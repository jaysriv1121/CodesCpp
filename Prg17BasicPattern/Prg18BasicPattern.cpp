#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows"<< endl;

    cin >> n;

    int i = 1;
    while(i<=n){
        int p =i;
        int j = 1;
        while(j<=i){
            cout << p;
            p++;
            j++;
        }
        cout << endl;
        i++;
    }
}
