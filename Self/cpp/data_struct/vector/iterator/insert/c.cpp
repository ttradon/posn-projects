#include <bits/stdc++.h>
//#include <iostream>
//#include <vector>
//#include <algorithm>
using namespace std;

int main(){
    vector<int> nums = {15,7,3,54,67,43,2};
    auto it = nums.begin();
    nums.insert(it,60);
    for(auto i : nums) cout<< i<< " ";
    return 0;
}