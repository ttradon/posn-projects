#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    vector<int> nums;
    cin>>n;
    while(n--){
        cin>>x;
        nums.push_back(x);
    }
    sort(nums.begin(),nums.end());
    for(auto i : nums) cout<< i<< " ";

    cout<< endl;
    
    sort(nums.begin(),nums.end(), greater<int>());
    for(auto i : nums) cout<< i<< " ";
    return 0;
}