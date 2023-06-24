#include<iostream>
using namespace std;
int main(){
    char c;
    int lowercaseCount = 0;
    int digitCount = 0;
    int whitespaceCount = 0;
    while(cin.get(c)&& c!='$'){
        if(islower(c))
            lowercaseCount++;
        else if(isdigit(c))
            digitCount++;
        else if(c == ' '||c == '\t'|| c == '\n'){
            whitespaceCount++;
        }
    }
    cout << lowercaseCount<< endl;
    cout<< digitCount<< endl;
    cout << whitespaceCount << endl;

    return 0;
}
