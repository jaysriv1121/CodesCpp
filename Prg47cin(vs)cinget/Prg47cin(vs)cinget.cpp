#include<iostream>
using namespace std;
int main(){
    char c;
    cin >> c;
    int count = 0;
    while(c!='$'){
        cin >> c;
        count++;
    }
    cout << "$ printed!"<< endl;
    cout << count << endl;
}
