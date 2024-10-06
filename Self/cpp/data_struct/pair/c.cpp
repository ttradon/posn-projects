#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<string, int>> v;
    int n=4;
    while(n--){
        int x;
        string sx;
        cin>>sx>>x;
        v.push_back({sx,x});
    }
    for(auto i : v){
        cout<< i.second;
    }
    return 0;
}