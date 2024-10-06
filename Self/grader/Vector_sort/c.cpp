#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    sort(nums.begin(), nums.end());
    for(auto i : nums) cout<< i<< " ";

    cout<< endl;

    sort(nums.begin(), nums.end(), greater<int>());
    for(auto i : nums) cout<< i<< " ";
    return 0;
}