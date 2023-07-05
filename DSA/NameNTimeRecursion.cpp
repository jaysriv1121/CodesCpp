#include<bits/stdc++.h>
using namespace std;
 int i =0;
int Print_Name(int n)
{
    if(i>=n) return 0;
    cout<< "Jay"<< endl;
    i++;
    Print_Name(n);
}

int main()
{
    int n;
    cin >>n;
    Print_Name(n);
}
