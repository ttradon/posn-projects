#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    double w;
    string t,p;
    int sale =0;

    double total=0;

    cin>>w>>t>>p>>sale;

    if(w <= 1) total = 50;
    else if(w <= 5) total = 100;
    else if(w <= 10) total = 200;
    else total = 500;

    if(t ==  "standard") total += 0;
    else if(t == "express") total += 10*total/100;

    if(p == "in") total += 30;
    else if(p == "out") total += 70;

    if(sale > 0) total -= sale*total/100;  

    cout<<fixed<<setprecision(1)<<total<<" bath";
    return 0;
}