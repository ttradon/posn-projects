#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,4,5,6};
    reverse(nums.begin(),nums.end());
    for(auto i : nums) cout<<i<< " ";
    return 0;
}