#include <bits/stdc++.h>
using namespace std;

int find_max(string a, string b){
    return max(a.length(), b.length());
}

int main(){
    string m;
    string n;
    getline(cin, m);
    getline(cin, n);
    cout<< find_max(m,n);
    return 0;
}