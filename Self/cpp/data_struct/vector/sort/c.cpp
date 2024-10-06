#include <bits/stdc++.h>
//#include <iostream>
//#include <vector>
//#include <algorithm>
using namespace std;

int main(){
    vector<int> nums = {15,7,3,54,67,43,2};
    // sorting from ascendent
    sort(nums.begin(), nums.end());
    for(auto elements : nums) cout<< elements<< " ";
    cout<< endl;

    sort(nums.begin(), nums.end(), greater<int>());
    for(auto elements : nums) cout<< elements<< " ";
    return 0;
}