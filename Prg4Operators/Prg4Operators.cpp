#include<iostream>
using namespace std;
int main(){
    int f;
    cout << "Enter Fahrenheit Value " << endl;
    cin >> f;

    int c;
    c = (f-32)* (5.0/9) ;
    cout << "Celsius value is ";
    cout << c;
}
