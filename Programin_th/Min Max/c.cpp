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
    auto min = min_element(nums.begin(), nums.end());
    auto max = max_element(nums.begin(), nums.end());
    cout<< *min<< endl;
    cout<< *max;
    return 0;
}