#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long a,b;
    string syntax;
    cin>>a>>syntax>>b;

    if(syntax == "*") cout<< a*b;
    else if(syntax == "+") cout<<a+b;
    return 0;   
}