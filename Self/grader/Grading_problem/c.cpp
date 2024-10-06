#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n < 0 || n > 100) cout<<"Invalid";
    else if(n >= 80) cout<<"4";
    else if(n >= 60) cout<<"3";
    else if(n >= 40) cout<<"2";
    else cout<<"1";
    return 0;
}