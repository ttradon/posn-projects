#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n < 0 || n > 200) cout<<"NULL";
    else if(n%2 == 0) cout<<"Even";
    else cout<<"Odd";
    return 0;
}