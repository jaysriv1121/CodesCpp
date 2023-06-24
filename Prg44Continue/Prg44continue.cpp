#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int i = 1;
    while(i<n){
        if(i == 4){
            continue;
        }
        cout << i << endl;
        i++;
    }
}
