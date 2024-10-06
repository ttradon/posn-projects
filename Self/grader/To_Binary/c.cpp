#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    vector<int> nums;
    while(n != 0){
        nums.push_back(n%2);
        n = floor(n/2);  
    }

    reverse(nums.begin(), nums.end());
    for(auto i : nums) cout<<i;
    return 0;
}