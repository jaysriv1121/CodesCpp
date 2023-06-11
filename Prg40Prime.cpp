#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    bool Divided = false;
    for(int i = 2; i<n; i++){
        if(n%i==0){
            cout << "Not Prime" << endl;
            Divided = true;
        }
        if(!Divided){
            cout << "Prime"<< endl;
        }
    }

}
