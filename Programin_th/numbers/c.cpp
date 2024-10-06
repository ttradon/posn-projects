    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        
        int n;
        cin>>n;

        vector<int> nums(n);
        for(auto &i : nums) cin>>i;

        sort(nums.begin(),nums.end());
        for(int i=0; i<n; i++){
            if(nums[i] != 0){
                swap(nums[0],nums[i]);
                break;
            }
        }

        for(auto i : nums) cout<<i;
        return 0;
    }