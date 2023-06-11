#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows"<< endl;

    cin >> n;

    int i = 1;
    while(i<= n){
        char p = 'A' + i - 1;
        int j = 1;
        while(j <= n){
            char ch = p + j -1;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }
}

