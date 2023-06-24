#include<iostream>
using namespace std;
int main() {
    char x;
    cout << "Enter the Alphabet" << endl;
    cin >> x;

    if (x >= 'A'&& x<='Z'){
        cout << '1' << endl;
    } else if ( x >= 'a'&& x<='z') {
        cout << '0' << endl;
    }else {
        cout << "-1"<<endl;
    }
}
