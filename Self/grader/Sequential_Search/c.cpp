#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,x;
    cin>>n>>x;
    vector<int> nums(n);

    for(auto &i : nums){
        cin>>i;
    } 
    auto it = find(nums.begin(), nums.end(), x);
    if(it != nums.end()){
        cout<< it - nums.begin();
    }
    else cout<<0;
    return 0;
}