#include<iostream>
using namespace std;
int x =0;
//int i = 0;
int  Sum_N(int n)
{
   // if(i>=n) return 0;
    for(int i=1; i<=n; i++){
        x+=i;
    }
    cout<<x<<endl;
   /* i++;
    x= x+i;
    Sum_N(n);
    cout <<x<<endl; */
}
int main()
{
    int n;
    Sum_N(5);
}
