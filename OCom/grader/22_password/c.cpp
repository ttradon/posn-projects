#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    const string digit = {'0','1','2','3','4','5','6','7','8','9'};
    
    bool isint = false;

    string str;
    cin>>str;

    for(char c : str){
        for(int i=0; i<digit.length(); i++){
            if(c == digit[i]){
                isint = true;
            }
        }
    }

    if(isint) cout<<"Yes";
    else cout<<"No";
    return 0;
}