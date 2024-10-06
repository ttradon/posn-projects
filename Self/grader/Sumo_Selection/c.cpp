#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums;
    int n,x;
    cin>>n;
    while(n--){
        cin>>x;
        nums.push_back(x);
    }

    auto max1 = max_element(nums.begin(),nums.end());
    auto find1 = find(nums.begin(),nums.end(),*max1);
    int m1 = *max1;
    nums.erase(max1);
    auto max2 = max_element(nums.begin(),nums.end());
    auto find2 = find(nums.begin(),nums.end(),*max2);
    int m2 = *max2;

    cout<< m1+m2<< endl;

    vector<int>location;
    location.push_back(find1-nums.begin()+1);
    location.push_back(find2-nums.begin()+1);
    sort(location.begin(),location.end());
    for(auto i : location) cout<< i<< " ";
    return 0;
}