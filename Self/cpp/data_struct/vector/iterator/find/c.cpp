#include <bits/stdc++.h>
//#include <iostream>
//#include <vector>
//#include <algorithm>
using namespace std;

int main(){
    vector<int> nums = {15,7,3,54,67,43,2};
    auto it = nums.begin();
    auto it1 = nums.end();

    //find 
    auto find_3 = find(it, it1, 3); 
    cout<< find_3 - nums.begin()<< endl; //differences

    //check if element is exist
    if(find(it, it1, 3) != nums.end()){ // ถ้าหาตรวจไม่พบจะแสดงออกมาเป็นค่า nums.end() -> 0
        cout<< "Found";
    }
    return 0;
}