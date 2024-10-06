#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    bool upper = false;
    bool lower = false;

    string x;
    cin>>x;
    for(char c : x){
        if(isupper(c)) upper = true;
        if(islower(c)) lower = true;
    }
    if(upper && lower) cout<<"Mix";
    else if (upper) cout << "All Capital Letter";
    else cout << "All Small Letter";
    return 0;
}