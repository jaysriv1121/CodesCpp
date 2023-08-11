#include<bits/stdc++.h>
using namespace std;
int Replaced(char input[], int n, char b, char r)
{
    for(int i=0; i<n ; i++){
        if(input[i] == b){
            input[i] = r;
        }
    }
    cout << input<< endl;
}

int main()
{
    int n = 7;
    char input[n];
    cin >> input;

    cout << "Character to be replaced"<< endl;
    char b;
    cin>>b;

    cout << "Character to be replaced by"<< endl;
    char r;
    cin >> r;

    Replaced(input, n, b, r );
}
