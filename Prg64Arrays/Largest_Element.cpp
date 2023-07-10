#include<iostream>
#include<climts>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int input[100];

    if(n<=0) return 0;

    for(int i=0; i<n; i++ ){
        cin>> input[i];
    }
    // Print Array
   /* for (int i=0; i<n; i++){
        cout << input[i]<< endl;
    }*/

    // Largest Element
    int max = INT_MIN;
    for (int i=1; i<n; i++){
        if(input[i]>max){
            max = input[i];
        }
    }
    cout << max<< endl;
}
