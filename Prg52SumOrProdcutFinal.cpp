#include<iostream>
using namespace std;
int main(){
    int n;
    int m;
    cin >> n>>m;
    int x = 0;
    int c = 0;
    int d = 1;
    while(x<n){
        if( m == 1){
            x++;
            c+=x;
          //  cout << c<< endl;
          //  return 0;
        }

        else if( m == 2){
            x++;
            d *= x;
        }

        else{
            cout << "-1"<< endl;
            return 0;
        }

    }
    cout <<c  << endl;
    cout << d<< endl;
    cout << m<< endl;

    return 0;
}
