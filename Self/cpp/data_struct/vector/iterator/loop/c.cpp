#include <bits/stdc++.h>
//#include <iostream>
//#include <vector>
//#include <algorithm>
using namespace std;

int main(){
    vector<int> nums = {15,7,3,54,67,43,2};

    //iterators
    vector<int>::iterator it = nums.begin() + 1;
    auto it2 = nums.begin()+2;
    auto it3 = nums.end()-1;
    cout<< *it;
    cout<< " "<< *it2<< " ";
    cout<< *it3<< endl;

    //looping 
    cout<< "Simple for each"<< endl;
    for(auto x : nums){
        cout<< x<< " ";
    }

    cout<< endl;
    /*for(auto i = nums.begin(); i<nums.end(); i++){
        cout<< *i<< " ";
    }*/
    return 0;
}