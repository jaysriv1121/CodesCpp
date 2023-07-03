#include<iostream>
using namespace std;
int Palindrome(int n){
    int x =n;
    int d;
    int dest = 0;
    while(x>0){
        d = x%10;
        dest =  dest*10 + d;
        x/=10;
    }
    if(n==dest){
            //return true;
        cout<< "Number is Palindrome"<< endl;
    }
    else{
      //  return false;
        cout<< "Number is not Palindrome"<< endl;
    }
}
int main(){
    int a;
    cin >> a;
    Palindrome(a);
}
