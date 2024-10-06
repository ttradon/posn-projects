#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,remain=0,totals=0,total=1;
    cin>>n;
    while(n>total){
        total *=2;
        totals++;
    }
    remain = total-n;
    cout<< remain<<endl;
    cout<< totals;
    return 0;
}