#include<iostream>
using namespace std;
int main() {
    int N;
    cout << "Enter the number" << endl;

    cin >> N;

    int i = 2;
    bool divided = false;
    while (i < N) {
        if (N%i == 0){
            cout << "Not Prime" << endl;
            divided = true;
        }
        i = i+1;
    }
    if (!divided) {
        cout << "prime" << endl;
    }
    }

/*while(i <= (N-1)){
        if (N%i == 0){
            cout << "Number is not prime" << endl;
            }
        if(N%i != 0){
            //i == i+1;
        }
        i = i+1;
        }
        cout << "n is prime"<< endl; */
