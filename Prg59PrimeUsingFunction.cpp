#include<iostream>
using namespace std;
bool isPrime(int n){
    int x = 2;
    while(x<n){
        if(n%x==0){
            cout<< "Is Not Prime"<< endl;
           return false;
        }
        x++;
    }
    cout<< "Is Prime"<< endl;
    return true;
}
int main(){
    int n;
    bool output = isPrime(35);
    cout << output << endl;
}
