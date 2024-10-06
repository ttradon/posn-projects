#include <bits/stdc++.h>
//#include <vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,3}; //dynamic array
    cout<< nums.empty()<< endl; // not empty return "0"

    nums = {};
    cout<< nums.empty(); // empty return "1"
    return 0;
}