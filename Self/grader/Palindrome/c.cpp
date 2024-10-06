#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string str;
    cin>>str;

    int left=0;
    int right=str.length()-1;
    int score=0;

    while(left<right){
        if(str[left] != str[right]) score=1;
        left++;
        right--;
    }
    if(score == 1) cout<<"no";
    else cout<<"yes";
    return 0;
}