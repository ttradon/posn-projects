#include <bits/stdc++.h>
using namespace std;

int main(){
    int nums, odd=0, even=0;
    cin>>nums;
    string n = to_string(nums);
    if(n.length() != 4) cout<< "NULL";
    else{
        for(int i=3; i>=0; i--){
            int digit = n[i] - '0';
            if(i == 0){
                if(digit == '0') cout<< "NULL";
            }
            if(digit % 2 == 0){
                cout<< "Even"<< " ";
                even++;
            }
            else{
                cout<< "Odd"<< " ";
                odd++;
            }
        }
        cout<<endl;
        cout<< "Even: "<< even<< ", Odd: "<< odd;
    }    
    return 0;
}