#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows"<< endl;

    cin >> n;

    int i = 1;
    while(i<= n){
        char p = 'A';
        int j = 1;
        while(j <= n){
            cout << p;
            p++;
            j++;
        }
        cout << endl;
        i++;
    }
}
