#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number"<< endl;
    cin >> n;

    int i = 0;
    int a =0;
    int b = 1;
    int c = 0;
    while(i<(n-1)){
        c = a + b;
        a = b;
        b = c;
        i++;
    }
    cout << c << endl;
}

