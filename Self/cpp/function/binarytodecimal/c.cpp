#include <bits/stdc++.h>
using namespace std;

int main(){
    string x = "101010111111";
    int sum=0;
    for(int i=x.length()-1; i>=0; i--){
        int digit = x[i] - '0';
        sum += digit*(pow(2,x.length()-i-1));
        cout<< digit<< " ";
    }
    cout<<endl<<sum;
    return 0;
}