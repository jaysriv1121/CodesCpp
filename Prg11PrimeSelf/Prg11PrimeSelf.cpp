#include<iostream>
using namespace std;
int main() {
    int N;
    cout << "Enter the number" << endl;

    cin >> N;

    int i = 2;
    bool Is_Divided = false;
    while(i <= (N-1)){
        if (N % i == 0){
            cout << "Number is not prime" << endl;
            Is_Divided = true;
            }
            i  = i+1;
    }
        if(Is_Divided == false){      // instead of writing Is_Divided = false we can write !Is_Divided.
            cout<<"Number is Prime"<< endl;
        }
        /*if(N % i != 0){
            cout << "Number is Prime" << endl;
        }*/
        //i = i+1;
        }

        //cout << "n is prime"<< endl;

