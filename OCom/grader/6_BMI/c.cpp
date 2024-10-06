#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    double w,h,bmi;
    cin>>w>>h;
    h = (h/100);
    bmi = w/pow(h,2);
    cout<<bmi<<" ";
    if(bmi < 18.5) cout<<"UNDERWEIGHT";
    else if(bmi < 25) cout<<"NORMAL";
    else if(bmi < 30) cout<<"OVERWEIGHT";
    else if(bmi < 35) cout<<"OBESE";
    else cout<<"EXTREMLY OBESE";
    return 0;
}