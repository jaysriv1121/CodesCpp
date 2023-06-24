#include<iostream>
using namespace std;
int main() {
    int a , b;
    cout << "Enter a and b values" << endl;
    cin >> a ;
    cin >> b ;
    bool isEqual = (a==b);
    bool isGreater = (a>b);
    bool isLesser = (a<b);
    cout << "a is equal to b " << isEqual << endl ;
    cout << "a is Greater than b " << isGreater << endl;
    cout << "a is Lesser than b " << isLesser << endl;

}
