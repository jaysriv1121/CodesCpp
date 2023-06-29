#include<iostream>
using namespace std;
int count(int n){
    int x = n;  //Not touching input data - Important Note
     int digits = 0;
     //int s;
     while(x!=0){
         x /= 10;  //54  //5  //0
         digits++;   //1  //2 //3
     }
     return digits;
}
int main(){
    count(134);
}
