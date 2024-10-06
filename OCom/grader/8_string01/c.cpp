#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string name;
    getline(cin, name);
    cout<<name<<endl;
    name[2] = '*';
    cout<<name<<endl;
    cout<<name.length();
    return 0;
}