#include<iostream>
using namespace std;
int Reverse(int n){
    int q = n;
    int r;
    int s = 0;
    //int s = 0;
    while(q!=0){  //123
        r= q % 10; //3 //2
        s = s*10 + r;  // 300 //
        //place = place/10; //10
        q = q/10; //12
    }
    //cout << s << endl;
    return s;
}

int main(){
    cout<<Reverse(56789)<< endl;
}
