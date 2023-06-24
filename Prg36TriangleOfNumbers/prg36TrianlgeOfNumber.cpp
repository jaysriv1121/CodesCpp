#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int i = 1;
    while(i<=n){
            int k = n-i;
            int j = 1;
            while(j<=k){
                cout << " ";
                j++;
            }
            j = 1;
            int n = i;
            while(j<=i){
                cout << n;
                n++;
                j++;
            }
            int p = (2*i)-2;
            int l = i-1;
            while(l>=1){
                cout << p;
                p--;
                l--;
            }
         cout << endl;
         i++;
    }
}
