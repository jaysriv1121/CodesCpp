#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    int i =2;
    bool Is_Divided = false;
    while(i<=(n-1)){
        if(n%i==0){
            cout<<"It is not prime"<<endl;
            Is_Divided = true;
        }
        i = i+1;
    }
    if(!Is_Divided){
        cout<<"It is Prime"<<endl;
    }
}
