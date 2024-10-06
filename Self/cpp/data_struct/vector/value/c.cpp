#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> nums(4);

    for(auto &row : nums){
        cin>>row;
    }

    for(auto i : nums){
        cout<<i<< " ";
    }
    return 0;
}