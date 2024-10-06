#include <bits/stdc++.h>
using namespace std;

int main(){
    char number[4];
    cin>>number;
    for(int i = (sizeof(number)/sizeof(number[0]))-1; i>=0; i--){
        cout<< number[i]<< endl;
    }
    return 0;
}