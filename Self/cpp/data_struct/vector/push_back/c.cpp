#include <bits/stdc++.h>
//#include <vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,3}; //dynamic array
    nums.push_back(4);
    cout<< endl<< "PUSH_BACK"<< endl;
    for(auto i : nums){
            cout<< i<< " ";
    }
    return 0;
}