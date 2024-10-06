#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string sex;
    double w,h;
    int age;

    cin>>sex>>w>>h>>age;

    if(sex == "MALE"){
        cout<< 66+(13.7*w)+(5*h)-(6.8*age);
    }
    else if(sex == "FEMALE"){
        cout<< 665+(9.6*w)+(1.8*h)-(4.7*age);
    }
    else{
        cout<< "MALE OR FEMALE";
    }
    return 0;
}