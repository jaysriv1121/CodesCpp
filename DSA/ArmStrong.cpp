#include<bits/stdc++.h>
using namespace std;
int Armstrong(int n){
    int x=n;
    int count = 0;
    while(x>0){
        count++;
        x/=10;
    }
    int a= n;
    int result = 0;
    while(a>0){
        int d=a%10;
        result += pow(d,count);
        a/=10;
    }
    cout<< result<< endl;
}
int main(){
    int num;
    cin >> num;
    Armstrong(num);
}
