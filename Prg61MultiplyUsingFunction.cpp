#include<iostream>
using namespace std;
int Multiply(int a, int b){
    return a * b;
}
int main(){
    int ans = Multiply(6,5);
    cout << ans << endl;
}
/* Error will be generated if we give only one number as input or more than 2
numbers an input.*/
