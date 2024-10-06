#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums;
    int n, x;
    cin>>n;
    int middle = n/2;
    if(n % 2 == 0){
        while(n--){
            cin>>x;
            nums.push_back(x);
        }
        sort(nums.begin(),nums.end()-middle);
        sort(nums.end()-middle,nums.end(), greater<int>());
        for(auto i : nums) cout<< i<< " ";
    }
    else cout<<"NULL";
    return 0;
}