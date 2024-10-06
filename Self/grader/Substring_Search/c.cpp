#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string text;
    string pattern;     

    getline(cin, pattern);
    getline(cin, text);

    int found = text.find(pattern);
    if(found != string::npos) cout<<"1";
    else cout<<"0";
    return 0;
}