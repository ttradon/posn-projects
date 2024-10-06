#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums;
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    auto kim = find(nums.begin(),nums.end(),0);
    nums.erase(kim);

    nums.insert(nums.begin(),0);
    for(auto i : nums) cout<<i<< " ";
    return 0;
}