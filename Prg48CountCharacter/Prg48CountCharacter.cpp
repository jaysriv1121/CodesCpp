#include<iostream>
using namespace std;
int main(){
    char c;
    c = cin.get();
    int countip = 0;
    int countdigit = 0;
    int countspace = 0;
    while(c!='$' ){
        if(islower(c)){
            countip++;
            c =cin.get();
        }
        else if(isdigit(c)){
            countdigit++;
            cin.get(c);
        }

        else if(c = ' '|| c == '\n' || c == '\t'){
            countspace++;
         ababc dab   c = cin.get();
        }
    }
    cout << countip << ' '<<countdigit<< ' '<< countspace<<endl;
}
