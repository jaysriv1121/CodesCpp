#include<iostream>
using namespace std;
int main()
{
    int n;

    int i, chk=0, j;
    cout<<"Prime Numbers Between 1 to 100 are:\n";
    cin >> n;
    for(i=1; i<=n; i++)
    {
        for(j=2; j<i; j++)
        {
           if(i%j==0)
           {
               chk++;
               break;
           }
        }
        if(chk==0 && i!=1)
            cout<<i<<endl;
        chk = 0;
    }
    cout<<endl;
    return 0;
}
