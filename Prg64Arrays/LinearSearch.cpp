#include<iostream>
using namespace std;
int Linear_Search(int n, int input[], int num)
{
    for(int i=0; i<n; i++){
        if(num == input[i]){
            cout << i << endl;
            return 0;
        }

    }
    cout<<"-1"<< endl;
}

int main()
{
    int n;
    cout << "Enter number"<< endl;
    cin >>n;

    int num;
    cout << "Enter the value to be searched"<< endl;
    cin >> num;

    cout << "Enter array"<< endl;
    int input[10];

    for(int i =0; i<n; i++){
        cin >> input[i];
    }
    Linear_Search(n, input, num);
}
