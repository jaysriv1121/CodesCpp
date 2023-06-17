#include<iostream>
using namespace std;
int main(){
    char c;
    int i;
    int charcount;
    int intcount;
    c = cin.get();
    i = cin.get();
    while(c!='$' ){
        charcount++;
        c = cin.get();
    }
    while(i!='$'){
        intcount++;
        i = cin.get();
    }
    cout << charcount << " "<< intcount;
}
