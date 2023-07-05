 #include<bits/stdc++.h>
 using namespace std;
  int i =0;
  int d =0;
    long long sumOfSeries(long long N) {
        int x = N;
        while(i<=N){
            d =  (x)^3 + d;
            x--;
            i++;
        }
        cout << d << endl;
    }
int main()
{
    int n;
    sumOfSeries(5);
}
