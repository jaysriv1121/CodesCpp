#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int i = 2;
    bool divided = false;
    while(i<n){
        if(n%i==0){
            cout << "Not a Prime" << endl;
            divided = true;
            break;
        }
        if(!divided){
            cout << "Prime" << endl;
        }
        i++;
    }
}
