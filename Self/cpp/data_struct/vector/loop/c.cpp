#include <bits/stdc++.h>
//#include <vector>
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
    for(auto i : nums){
        cout<< i<< " ";
    }
    return 0;
}